
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_block {int timer; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;

void FUNC_2(struct dasd_block *VAR_1, int VAR_2)
{
 if (VAR_2 == 0)
  FUNC_0(&VAR_1->timer);
 else
  FUNC_1(&VAR_1->timer, VAR_0 + VAR_2);
}
