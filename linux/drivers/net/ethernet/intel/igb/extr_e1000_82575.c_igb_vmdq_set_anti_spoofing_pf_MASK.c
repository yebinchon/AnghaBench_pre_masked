
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int type; } ;
struct e1000_hw {TYPE_1__ mac; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

void FUNC_3(struct e1000_hw *VAR_5, bool VAR_6, int VAR_7)
{
 u32 VAR_8, VAR_9;

 switch (VAR_5->mac.type) {
 case 130:
  VAR_9 = VAR_0;
  break;
 case 129:
 case 128:
  VAR_9 = VAR_3;
  break;
 default:
  return;
 }

 VAR_8 = FUNC_1(VAR_9);
 if (VAR_6) {
  VAR_8 |= (VAR_1 |
        VAR_2);



  VAR_8 ^= (FUNC_0(VAR_7) | FUNC_0(VAR_7 + VAR_4));
 } else {
  VAR_8 &= ~(VAR_1 |
        VAR_2);
 }
 FUNC_2(VAR_9, VAR_8);
}
