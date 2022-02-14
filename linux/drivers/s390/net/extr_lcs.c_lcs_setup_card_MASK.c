
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcs_card {int lancmd_waiters; int ipm_list; int mask_lock; int ipm_lock; int lock; int wait_q; scalar_t__ tx_emitted; int * tx_buffer; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int ,struct lcs_card**,int) ;
 int FUNC_2 (int,int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct lcs_card*) ;
 int FUNC_5 (struct lcs_card*) ;
 int VAR_1 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct lcs_card *VAR_2)
{
 FUNC_2(2, VAR_1, "initcard");
 FUNC_1(2, VAR_1, &VAR_2, sizeof(void*));

 FUNC_4(VAR_2);
 FUNC_5(VAR_2);

 VAR_2->state = VAR_0;
 VAR_2->tx_buffer = ((void*)0);
 VAR_2->tx_emitted = 0;

 FUNC_3(&VAR_2->wait_q);
 FUNC_6(&VAR_2->lock);
 FUNC_6(&VAR_2->ipm_lock);
 FUNC_6(&VAR_2->mask_lock);



 FUNC_0(&VAR_2->lancmd_waiters);
}
