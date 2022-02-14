
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvmet_fc_tgtport {int dummy; } ;
struct nvmet_fc_target_port {int dummy; } ;
struct nvmet_fc_ls_iod {int work; int rqstdatalen; int rqstbuf; int * fcpreq; struct nvmefc_tgt_ls_req* lsreq; } ;
struct nvmefc_tgt_ls_req {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,void*,int ) ;
 struct nvmet_fc_ls_iod* FUNC_1 (struct nvmet_fc_tgtport*) ;
 int FUNC_2 (struct nvmet_fc_tgtport*) ;
 int FUNC_3 (struct nvmet_fc_tgtport*) ;
 int FUNC_4 (int *) ;
 struct nvmet_fc_tgtport* FUNC_5 (struct nvmet_fc_target_port*) ;

int
FUNC_6(struct nvmet_fc_target_port *VAR_4,
   struct nvmefc_tgt_ls_req *VAR_5,
   void *VAR_6, u32 VAR_7)
{
 struct nvmet_fc_tgtport *VAR_8 = FUNC_5(VAR_4);
 struct nvmet_fc_ls_iod *VAR_9;

 if (VAR_7 > VAR_3)
  return -VAR_0;

 if (!FUNC_2(VAR_8))
  return -VAR_2;

 VAR_9 = FUNC_1(VAR_8);
 if (!VAR_9) {
  FUNC_3(VAR_8);
  return -VAR_1;
 }

 VAR_9->lsreq = VAR_5;
 VAR_9->fcpreq = ((void*)0);
 FUNC_0(VAR_9->rqstbuf, VAR_6, VAR_7);
 VAR_9->rqstdatalen = VAR_7;

 FUNC_4(&VAR_9->work);

 return 0;
}
