
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em28xx {int i2c_speed; } ;





 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct em28xx *VAR_1)
{
 int VAR_2 = VAR_0;

 switch (VAR_1->i2c_speed & 0x03) {
 case 129:
  VAR_2 += 4;
  break;
 case 130:
 case 128:
  VAR_2 += 1;
  break;
 default:
  break;
 }

 return FUNC_0(VAR_2);
}
