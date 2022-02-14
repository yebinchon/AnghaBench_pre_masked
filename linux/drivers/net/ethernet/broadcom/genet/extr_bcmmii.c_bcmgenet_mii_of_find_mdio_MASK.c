
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct bcmgenet_priv {struct device_node* mdio_dn; int version; TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 char* FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (char*) ;
 struct device_node* FUNC_3 (struct device_node*,char*) ;

__attribute__((used)) static struct device_node *FUNC_4(struct bcmgenet_priv *VAR_1)
{
 struct device_node *VAR_2 = VAR_1->pdev->dev.of_node;
 struct device *VAR_3 = &VAR_1->pdev->dev;
 char *VAR_4;

 VAR_4 = FUNC_1(VAR_0, "brcm,genet-mdio-v%d", VAR_1->version);
 if (!VAR_4)
  return ((void*)0);

 VAR_1->mdio_dn = FUNC_3(VAR_2, VAR_4);
 FUNC_2(VAR_4);
 if (!VAR_1->mdio_dn) {
  FUNC_0(VAR_3, "unable to find MDIO bus node\n");
  return ((void*)0);
 }

 return VAR_1->mdio_dn;
}
