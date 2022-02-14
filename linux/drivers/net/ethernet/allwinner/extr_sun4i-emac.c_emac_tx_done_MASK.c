
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct emac_board_info {unsigned int tx_fifo_stat; int dev; } ;


 int FUNC_0 (int ,char*,unsigned int) ;
 scalar_t__ FUNC_1 (struct emac_board_info*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0, struct emac_board_info *VAR_1,
     unsigned int VAR_2)
{

 VAR_1->tx_fifo_stat &= ~(VAR_2 & 3);
 if (3 == (VAR_2 & 3))
  VAR_0->stats.tx_packets += 2;
 else
  VAR_0->stats.tx_packets++;

 if (FUNC_1(VAR_1))
  FUNC_0(VAR_1->dev, "tx done, NSR %02x\n", VAR_2);

 FUNC_2(VAR_0);
}
