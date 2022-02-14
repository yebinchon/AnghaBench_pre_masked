
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rt; } ;
struct rt2x00_dev {TYPE_1__ chip; } ;






 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;

void FUNC_0(struct rt2x00_dev *VAR_5,
          unsigned short *VAR_6,
          unsigned short *VAR_7)
{
 switch (VAR_5->chip.rt) {
 case 131:
 case 130:
  *VAR_6 = VAR_3;
  *VAR_7 = VAR_1;
  break;

 case 129:
 case 128:
  *VAR_6 = VAR_4;
  *VAR_7 = VAR_2;
  break;

 default:
  *VAR_6 = VAR_3;
  *VAR_7 = VAR_0;
  break;
 }
}
