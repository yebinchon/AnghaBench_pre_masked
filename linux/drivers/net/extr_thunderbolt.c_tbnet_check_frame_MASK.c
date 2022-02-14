
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int u32 ;
struct thunderbolt_ip_frame_header {int frame_id; int frame_index; int frame_size; int frame_count; } ;
struct TYPE_5__ {int flags; } ;
struct tbnet_frame {TYPE_1__ frame; } ;
struct TYPE_8__ {int rx_missed_errors; int rx_length_errors; int rx_over_errors; int rx_crc_errors; } ;
struct TYPE_6__ {unsigned int frame_count; unsigned int frame_index; unsigned int frame_id; } ;
struct tbnet {TYPE_4__ stats; TYPE_3__* skb; TYPE_2__ rx_hdr; } ;
struct TYPE_7__ {scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (struct tbnet_frame const*) ;

__attribute__((used)) static bool FUNC_3(struct tbnet *VAR_4, const struct tbnet_frame *VAR_5,
         const struct thunderbolt_ip_frame_header *VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9, VAR_10;
 unsigned int VAR_11;

 if (VAR_5->frame.flags & VAR_1) {
  VAR_4->stats.rx_crc_errors++;
  return 0;
 } else if (VAR_5->frame.flags & VAR_0) {
  VAR_4->stats.rx_over_errors++;
  return 0;
 }


 VAR_11 = FUNC_2(VAR_5);
 if (VAR_11 <= sizeof(*VAR_6)) {
  VAR_4->stats.rx_length_errors++;
  return 0;
 }

 VAR_8 = FUNC_1(VAR_6->frame_count);
 VAR_9 = FUNC_1(VAR_6->frame_size);
 VAR_10 = FUNC_0(VAR_6->frame_index);
 VAR_7 = FUNC_0(VAR_6->frame_id);

 if ((VAR_9 > VAR_11 - sizeof(*VAR_6)) || !VAR_9) {
  VAR_4->stats.rx_length_errors++;
  return 0;
 }




 if (VAR_4->skb && VAR_4->rx_hdr.frame_count) {

  if (VAR_8 != VAR_4->rx_hdr.frame_count) {
   VAR_4->stats.rx_length_errors++;
   return 0;
  }




  if (VAR_10 != VAR_4->rx_hdr.frame_index + 1 ||
      VAR_7 != VAR_4->rx_hdr.frame_id) {
   VAR_4->stats.rx_missed_errors++;
   return 0;
  }

  if (VAR_4->skb->len + VAR_9 > VAR_2) {
   VAR_4->stats.rx_length_errors++;
   return 0;
  }

  return 1;
 }


 if (VAR_8 == 0 || VAR_8 > VAR_3 / 4) {
  VAR_4->stats.rx_length_errors++;
  return 0;
 }
 if (VAR_10 != 0) {
  VAR_4->stats.rx_missed_errors++;
  return 0;
 }

 return 1;
}
