
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct pch_can_priv {TYPE_3__* regs; TYPE_1__* ndev; } ;
struct net_device_stats {int tx_packets; int tx_bytes; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {TYPE_2__* ifregs; } ;
struct TYPE_5__ {int mcont; int creq; int cmask; } ;
struct TYPE_4__ {struct net_device_stats stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct net_device*,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;
 struct pch_can_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_5, u32 VAR_6)
{
 struct pch_can_priv *VAR_7 = FUNC_4(VAR_5);
 struct net_device_stats *VAR_8 = &(VAR_7->ndev->stats);
 u32 VAR_9;

 FUNC_0(VAR_5, VAR_6 - VAR_3 - 1);
 FUNC_3(VAR_1 | VAR_0,
    &VAR_7->regs->ifregs[1].cmask);
 FUNC_6(&VAR_7->regs->ifregs[1].creq, VAR_6);
 VAR_9 = FUNC_1(FUNC_2(&VAR_7->regs->ifregs[1].mcont) &
     VAR_2);
 VAR_8->tx_bytes += VAR_9;
 VAR_8->tx_packets++;
 if (VAR_6 == VAR_4)
  FUNC_5(VAR_5);
}
