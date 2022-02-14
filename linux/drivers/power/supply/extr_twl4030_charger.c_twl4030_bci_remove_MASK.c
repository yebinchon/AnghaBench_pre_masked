
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct twl4030_bci {TYPE_2__* ac; TYPE_1__* usb; } ;
struct platform_device {int dummy; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 struct twl4030_bci* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct twl4030_bci*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct twl4030_bci*,int) ;
 int FUNC_5 (int ,int,int ) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_4)
{
 struct twl4030_bci *VAR_5 = FUNC_1(VAR_4);

 FUNC_2(VAR_5, 0);
 FUNC_4(VAR_5, 0);
 FUNC_3(0, 0);

 FUNC_0(&VAR_5->usb->dev, &VAR_3);
 FUNC_0(&VAR_5->ac->dev, &VAR_3);

 FUNC_5(VAR_2, 0xff,
    VAR_0);
 FUNC_5(VAR_2, 0xff,
    VAR_1);

 return 0;
}
