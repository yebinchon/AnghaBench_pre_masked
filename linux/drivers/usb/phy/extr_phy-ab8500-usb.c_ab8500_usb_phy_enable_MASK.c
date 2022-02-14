
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ab8500_usb {int dev; int sysclk; int pinctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (struct ab8500_usb*) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct ab8500_usb *VAR_5, bool VAR_6)
{
 u8 VAR_7;
 VAR_7 = VAR_6 ? VAR_1 :
  VAR_0;


 VAR_5->pinctrl = FUNC_5(VAR_5->dev, VAR_4);
 if (FUNC_0(VAR_5->pinctrl))
  FUNC_4(VAR_5->dev, "could not get/set default pinstate\n");

 if (FUNC_3(VAR_5->sysclk))
  FUNC_4(VAR_5->dev, "can't prepare/enable clock\n");

 FUNC_1(VAR_5);

 FUNC_2(VAR_5->dev,
   VAR_2, VAR_3,
   VAR_7, VAR_7);
}
