
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;



 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int) ;
 scalar_t__ FUNC_2 () ;

void FUNC_3(unsigned int VAR_5)
{
 unsigned int VAR_6 = 0;

 VAR_6 = FUNC_0(VAR_0) & ~VAR_2;

 if (FUNC_2() == VAR_4)
  return;

 switch (VAR_5) {
 case 130:
  VAR_6 |= 130;
  break;

 case 129:
  VAR_6 |= 129;
  break;

 case 128:
  VAR_6 |= 128;
  break;

 default:
  break;
 }


 if (VAR_5 == 128) {
  VAR_6 &= ~VAR_3;



 } else {
  VAR_6 |= VAR_3;



 }


 FUNC_1(VAR_0, VAR_6);
}
