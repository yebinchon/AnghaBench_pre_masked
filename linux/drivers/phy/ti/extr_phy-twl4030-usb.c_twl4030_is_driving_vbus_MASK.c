
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl4030_usb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct twl4030_usb*,int ) ;

__attribute__((used)) static bool FUNC_1(struct twl4030_usb *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_0);
 if (VAR_6 < 0 || !(VAR_6 & VAR_1))




  return 0;

 VAR_6 = FUNC_0(VAR_5, VAR_3);
 if (VAR_6 < 0)
  return 0;

 return (VAR_6 & (VAR_4 | VAR_2)) ? 1 : 0;
}
