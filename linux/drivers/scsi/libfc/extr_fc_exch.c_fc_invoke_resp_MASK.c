
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_seq {int dummy; } ;
struct fc_frame {int dummy; } ;
struct fc_exch {scalar_t__ resp_active; void (* resp ) (struct fc_seq*,struct fc_frame*,void*) ;int resp_wq; int ex_lock; int * resp_task; void* arg; } ;


 int * VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct fc_exch *VAR_1, struct fc_seq *VAR_2,
      struct fc_frame *VAR_3)
{
 void (*VAR_4)(struct fc_seq *, struct fc_frame *VAR_5, void *VAR_6);
 void *VAR_7;
 bool VAR_8 = 0;

 FUNC_0(&VAR_1->ex_lock);
 VAR_1->resp_active++;
 if (VAR_1->resp_task != VAR_0)
  VAR_1->resp_task = !VAR_1->resp_task ? VAR_0 : ((void*)0);
 VAR_4 = VAR_1->resp;
 VAR_7 = VAR_1->arg;
 FUNC_1(&VAR_1->ex_lock);

 if (VAR_4) {
  VAR_4(VAR_2, VAR_3, VAR_7);
  VAR_8 = 1;
 }

 FUNC_0(&VAR_1->ex_lock);
 if (--VAR_1->resp_active == 0)
  VAR_1->resp_task = ((void*)0);
 FUNC_1(&VAR_1->ex_lock);

 if (VAR_1->resp_active == 0)
  FUNC_2(&VAR_1->resp_wq);

 return VAR_8;
}
