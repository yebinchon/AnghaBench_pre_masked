
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int,int ,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct device_node*,char*,int) ;
 int FUNC_4 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct device_node *VAR_3 = VAR_2->dev.parent->of_node;
 int VAR_4;
 int VAR_5;
 int VAR_6;

 if (!VAR_3)
  return -VAR_0;

 VAR_6 = FUNC_4(VAR_3, "cs-gpios");
 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
  int VAR_7 = FUNC_3(VAR_3, "cs-gpios", VAR_4);

  if (VAR_7 < 0)
   return VAR_7;

  if (FUNC_2(VAR_7)) {
   VAR_5 = FUNC_1(&VAR_2->dev, VAR_7,
          VAR_1,
          FUNC_0(&VAR_2->dev));
   if (VAR_5)
    return VAR_5;
  }
 }

 return 0;
}
