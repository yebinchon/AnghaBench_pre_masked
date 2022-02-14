
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ab8500_usb {int pinctrl; int dev; int pins_sleep; int sysclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (struct ab8500_usb*) ;
 int FUNC_2 (struct ab8500_usb*,int ) ;
 int FUNC_3 (struct ab8500_usb*) ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int ) ;

__attribute__((used)) static void FUNC_11(struct ab8500_usb *VAR_5, bool VAR_6)
{
 u8 VAR_7;
 VAR_7 = VAR_6 ? VAR_1 :
  VAR_0;

 FUNC_2(VAR_5, VAR_7);

 FUNC_4(VAR_5->dev,
   VAR_2, VAR_3,
   VAR_7, 0);


 FUNC_3(VAR_5);

 FUNC_5(VAR_5->sysclk);

 FUNC_1(VAR_5);

 if (!FUNC_0(VAR_5->pinctrl)) {

  VAR_5->pins_sleep = FUNC_8(VAR_5->pinctrl,
    VAR_4);

  if (FUNC_0(VAR_5->pins_sleep))
   FUNC_6(VAR_5->dev, "could not get sleep pinstate\n");
  else if (FUNC_10(VAR_5->pinctrl, VAR_5->pins_sleep))
   FUNC_7(VAR_5->dev, "could not set pins to sleep state\n");





  FUNC_9(VAR_5->pinctrl);
 }
}
