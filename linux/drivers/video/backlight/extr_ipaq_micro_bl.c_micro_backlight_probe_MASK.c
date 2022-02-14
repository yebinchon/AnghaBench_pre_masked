
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct ipaq_micro {int dummy; } ;
struct backlight_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct backlight_device*) ;
 int FUNC_2 (struct backlight_device*) ;
 struct ipaq_micro* FUNC_3 (int ) ;
 struct backlight_device* FUNC_4 (TYPE_1__*,char*,TYPE_1__*,struct ipaq_micro*,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (struct platform_device*,struct backlight_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_2)
{
 struct backlight_device *VAR_3;
 struct ipaq_micro *VAR_4 = FUNC_3(VAR_2->dev.parent);

 VAR_3 = FUNC_4(&VAR_2->dev, "ipaq-micro-backlight",
         &VAR_2->dev, VAR_4, &VAR_0,
         &VAR_1);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 FUNC_5(VAR_2, VAR_3);
 FUNC_2(VAR_3);

 return 0;
}
