
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_fc_target_port {int dummy; } ;
struct nvmefc_tgt_ls_req {scalar_t__ rsplen; int (* done ) (struct nvmefc_tgt_ls_req*) ;int rspbuf; } ;
struct nvmefc_ls_req {scalar_t__ rsplen; int rspaddr; } ;
struct fcloop_lsreq {int work; struct nvmefc_ls_req* lsreq; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nvmefc_tgt_ls_req*) ;
 struct fcloop_lsreq* FUNC_3 (struct nvmefc_tgt_ls_req*) ;

__attribute__((used)) static int
FUNC_4(struct nvmet_fc_target_port *VAR_0,
   struct nvmefc_tgt_ls_req *VAR_1)
{
 struct fcloop_lsreq *VAR_2 = FUNC_3(VAR_1);
 struct nvmefc_ls_req *VAR_3 = VAR_2->lsreq;

 FUNC_0(VAR_3->rspaddr, VAR_1->rspbuf,
  ((VAR_3->rsplen < VAR_1->rsplen) ?
    VAR_3->rsplen : VAR_1->rsplen));
 VAR_1->done(VAR_1);

 FUNC_1(&VAR_2->work);

 return 0;
}
