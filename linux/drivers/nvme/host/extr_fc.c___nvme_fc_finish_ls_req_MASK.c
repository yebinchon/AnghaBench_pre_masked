
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmefc_ls_req {scalar_t__ rsplen; scalar_t__ rqstlen; int rqstdma; } ;
struct nvmefc_ls_req_op {int req_queued; int lsreq_list; struct nvmefc_ls_req ls_req; struct nvme_fc_rport* rport; } ;
struct nvme_fc_rport {int dev; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nvme_fc_rport*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_5(struct nvmefc_ls_req_op *VAR_1)
{
 struct nvme_fc_rport *VAR_2 = VAR_1->rport;
 struct nvmefc_ls_req *VAR_3 = &VAR_1->ls_req;
 unsigned long VAR_4;

 FUNC_3(&VAR_2->lock, VAR_4);

 if (!VAR_1->req_queued) {
  FUNC_4(&VAR_2->lock, VAR_4);
  return;
 }

 FUNC_1(&VAR_1->lsreq_list);

 VAR_1->req_queued = 0;

 FUNC_4(&VAR_2->lock, VAR_4);

 FUNC_0(VAR_2->dev, VAR_3->rqstdma,
      (VAR_3->rqstlen + VAR_3->rsplen),
      VAR_0);

 FUNC_2(VAR_2);
}
