
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum disp_output { ____Placeholder_disp_output } disp_output ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;

void FUNC_6(enum disp_output VAR_28)
{
 unsigned int VAR_29;

 if (VAR_28 & VAR_18) {

  VAR_29 = FUNC_1(VAR_13);
  VAR_29 &= ~VAR_14;
  VAR_29 |= (((VAR_28 & VAR_16) >> VAR_17) <<
   VAR_15);
  FUNC_2(VAR_13, VAR_29);
 }

 if (VAR_28 & VAR_2) {

  VAR_29 = FUNC_1(VAR_3);
  VAR_29 &= ~VAR_5;
  VAR_29 |= (((VAR_28 & VAR_0) >> VAR_1) <<
   VAR_6);

  VAR_29 &= ~VAR_4;
  FUNC_2(VAR_3, VAR_29);
 }

 if (VAR_28 & VAR_24) {

  FUNC_4(0, (VAR_28 & VAR_22) >> VAR_23);
 }

 if (VAR_28 & VAR_27) {

  FUNC_4(1, (VAR_28 & VAR_25) >> VAR_26);
 }

 if (VAR_28 & VAR_21) {

  FUNC_5((VAR_28 & VAR_19) >> VAR_20,
  4);
 }

 if (VAR_28 & VAR_9)
  FUNC_3((VAR_28 & VAR_7) >> VAR_8);

 if (VAR_28 & VAR_12)
  FUNC_0((VAR_28 & VAR_10) >> VAR_11);
}
