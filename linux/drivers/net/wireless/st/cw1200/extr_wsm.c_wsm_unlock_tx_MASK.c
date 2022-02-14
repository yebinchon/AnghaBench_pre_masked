
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cw1200_common {int bh_error; int tx_lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (struct cw1200_common*) ;
 int FUNC_3 (char*) ;

void FUNC_4(struct cw1200_common *VAR_0)
{
 int VAR_1;
 VAR_1 = FUNC_1(1, &VAR_0->tx_lock);
 FUNC_0(VAR_1 < 0);

 if (VAR_1 == 0) {
  if (!VAR_0->bh_error)
   FUNC_2(VAR_0);
  FUNC_3("[WSM] TX is unlocked.\n");
 }
}
