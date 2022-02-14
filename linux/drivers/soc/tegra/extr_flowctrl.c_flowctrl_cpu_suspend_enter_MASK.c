
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;



 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;

 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (int,unsigned int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

void FUNC_4(unsigned int VAR_9)
{
 unsigned int VAR_10;
 int VAR_11;

 VAR_10 = FUNC_0(VAR_9);
 switch (FUNC_3()) {
 case 129:

  VAR_10 &= ~VAR_3;

  VAR_10 &= ~VAR_5;

  VAR_10 |= VAR_4 << VAR_9;
  break;
 case 128:
 case 131:
 case 130:

  VAR_10 &= ~VAR_6;

  VAR_10 &= ~VAR_7;

  VAR_10 |= VAR_8 << VAR_9;
  break;
 }
 VAR_10 |= VAR_2;
 VAR_10 |= VAR_1;
 VAR_10 |= VAR_0;
 FUNC_1(VAR_9, VAR_10);

 for (VAR_11 = 0; VAR_11 < FUNC_2(); VAR_11++) {
  if (VAR_11 == VAR_9)
   continue;
  VAR_10 = FUNC_0(VAR_11);
  VAR_10 |= VAR_1;
  VAR_10 |= VAR_2;
  FUNC_1(VAR_11, VAR_10);
 }
}
