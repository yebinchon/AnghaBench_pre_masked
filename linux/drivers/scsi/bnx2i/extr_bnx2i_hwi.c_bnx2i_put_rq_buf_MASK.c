
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_6__ {int rq_prod_idx; int rqe_left; scalar_t__ ctx_base; scalar_t__ rq_pgtbl_virt; } ;
struct bnx2i_endpoint {TYPE_3__ qp; TYPE_2__* hba; } ;
struct bnx2i_conn {TYPE_1__* hba; struct bnx2i_endpoint* ep; } ;
struct bnx2i_5771x_sq_rq_db {int prod_idx; } ;
struct TYPE_5__ {int cnic_dev_type; } ;
struct TYPE_4__ {int max_rqes; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int,scalar_t__) ;

void FUNC_2(struct bnx2i_conn *VAR_2, int VAR_3)
{
 struct bnx2i_5771x_sq_rq_db *VAR_4;
 u16 VAR_5 = (VAR_2->ep->qp.rq_prod_idx & 0x8000);
 struct bnx2i_endpoint *VAR_6 = VAR_2->ep;

 VAR_6->qp.rqe_left += VAR_3;
 VAR_6->qp.rq_prod_idx &= 0x7FFF;
 VAR_6->qp.rq_prod_idx += VAR_3;

 if (VAR_6->qp.rq_prod_idx > VAR_2->hba->max_rqes) {
  VAR_6->qp.rq_prod_idx %= VAR_2->hba->max_rqes;
  if (!VAR_5)
   VAR_6->qp.rq_prod_idx |= 0x8000;
 } else
  VAR_6->qp.rq_prod_idx |= VAR_5;

 if (FUNC_0(VAR_0, &VAR_6->hba->cnic_dev_type)) {
  VAR_4 = (struct bnx2i_5771x_sq_rq_db *) VAR_6->qp.rq_pgtbl_virt;
  VAR_4->prod_idx = VAR_6->qp.rq_prod_idx;

 } else {
  FUNC_1(VAR_6->qp.rq_prod_idx,
         VAR_6->qp.ctx_base + VAR_1);
 }
}
