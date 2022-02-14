
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm97xx_batt_pdata {int charge_gpio; } ;
struct TYPE_2__ {struct wm97xx_batt_pdata* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct platform_device*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_3)
{
 struct wm97xx_batt_pdata *VAR_4 = VAR_3->dev.platform_data;

 if (VAR_4 && FUNC_3(VAR_4->charge_gpio)) {
  FUNC_1(FUNC_4(VAR_4->charge_gpio), VAR_3);
  FUNC_2(VAR_4->charge_gpio);
 }
 FUNC_0(&VAR_1);
 FUNC_6(VAR_0);
 FUNC_5(VAR_2);
 return 0;
}
