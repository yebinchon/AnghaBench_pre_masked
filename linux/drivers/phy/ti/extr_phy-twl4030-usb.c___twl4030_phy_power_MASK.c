
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct twl4030_usb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct twl4030_usb*,int ) ;
 scalar_t__ FUNC_2 (struct twl4030_usb*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct twl4030_usb *VAR_2, int VAR_3)
{
 u8 VAR_4 = FUNC_1(VAR_2, VAR_0);

 if (VAR_3)
  VAR_4 &= ~VAR_1;
 else
  VAR_4 |= VAR_1;

 FUNC_0(FUNC_2(VAR_2, VAR_0, VAR_4) < 0);
}
