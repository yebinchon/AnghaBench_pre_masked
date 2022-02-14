
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct bcmgenet_priv {TYPE_2__* pdev; } ;
struct TYPE_3__ {struct device_node* of_node; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int FUNC_0 (struct bcmgenet_priv*) ;
 int FUNC_1 (struct bcmgenet_priv*) ;

__attribute__((used)) static int FUNC_2(struct bcmgenet_priv *VAR_0)
{
 struct device_node *VAR_1 = VAR_0->pdev->dev.of_node;

 if (VAR_1)
  return FUNC_0(VAR_0);
 else
  return FUNC_1(VAR_0);
}
