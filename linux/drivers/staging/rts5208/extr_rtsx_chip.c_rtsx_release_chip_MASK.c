
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_chip {scalar_t__ card_ready; scalar_t__ card_exist; } ;


 int FUNC_0 (struct rtsx_chip*) ;
 int FUNC_1 (struct rtsx_chip*) ;

void FUNC_2(struct rtsx_chip *VAR_0)
{
 FUNC_1(VAR_0);
 FUNC_0(VAR_0);
 VAR_0->card_exist = 0;
 VAR_0->card_ready = 0;
}
