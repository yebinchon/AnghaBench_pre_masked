
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct emac_instance {int mii_bus; TYPE_2__* ofdev; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {struct device_node* of_node; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int FUNC_0 (struct emac_instance*) ;
 int FUNC_1 (struct emac_instance*,struct device_node*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device_node*) ;
 struct device_node* FUNC_4 (struct device_node*,char*,int ) ;

__attribute__((used)) static int FUNC_5(struct emac_instance *VAR_0)
{
 struct device_node *VAR_1 = VAR_0->ofdev->dev.of_node;
 struct device_node *VAR_2;
 int VAR_3 = 1;

 VAR_2 = FUNC_4(VAR_1, "phy-handle", 0);

 if (VAR_2) {
  VAR_3 = FUNC_0(VAR_0);
  if (!VAR_3) {
   VAR_3 = FUNC_1(VAR_0, VAR_2);
   if (VAR_3)
    FUNC_2(VAR_0->mii_bus);
  }
 }

 FUNC_3(VAR_2);
 return VAR_3;
}
