
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_chip {int card_ready; scalar_t__ sd_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtsx_chip*) ;
 int FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*) ;
 int FUNC_5 (struct rtsx_chip*) ;

void FUNC_6(struct rtsx_chip *VAR_3)
{
 if ((VAR_3->card_ready & VAR_1) || VAR_3->sd_io) {
  FUNC_2(VAR_3);
  FUNC_3(VAR_3);
 }

 if (VAR_3->card_ready & VAR_2) {
  FUNC_4(VAR_3);
  FUNC_5(VAR_3);
 }

 if (VAR_3->card_ready & VAR_0) {
  FUNC_0(VAR_3);
  FUNC_1(VAR_3);
 }
}
