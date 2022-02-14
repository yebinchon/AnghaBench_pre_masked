
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ap_queue {int lock; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ap_queue*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ap_queue *VAR_2)
{
 FUNC_2(&VAR_2->lock);
 VAR_2->state = VAR_1;
 FUNC_1(FUNC_0(VAR_2, VAR_0));
 FUNC_3(&VAR_2->lock);
}
