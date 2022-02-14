
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {TYPE_1__* of_node; int parent; } ;
struct platform_device {int name; struct device dev; } ;
struct backlight_device {int dummy; } ;
struct TYPE_2__ {int phandle; } ;


 scalar_t__ FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct backlight_device*) ;
 int FUNC_2 (struct backlight_device*) ;
 int FUNC_3 (int ) ;
 struct backlight_device* FUNC_4 (struct device*,int ,struct device*,int ,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct device *VAR_3 = &VAR_2->dev;
 struct backlight_device *VAR_4;

 VAR_4 = FUNC_4(VAR_3, VAR_2->name, VAR_3,
         FUNC_3(VAR_3->parent),
         &VAR_0,
         &VAR_1);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);






 if (!VAR_3->of_node->phandle)
  FUNC_2(VAR_4);

 return 0;
}
