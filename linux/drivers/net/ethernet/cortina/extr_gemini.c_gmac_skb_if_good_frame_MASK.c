
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int chksum_status; unsigned int status; scalar_t__ perr; scalar_t__ derr; } ;
union gmac_rxdesc_0 {TYPE_1__ bits; } ;
struct sk_buff {int ip_summed; } ;
struct TYPE_4__ {unsigned int rx_bytes; int rx_packets; int rx_frame_errors; int rx_crc_errors; int rx_over_errors; int rx_length_errors; int rx_errors; } ;
struct gemini_ethernet_port {TYPE_2__ stats; int napi; int * rx_csum_stats; int * rx_stats; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 struct sk_buff* FUNC_4 (int *) ;

__attribute__((used)) static struct sk_buff *FUNC_5(struct gemini_ethernet_port *VAR_4,
           union gmac_rxdesc_0 VAR_5,
           unsigned int VAR_6)
{
 unsigned int VAR_7 = VAR_5;
 unsigned int VAR_8 = VAR_5;
 struct sk_buff *VAR_9 = ((void*)0);

 VAR_4->rx_stats[VAR_8]++;
 VAR_4->rx_csum_stats[VAR_7]++;

 if (VAR_5 || VAR_5 ||
     VAR_8 || VAR_6 < VAR_1 ||
     VAR_7 >= VAR_2) {
  VAR_4->stats.rx_errors++;

  if (VAR_6 < VAR_1 || FUNC_2(VAR_8))
   VAR_4->stats.rx_length_errors++;
  if (FUNC_3(VAR_8))
   VAR_4->stats.rx_over_errors++;
  if (FUNC_0(VAR_8))
   VAR_4->stats.rx_crc_errors++;
  if (FUNC_1(VAR_8))
   VAR_4->stats.rx_frame_errors++;
  return ((void*)0);
 }

 VAR_9 = FUNC_4(&VAR_4->napi);
 if (!VAR_9)
  goto update_exit;

 if (VAR_7 == VAR_3)
  VAR_9->ip_summed = VAR_0;

update_exit:
 VAR_4->stats.rx_bytes += VAR_6;
 VAR_4->stats.rx_packets++;
 return VAR_9;
}
