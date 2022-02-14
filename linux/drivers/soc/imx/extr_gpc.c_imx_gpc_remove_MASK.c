
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_5__ {int base; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 struct device_node* FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{
 struct device_node *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_3->dev.of_node, "pgc");


 if (!FUNC_3(VAR_3->dev.of_node, "#power-domain-cells") &&
     !VAR_4)
  return 0;





 if (!VAR_4) {
  FUNC_1(VAR_3->dev.of_node);

  VAR_5 = FUNC_4(&VAR_2[VAR_1].base);
  if (VAR_5)
   return VAR_5;
  FUNC_0(&VAR_2[VAR_1]);

  VAR_5 = FUNC_4(&VAR_2[VAR_0].base);
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}
