
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int protocol; } ;
struct TYPE_2__ {unsigned int rx_bytes; int rx_packets; int rx_dropped; int rx_crc_errors; int rx_frame_errors; int collisions; int rx_fifo_errors; int rx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct mace_frame {unsigned int rcvsts; unsigned int rcvcnt; int data; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct sk_buff*,struct net_device*) ;
 struct sk_buff* FUNC_1 (struct net_device*,unsigned int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int ,unsigned int) ;
 int FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_4, struct mace_frame *VAR_5)
{
 struct sk_buff *VAR_6;
 unsigned int VAR_7 = VAR_5->rcvsts;

 if (VAR_7 & (VAR_3 | VAR_0 | VAR_2 | VAR_1)) {
  VAR_4->stats.rx_errors++;
  if (VAR_7 & VAR_3)
   VAR_4->stats.rx_fifo_errors++;
  if (VAR_7 & VAR_0)
   VAR_4->stats.collisions++;
  if (VAR_7 & VAR_2)
   VAR_4->stats.rx_frame_errors++;
  if (VAR_7 & VAR_1)
   VAR_4->stats.rx_crc_errors++;
 } else {
  unsigned int VAR_8 = VAR_5->rcvcnt + ((VAR_7 & 0x0F) << 8 );

  VAR_6 = FUNC_1(VAR_4, VAR_8 + 2);
  if (!VAR_6) {
   VAR_4->stats.rx_dropped++;
   return;
  }
  FUNC_4(VAR_6, 2);
  FUNC_3(VAR_6, VAR_5->data, VAR_8);

  VAR_6->protocol = FUNC_0(VAR_6, VAR_4);
  FUNC_2(VAR_6);
  VAR_4->stats.rx_packets++;
  VAR_4->stats.rx_bytes += VAR_8;
 }
}
