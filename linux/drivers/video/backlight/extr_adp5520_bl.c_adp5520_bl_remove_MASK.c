
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_4__ {int kobj; } ;
struct backlight_device {TYPE_2__ dev; } ;
struct adp5520_bl {TYPE_1__* pdata; int master; } ;
struct TYPE_3__ {scalar_t__ en_ambl_sens; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 struct adp5520_bl* FUNC_1 (struct backlight_device*) ;
 struct backlight_device* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3)
{
 struct backlight_device *VAR_4 = FUNC_2(VAR_3);
 struct adp5520_bl *VAR_5 = FUNC_1(VAR_4);

 FUNC_0(VAR_5->master, VAR_1, VAR_0);

 if (VAR_5->pdata->en_ambl_sens)
  FUNC_3(&VAR_4->dev.kobj,
    &VAR_2);

 return 0;
}
