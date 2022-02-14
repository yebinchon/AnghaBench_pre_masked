
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct bnx2i_conn {TYPE_2__* ep; } ;
struct TYPE_3__ {scalar_t__ rq_cons_qe; scalar_t__ rq_last_qe; scalar_t__ rq_first_qe; scalar_t__ rq_cons_idx; int rqe_left; } ;
struct TYPE_4__ {TYPE_1__ qp; } ;


 int FUNC_0 (char*,int *,int) ;

void FUNC_1(struct bnx2i_conn *VAR_0, char *VAR_1, int VAR_2)
{
 if (!VAR_0->ep->qp.rqe_left)
  return;

 VAR_0->ep->qp.rqe_left--;
 FUNC_0(VAR_1, (u8 *) VAR_0->ep->qp.rq_cons_qe, VAR_2);
 if (VAR_0->ep->qp.rq_cons_qe == VAR_0->ep->qp.rq_last_qe) {
  VAR_0->ep->qp.rq_cons_qe = VAR_0->ep->qp.rq_first_qe;
  VAR_0->ep->qp.rq_cons_idx = 0;
 } else {
  VAR_0->ep->qp.rq_cons_qe++;
  VAR_0->ep->qp.rq_cons_idx++;
 }
}
