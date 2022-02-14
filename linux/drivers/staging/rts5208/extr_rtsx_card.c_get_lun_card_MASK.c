
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtsx_chip {int card_ready; int* lun2card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

u8 FUNC_0(struct rtsx_chip *VAR_3, unsigned int VAR_4)
{
 if ((VAR_3->card_ready & VAR_3->lun2card[VAR_4]) == VAR_2)
  return (u8)VAR_2;
 else if ((VAR_3->card_ready & VAR_3->lun2card[VAR_4]) == VAR_1)
  return (u8)VAR_1;
 else if ((VAR_3->card_ready & VAR_3->lun2card[VAR_4]) == VAR_0)
  return (u8)VAR_0;

 return 0;
}
