
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl4030_bci {int ac_cur; int usb; int ac; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct twl4030_bci*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct twl4030_bci *VAR_3 = VAR_2;

 FUNC_0(VAR_3->dev, "CHG_PRES irq\n");

 VAR_3->ac_cur = 500000;
 FUNC_2(VAR_3);
 FUNC_1(VAR_3->ac);
 FUNC_1(VAR_3->usb);

 return VAR_0;
}
