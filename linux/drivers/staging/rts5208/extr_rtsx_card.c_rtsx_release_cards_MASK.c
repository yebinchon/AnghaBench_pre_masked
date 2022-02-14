
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_chip {int int_reg; int card_ready; scalar_t__ sd_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rtsx_chip*) ;
 int FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*,int ) ;
 int FUNC_5 (struct rtsx_chip*) ;
 int FUNC_6 (struct rtsx_chip*) ;

void FUNC_7(struct rtsx_chip *VAR_7)
{
 VAR_7->int_reg = FUNC_4(VAR_7, VAR_2);

 if ((VAR_7->card_ready & VAR_3) || VAR_7->sd_io) {
  if (VAR_7->int_reg & VAR_4)
   FUNC_5(VAR_7);
  FUNC_2(VAR_7);
 }

 if (VAR_7->card_ready & VAR_5) {
  if (VAR_7->int_reg & VAR_6)
   FUNC_6(VAR_7);
  FUNC_3(VAR_7);
 }

 if (VAR_7->card_ready & VAR_0) {
  if (VAR_7->int_reg & VAR_1)
   FUNC_0(VAR_7);
  FUNC_1(VAR_7);
 }
}
