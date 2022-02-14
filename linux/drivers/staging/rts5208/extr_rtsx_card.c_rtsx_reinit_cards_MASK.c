
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_chip {int int_reg; int need_reinit; int card_exist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct rtsx_chip*) ;
 int FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*) ;
 int FUNC_5 (struct rtsx_chip*) ;
 int FUNC_6 (struct rtsx_chip*) ;
 int FUNC_7 (struct rtsx_chip*,int) ;
 int FUNC_8 (struct rtsx_chip*,int ) ;
 int FUNC_9 (struct rtsx_chip*) ;
 int FUNC_10 (struct rtsx_chip*,int ) ;
 int FUNC_11 (int) ;

void FUNC_12(struct rtsx_chip *VAR_10, int VAR_11)
{
 FUNC_10(VAR_10, VAR_4);

 FUNC_7(VAR_10, VAR_7 | VAR_2);

 if (VAR_11)
  FUNC_9(VAR_10);

 VAR_10->int_reg = FUNC_8(VAR_10, VAR_3);

 if ((VAR_10->int_reg & VAR_6) && (VAR_10->need_reinit & VAR_5)) {
  FUNC_5(VAR_10);
  FUNC_4(VAR_10);

  FUNC_11(100);

  VAR_10->card_exist |= VAR_5;
  FUNC_1(VAR_10);
 }

 if ((VAR_10->int_reg & VAR_9) && (VAR_10->need_reinit & VAR_8)) {
  FUNC_6(VAR_10);

  FUNC_11(100);

  VAR_10->card_exist |= VAR_8;
  FUNC_2(VAR_10);
 }

 if ((VAR_10->int_reg & VAR_1) && (VAR_10->need_reinit & VAR_0)) {
  FUNC_3(VAR_10);

  FUNC_11(100);

  VAR_10->card_exist |= VAR_0;
  FUNC_0(VAR_10);
 }

 VAR_10->need_reinit = 0;
}
