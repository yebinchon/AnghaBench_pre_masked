
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sas_phy {int dev; } ;
struct sas_ha_struct {int phy_port_lock; } ;
struct domain_device {struct sas_phy* phy; TYPE_1__* port; } ;
struct TYPE_2__ {struct sas_ha_struct* ha; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

struct sas_phy *FUNC_4(struct domain_device *VAR_0)
{
 struct sas_ha_struct *VAR_1 = VAR_0->port->ha;
 struct sas_phy *VAR_2;
 unsigned long VAR_3;




 FUNC_0(!VAR_0->phy);

 FUNC_2(&VAR_1->phy_port_lock, VAR_3);
 VAR_2 = VAR_0->phy;
 FUNC_1(&VAR_2->dev);
 FUNC_3(&VAR_1->phy_port_lock, VAR_3);

 return VAR_2;
}
