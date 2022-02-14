
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





 int FUNC_0 (struct CHIPSTATE*,int,int) ;

__attribute__((used)) static void FUNC_1(struct CHIPSTATE *VAR_5, int VAR_6)
{
 int VAR_7 = 1;
 int VAR_8 = VAR_5->shadow.bytes[VAR_0+1] & 0x3f;

 switch (VAR_6) {
 case 130:
  VAR_8 |= VAR_1;
  break;
 case 128:
 case 132:
  VAR_8 |= VAR_4;
  break;
 case 129:
  VAR_8 |= VAR_3;
  break;
 case 131:
  VAR_8 |= VAR_2;
  break;
 default:
  VAR_7 = 0;
 }
 if (VAR_7)
  FUNC_0(VAR_5,VAR_0,VAR_8);
}
