
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c2410_wdt {scalar_t__ reg_base; TYPE_1__* drv_data; int wdt_device; int dev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 struct s3c2410_wdt* FUNC_1 (void*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct s3c2410_wdt *VAR_5 = FUNC_1(VAR_4);

 FUNC_0(VAR_5->dev, "watchdog timer expired (irq)\n");

 FUNC_2(&VAR_5->wdt_device);

 if (VAR_5->drv_data->quirks & VAR_1)
  FUNC_3(0x1, VAR_5->reg_base + VAR_2);

 return VAR_0;
}
