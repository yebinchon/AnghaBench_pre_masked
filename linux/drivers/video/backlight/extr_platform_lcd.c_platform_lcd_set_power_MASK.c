
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_lcd {int power; TYPE_1__* pdata; scalar_t__ suspended; } ;
struct lcd_device {int dummy; } ;
struct TYPE_2__ {int (* set_power ) (TYPE_1__*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 struct platform_lcd* FUNC_1 (struct lcd_device*) ;

__attribute__((used)) static int FUNC_2(struct lcd_device *VAR_1, int VAR_2)
{
 struct platform_lcd *VAR_3 = FUNC_1(VAR_1);
 int VAR_4 = 1;

 if (VAR_2 == VAR_0 || VAR_3->suspended)
  VAR_4 = 0;

 VAR_3->pdata->set_power(VAR_3->pdata, VAR_4);
 VAR_3->power = VAR_2;

 return 0;
}
