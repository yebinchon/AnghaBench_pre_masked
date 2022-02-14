
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct gswip_priv {int num_gphy_fw; int * gphy_fw; TYPE_3__* ds; } ;
struct TYPE_6__ {TYPE_2__* slave_mii_bus; } ;
struct TYPE_4__ {int of_node; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct gswip_priv*,int *) ;
 int FUNC_2 (struct gswip_priv*,int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 struct gswip_priv* FUNC_5 (struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_2)
{
 struct gswip_priv *VAR_3 = FUNC_5(VAR_2);
 int VAR_4;


 FUNC_2(VAR_3, VAR_1, 0, VAR_0);

 FUNC_0(VAR_3->ds);

 if (VAR_3->ds->slave_mii_bus) {
  FUNC_3(VAR_3->ds->slave_mii_bus);
  FUNC_4(VAR_3->ds->slave_mii_bus->dev.of_node);
 }

 for (VAR_4 = 0; VAR_4 < VAR_3->num_gphy_fw; VAR_4++)
  FUNC_1(VAR_3, &VAR_3->gphy_fw[VAR_4]);

 return 0;
}
