
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* sgmii_ops; } ;
struct emac_adapter {TYPE_2__ phy; } ;
struct TYPE_3__ {int (* reset ) (struct emac_adapter*) ;} ;


 int FUNC_0 (struct emac_adapter*) ;

void FUNC_1(struct emac_adapter *VAR_0)
{
 if (!(VAR_0->phy.sgmii_ops && VAR_0->phy.sgmii_ops->reset))
  return;

 VAR_0->phy.sgmii_ops->reset(VAR_0);
}
