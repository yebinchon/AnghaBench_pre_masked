
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rcar_can_priv {int tx_head; size_t tx_tail; TYPE_1__* regs; scalar_t__* tx_dlc; } ;
struct net_device_stats {int tx_bytes; int tx_packets; } ;
struct net_device {struct net_device_stats stats; } ;
struct TYPE_2__ {int isr; int tfcr; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,size_t) ;
 int FUNC_1 (struct net_device*,int ) ;
 struct rcar_can_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int *) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_5)
{
 struct rcar_can_priv *VAR_6 = FUNC_2(VAR_5);
 struct net_device_stats *VAR_7 = &VAR_5->stats;
 u8 VAR_8;

 while (1) {
  u8 VAR_9 = FUNC_4(&VAR_6->regs->tfcr);

  VAR_9 = (VAR_9 & VAR_3) >>
     VAR_4;
  if (VAR_6->tx_head - VAR_6->tx_tail <= VAR_9)
   break;
  VAR_7->tx_packets++;
  VAR_7->tx_bytes += VAR_6->tx_dlc[VAR_6->tx_tail %
      VAR_1];
  VAR_6->tx_dlc[VAR_6->tx_tail % VAR_1] = 0;
  FUNC_0(VAR_5, VAR_6->tx_tail % VAR_1);
  VAR_6->tx_tail++;
  FUNC_3(VAR_5);
 }

 VAR_8 = FUNC_4(&VAR_6->regs->isr);
 FUNC_5(VAR_8 & ~VAR_2, &VAR_6->regs->isr);
 FUNC_1(VAR_5, VAR_0);
}
