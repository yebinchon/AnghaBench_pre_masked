
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar9170 {scalar_t__ tx_schedule; scalar_t__ tx_ampdu_schedule; } ;


 int FUNC_0 (struct ar9170*) ;
 int FUNC_1 (struct ar9170*) ;

void FUNC_2(struct ar9170 *VAR_0)
{

 if (VAR_0->tx_ampdu_schedule)
  FUNC_1(VAR_0);

 if (VAR_0->tx_schedule)
  FUNC_0(VAR_0);
}
