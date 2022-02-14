
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ucc_geth_private {TYPE_4__* ug_regs; TYPE_3__* uccf; struct ucc_geth_info* ug_info; TYPE_1__* phydev; } ;
struct ucc_geth_info {int extensionField; int pausePeriod; int transmitFlowControl; int receiveFlowControl; int aufc; } ;
struct net_device {int dummy; } ;
struct ethtool_pauseparam {int tx_pause; int rx_pause; } ;
struct TYPE_8__ {int maccfg1; int uempr; } ;
struct TYPE_7__ {TYPE_2__* uf_regs; } ;
struct TYPE_6__ {int upsmr; } ;
struct TYPE_5__ {scalar_t__ autoneg; } ;


 int FUNC_0 (int ,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct ucc_geth_private* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_0,
                     struct ethtool_pauseparam *VAR_1)
{
 struct ucc_geth_private *VAR_2 = FUNC_2(VAR_0);
 int VAR_3 = 0;

 VAR_2->ug_info->receiveFlowControl = VAR_1->rx_pause;
 VAR_2->ug_info->transmitFlowControl = VAR_1->tx_pause;

 if (VAR_2->phydev->autoneg) {
  if (FUNC_3(VAR_0)) {

   FUNC_1(VAR_0, "Please re-open the interface\n");
  }
 } else {
  struct ucc_geth_info *VAR_4 = VAR_2->ug_info;

  VAR_3 = FUNC_0(VAR_4->aufc,
     VAR_4->receiveFlowControl,
     VAR_4->transmitFlowControl,
     VAR_4->pausePeriod,
     VAR_4->extensionField,
     &VAR_2->uccf->uf_regs->upsmr,
     &VAR_2->ug_regs->uempr,
     &VAR_2->ug_regs->maccfg1);
 }

 return VAR_3;
}
