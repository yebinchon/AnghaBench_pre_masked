
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int gpcs_address; } ;
struct emac_instance {struct emac_instance* mdio_instance; TYPE_1__ phy; } ;


 int FUNC_0 (struct emac_instance*,int ,int ) ;
 struct emac_instance* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, int VAR_1, int VAR_2)
{
 struct emac_instance *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_0((VAR_3->mdio_instance &&
    VAR_3->phy.gpcs_address != VAR_1) ?
    VAR_3->mdio_instance : VAR_3,
          (u8) VAR_1, (u8) VAR_2);
 return VAR_4;
}
