
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_chip {int card_wp; int* lun2card; } ;



int FUNC_0(struct rtsx_chip *VAR_0, unsigned int VAR_1)
{
 if (VAR_0->card_wp & VAR_0->lun2card[VAR_1])
  return 1;

 return 0;
}
