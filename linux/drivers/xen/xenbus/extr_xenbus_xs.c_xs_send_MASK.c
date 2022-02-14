
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsd_sockmsg {int req_id; } ;
struct xb_req_data {int list; struct xsd_sockmsg msg; int caller_req_id; int wq; int state; scalar_t__ err; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct xb_req_data*) ;

__attribute__((used)) static void FUNC_7(struct xb_req_data *VAR_4, struct xsd_sockmsg *VAR_5)
{
 bool VAR_6;

 VAR_4->msg = *VAR_5;
 VAR_4->err = 0;
 VAR_4->state = VAR_0;
 FUNC_0(&VAR_4->wq);


 VAR_4->caller_req_id = VAR_4->msg.req_id;
 VAR_4->msg.req_id = FUNC_6(VAR_4);

 FUNC_3(&VAR_3);
 FUNC_1(&VAR_4->list, &VAR_2);
 VAR_6 = FUNC_2(&VAR_2);
 FUNC_4(&VAR_3);

 if (VAR_6)
  FUNC_5(&VAR_1);
}
