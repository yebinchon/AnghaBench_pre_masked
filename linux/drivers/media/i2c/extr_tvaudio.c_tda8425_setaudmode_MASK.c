
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* bytes; } ;
struct CHIPSTATE {TYPE_1__ shadow; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;





 int FUNC_0 (struct CHIPSTATE*,int,int) ;

__attribute__((used)) static void FUNC_1(struct CHIPSTATE *VAR_8, int VAR_9)
{
 int VAR_10 = VAR_8->shadow.bytes[VAR_0+1] & 0xe1;

 switch (VAR_9) {
 case 132:
  VAR_10 |= VAR_1;
  VAR_10 |= VAR_6;
  break;
 case 130:
  VAR_10 |= VAR_2;
  VAR_10 |= VAR_6;
  break;
 case 131:
  VAR_10 |= VAR_3;
  VAR_10 |= VAR_4;
  break;
 case 129:
  VAR_10 |= VAR_3;
  VAR_10 |= VAR_5;
  break;
 case 128:
  VAR_10 |= VAR_3;
  VAR_10 |= VAR_7;
  break;
 default:
  return;
 }
 FUNC_0(VAR_8,VAR_0,VAR_10);
}
