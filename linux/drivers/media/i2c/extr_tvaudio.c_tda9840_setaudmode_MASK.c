
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





 int FUNC_0 (struct CHIPSTATE*,int,int) ;

__attribute__((used)) static void FUNC_1(struct CHIPSTATE *VAR_6, int VAR_7)
{
 int VAR_8 = 1;
 int VAR_9 = VAR_6->shadow.bytes[VAR_5 + 1] & ~0x7e;

 switch (VAR_7) {
 case 129:
  VAR_9 |= VAR_3;
  break;
 case 128:
  VAR_9 |= VAR_4;
  break;
 case 132:
  VAR_9 |= VAR_0;
  break;
 case 130:
  VAR_9 |= VAR_2;
  break;
 case 131:
  VAR_9 |= VAR_1;
  break;
 default:
  VAR_8 = 0;
 }

 if (VAR_8)
  FUNC_0(VAR_6, VAR_5, VAR_9);
}
