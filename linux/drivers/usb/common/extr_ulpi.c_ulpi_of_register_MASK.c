
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct device_node* of_node; struct device* parent; } ;
struct ulpi {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;
struct device {TYPE_1__* parent; scalar_t__ of_node; } ;
struct TYPE_3__ {scalar_t__ of_node; } ;


 int VAR_0 ;
 struct device_node* FUNC_0 (scalar_t__,char*) ;
 struct device_node* FUNC_1 (struct device_node*,int *) ;
 int FUNC_2 (struct device_node*) ;

__attribute__((used)) static int FUNC_3(struct ulpi *VAR_1)
{
 struct device_node *VAR_2 = ((void*)0), *VAR_3;
 struct device *VAR_4;


 VAR_4 = VAR_1->dev.parent;
 if (VAR_4->of_node)
  VAR_2 = FUNC_0(VAR_4->of_node, "ulpi");
 else if (VAR_4->parent && VAR_4->parent->of_node)
  VAR_2 = FUNC_0(VAR_4->parent->of_node, "ulpi");
 if (!VAR_2)
  return 0;

 VAR_3 = FUNC_1(VAR_2, ((void*)0));
 FUNC_2(VAR_2);
 if (!VAR_3)
  return -VAR_0;

 VAR_1->dev.of_node = VAR_3;

 return 0;
}
