
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cw1200_common {int bh_wq; int bh_rx; scalar_t__ bh_error; } ;


 int FUNC_0 (struct cw1200_common*,int ) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct cw1200_common *VAR_0)
{
 FUNC_2("[BH] irq.\n");



 FUNC_0(VAR_0, 0);

 if ( (VAR_0->bh_error))
  return;

 if (FUNC_1(1, &VAR_0->bh_rx) == 1)
  FUNC_3(&VAR_0->bh_wq);
}
