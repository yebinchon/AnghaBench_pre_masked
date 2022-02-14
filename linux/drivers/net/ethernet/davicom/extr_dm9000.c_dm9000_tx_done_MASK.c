
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct board_info {scalar_t__ tx_pkt_cnt; int queue_pkt_len; int queue_ip_summed; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct net_device*,int ,int ) ;
 int FUNC_2 (struct board_info*,int ) ;
 scalar_t__ FUNC_3 (struct board_info*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_3, struct board_info *VAR_4)
{
 int VAR_5 = FUNC_2(VAR_4, VAR_0);

 if (VAR_5 & (VAR_2 | VAR_1)) {

  VAR_4->tx_pkt_cnt--;
  VAR_3->stats.tx_packets++;

  if (FUNC_3(VAR_4))
   FUNC_0(VAR_4->dev, "tx done, NSR %02x\n", VAR_5);


  if (VAR_4->tx_pkt_cnt > 0)
   FUNC_1(VAR_3, VAR_4->queue_ip_summed,
        VAR_4->queue_pkt_len);
  FUNC_4(VAR_3);
 }
}
