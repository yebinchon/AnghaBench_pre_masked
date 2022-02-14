
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct twl4030_usb {int dev; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 unsigned long VAR_5 ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (struct twl4030_usb*,int ) ;
 scalar_t__ FUNC_4 (struct twl4030_usb*,int ,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct twl4030_usb *VAR_6, int VAR_7)
{
 unsigned long VAR_8;
 int VAR_9 = FUNC_3(VAR_6, VAR_1);

 if (VAR_9 >= 0) {
  if (VAR_7) {

   VAR_9 |= VAR_4;
   FUNC_0(FUNC_4(VAR_6, VAR_1,
      (u8)VAR_9) < 0);

   VAR_8 = VAR_5 + VAR_0;
   while (!(FUNC_3(VAR_6, VAR_2) &
       VAR_3)
    && FUNC_2(VAR_5, VAR_8))
     FUNC_5(10);
   if (!(FUNC_3(VAR_6, VAR_2) &
       VAR_3))
    FUNC_1(VAR_6->dev, "Timeout setting T2 HSUSB "
      "PHY DPLL clock\n");
  } else {

   VAR_9 &= ~VAR_4;
   FUNC_0(FUNC_4(VAR_6, VAR_1,
      (u8)VAR_9) < 0);
  }
 }
}
