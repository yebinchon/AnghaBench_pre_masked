
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct phy_device {scalar_t__ speed; } ;
struct et131x_adapter {TYPE_2__* regs; TYPE_1__* netdev; } ;
struct TYPE_6__ {int num_pkt_done; int max_pkt_time; } ;
struct TYPE_5__ {TYPE_3__ rxdma; } ;
struct TYPE_4__ {struct phy_device* phydev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int *) ;

__attribute__((used)) static void FUNC_1(struct et131x_adapter *VAR_2)
{
 struct phy_device *VAR_3 = VAR_2->netdev->phydev;




 if ((VAR_3->speed == VAR_1) || (VAR_3->speed == VAR_0)) {
  FUNC_0(0, &VAR_2->regs->rxdma.max_pkt_time);
  FUNC_0(1, &VAR_2->regs->rxdma.num_pkt_done);
 }
}
