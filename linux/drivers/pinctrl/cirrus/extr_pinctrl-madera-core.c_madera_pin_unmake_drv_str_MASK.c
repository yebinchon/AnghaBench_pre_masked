
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct madera_pin_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static unsigned int FUNC_0(struct madera_pin_private *VAR_2,
           u16 VAR_3)
{
 VAR_3 = (VAR_3 & VAR_0) >> VAR_1;

 switch (VAR_3) {
 case 0:
  return 4;
 case 2:
  return 8;
 default:
  return 0;
 }
}
