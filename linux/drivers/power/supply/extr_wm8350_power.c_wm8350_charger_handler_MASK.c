
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8350_power {int ac; int usb; int battery; struct wm8350_charger_policy* policy; } ;
struct wm8350_charger_policy {int dummy; } ;
struct wm8350 {int irq_base; int dev; struct wm8350_power power; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct wm8350*,struct wm8350_charger_policy*) ;
 int FUNC_5 (struct wm8350*) ;
 int FUNC_6 (struct wm8350*) ;
 int FUNC_7 (struct wm8350*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_3, void *VAR_4)
{
 struct wm8350 *VAR_5 = VAR_4;
 struct wm8350_power *VAR_6 = &VAR_5->power;
 struct wm8350_charger_policy *VAR_7 = VAR_6->policy;

 switch (VAR_3 - VAR_5->irq_base) {
 case 139:
  FUNC_1(VAR_5->dev, "battery failed\n");
  break;
 case 134:
  FUNC_1(VAR_5->dev, "charger timeout\n");
  FUNC_3(VAR_6->battery);
  break;

 case 138:
 case 140:
 case 135:
 case 137:
  FUNC_3(VAR_6->battery);
  break;

 case 136:
  FUNC_0(VAR_5->dev, "fast charger ready\n");
  FUNC_4(VAR_5, VAR_7);
  FUNC_6(VAR_5);
  FUNC_7(VAR_5, VAR_1,
    VAR_2);
  FUNC_5(VAR_5);
  break;

 case 131:
  FUNC_2(VAR_5->dev, "battery < 3.9V\n");
  break;
 case 132:
  FUNC_2(VAR_5->dev, "battery < 3.1V\n");
  break;
 case 133:
  FUNC_2(VAR_5->dev, "battery < 2.85V\n");
  break;



 case 129:
 case 128:
  FUNC_4(VAR_5, VAR_7);

 case 130:
  FUNC_3(VAR_6->battery);
  FUNC_3(VAR_6->usb);
  FUNC_3(VAR_6->ac);
  break;

 default:
  FUNC_1(VAR_5->dev, "Unknown interrupt %d\n", VAR_3);
 }

 return VAR_0;
}
