
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct gfar_private {int ndev; int tbi_node; int phy_node; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct gfar_private*) ;
 int FUNC_1 (struct gfar_private*) ;
 int FUNC_2 (struct gfar_private*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device_node*) ;
 scalar_t__ FUNC_5 (struct device_node*) ;
 struct gfar_private* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (struct gfar_private*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_0)
{
 struct gfar_private *VAR_1 = FUNC_6(VAR_0);
 struct device_node *VAR_2 = VAR_0->dev.of_node;

 FUNC_3(VAR_1->phy_node);
 FUNC_3(VAR_1->tbi_node);

 FUNC_8(VAR_1->ndev);

 if (FUNC_5(VAR_2))
  FUNC_4(VAR_2);

 FUNC_7(VAR_1);
 FUNC_1(VAR_1);
 FUNC_2(VAR_1);
 FUNC_0(VAR_1);

 return 0;
}
