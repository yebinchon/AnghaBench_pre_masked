
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {struct max8925_backlight_pdata* platform_data; TYPE_1__* parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct max8925_backlight_pdata {int dual_string; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 struct max8925_backlight_pdata* FUNC_2 (TYPE_2__*,int,int ) ;
 struct device_node* FUNC_3 (struct device_node*,char*) ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 (struct device_node*,char*,int *) ;

__attribute__((used)) static void FUNC_6(struct platform_device *VAR_2)
{
 struct device_node *VAR_3 = VAR_2->dev.parent->of_node, *VAR_4;
 struct max8925_backlight_pdata *VAR_5;
 u32 VAR_6;

 if (!VAR_3 || !FUNC_0(VAR_0))
  return;

 VAR_5 = FUNC_2(&VAR_2->dev,
        sizeof(struct max8925_backlight_pdata),
        VAR_1);
 if (!VAR_5)
  return;

 VAR_4 = FUNC_3(VAR_3, "backlight");
 if (!VAR_4) {
  FUNC_1(&VAR_2->dev, "failed to find backlight node\n");
  return;
 }

 if (!FUNC_5(VAR_4, "maxim,max8925-dual-string", &VAR_6))
  VAR_5->dual_string = VAR_6;

 FUNC_4(VAR_4);

 VAR_2->dev.platform_data = VAR_5;
}
