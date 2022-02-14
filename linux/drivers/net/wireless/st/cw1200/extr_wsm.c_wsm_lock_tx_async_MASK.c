
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cw1200_common {int tx_lock; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (char*) ;

void FUNC_2(struct cw1200_common *VAR_0)
{
 if (FUNC_0(1, &VAR_0->tx_lock) == 1)
  FUNC_1("[WSM] TX is locked (async).\n");
}
