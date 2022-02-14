
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct da9150_charger {int * battery; int * usb; int * supply_online; int dev; int da9150; } ;
typedef int irqreturn_t ;


 int VAR_0 ;

 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct da9150_charger *VAR_5 = VAR_4;
 u8 VAR_6;

 VAR_6 = FUNC_0(VAR_5->da9150, VAR_0);


 switch (VAR_6 & VAR_1) {
 case 129:
 case 128:
  VAR_5->supply_online = VAR_5->battery;
  break;
 case 130:
  VAR_5->supply_online = VAR_5->usb;
  break;
 default:
  FUNC_1(VAR_5->dev, "Unknown VBUS state - reg = 0x%x\n",
    VAR_6);
  VAR_5->supply_online = ((void*)0);
  break;
 }

 FUNC_2(VAR_5->usb);
 FUNC_2(VAR_5->battery);

 return VAR_2;
}
