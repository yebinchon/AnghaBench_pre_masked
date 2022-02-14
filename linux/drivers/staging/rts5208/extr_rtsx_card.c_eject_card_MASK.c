
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_chip {int card_ready; int* lun2card; int card_ejected; scalar_t__* capacity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtsx_chip*) ;
 int FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*) ;

void FUNC_4(struct rtsx_chip *VAR_3, unsigned int VAR_4)
{
 FUNC_0(VAR_3);

 if ((VAR_3->card_ready & VAR_3->lun2card[VAR_4]) == VAR_1) {
  FUNC_2(VAR_3);
  VAR_3->card_ejected |= VAR_1;
  VAR_3->card_ready &= ~VAR_1;
  VAR_3->capacity[VAR_4] = 0;
 } else if ((VAR_3->card_ready & VAR_3->lun2card[VAR_4]) == VAR_2) {
  FUNC_3(VAR_3);
  VAR_3->card_ejected |= VAR_2;
  VAR_3->card_ready &= ~VAR_2;
  VAR_3->capacity[VAR_4] = 0;
 } else if ((VAR_3->card_ready & VAR_3->lun2card[VAR_4]) == VAR_0) {
  FUNC_1(VAR_3);
  VAR_3->card_ejected |= VAR_0;
  VAR_3->card_ready &= ~VAR_0;
  VAR_3->capacity[VAR_4] = 0;
 }
}
