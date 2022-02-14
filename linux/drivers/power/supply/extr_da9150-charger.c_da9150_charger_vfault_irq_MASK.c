
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9150_charger {int battery; int usb; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct da9150_charger *VAR_3 = VAR_2;


 FUNC_0(VAR_3->dev, "VSYS under voltage!!!\n");
 FUNC_1(VAR_3->usb);
 FUNC_1(VAR_3->battery);

 return VAR_0;
}
