
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct llt_ndlc {int t2_active; int t1_active; int send_q; int rcv_q; int t2_timer; int t1_timer; int ndev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct llt_ndlc *VAR_0)
{
 FUNC_2(VAR_0->ndev);


 FUNC_0(&VAR_0->t1_timer);
 FUNC_0(&VAR_0->t2_timer);
 VAR_0->t2_active = 0;
 VAR_0->t1_active = 0;

 FUNC_1(&VAR_0->rcv_q);
 FUNC_1(&VAR_0->send_q);
}
