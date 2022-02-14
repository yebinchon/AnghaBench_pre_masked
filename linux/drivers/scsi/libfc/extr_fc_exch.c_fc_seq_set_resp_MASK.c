
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_seq {int dummy; } ;
struct fc_exch {scalar_t__ resp_task; void (* resp ) (struct fc_seq*,struct fc_frame*,void*) ;int ex_lock; void* arg; int resp_wq; scalar_t__ resp_active; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct fc_exch* FUNC_1 (struct fc_seq*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;

void FUNC_7(struct fc_seq *VAR_3,
       void (*VAR_4)(struct fc_seq *, struct fc_frame *, void *),
       void *VAR_5)
{
 struct fc_exch *VAR_6 = FUNC_1(VAR_3);
 FUNC_0(VAR_2);

 FUNC_5(&VAR_6->ex_lock);
 while (VAR_6->resp_active && VAR_6->resp_task != VAR_1) {
  FUNC_3(&VAR_6->resp_wq, &VAR_2, VAR_0);
  FUNC_6(&VAR_6->ex_lock);

  FUNC_4();

  FUNC_5(&VAR_6->ex_lock);
 }
 FUNC_2(&VAR_6->resp_wq, &VAR_2);
 VAR_6->resp = VAR_4;
 VAR_6->arg = VAR_5;
 FUNC_6(&VAR_6->ex_lock);
}
