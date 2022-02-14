
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nvmet_fc_tgtport {int dummy; } ;
struct TYPE_3__ {int transfer_len; } ;
struct nvmet_fc_fcp_iod {int abort; int writedataactive; int queue; TYPE_1__ req; int offset; int flock; struct nvmet_fc_tgtport* tgtport; struct nvmefc_tgt_fcp_req* fcpreq; } ;
struct nvmefc_tgt_fcp_req {int op; int transferred_length; int transfer_length; int fcp_error; } ;






 int VAR_0 ;
 int FUNC_0 (struct nvmet_fc_fcp_iod*,int) ;
 int FUNC_1 (struct nvmet_fc_tgtport*,struct nvmet_fc_fcp_iod*) ;
 int FUNC_2 (int ,struct nvmet_fc_fcp_iod*) ;
 int FUNC_3 (struct nvmet_fc_fcp_iod*) ;
 int FUNC_4 (struct nvmet_fc_tgtport*,struct nvmet_fc_fcp_iod*,int const) ;
 int FUNC_5 (struct nvmet_fc_tgtport*,struct nvmet_fc_fcp_iod*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_12(struct nvmet_fc_fcp_iod *VAR_1)
{
 struct nvmefc_tgt_fcp_req *VAR_2 = VAR_1->fcpreq;
 struct nvmet_fc_tgtport *VAR_3 = VAR_1->tgtport;
 unsigned long VAR_4;
 bool VAR_5;

 FUNC_9(&VAR_1->flock, VAR_4);
 VAR_5 = VAR_1->abort;
 VAR_1->writedataactive = 0;
 FUNC_11(&VAR_1->flock, VAR_4);

 switch (VAR_2->op) {

 case 128:
  if (FUNC_0(VAR_1, VAR_5))
   return;
  if (VAR_2->fcp_error ||
      VAR_2->transferred_length != VAR_2->transfer_length) {
   FUNC_8(&VAR_1->flock);
   VAR_1->abort = 1;
   FUNC_10(&VAR_1->flock);

   FUNC_6(&VAR_1->req, VAR_0);
   return;
  }

  VAR_1->offset += VAR_2->transferred_length;
  if (VAR_1->offset != VAR_1->req.transfer_len) {
   FUNC_9(&VAR_1->flock, VAR_4);
   VAR_1->writedataactive = 1;
   FUNC_11(&VAR_1->flock, VAR_4);


   FUNC_4(VAR_3, VAR_1,
      128);
   return;
  }


  FUNC_7(&VAR_1->req);
  break;

 case 131:
 case 130:
  if (FUNC_0(VAR_1, VAR_5))
   return;
  if (VAR_2->fcp_error ||
      VAR_2->transferred_length != VAR_2->transfer_length) {
   FUNC_1(VAR_3, VAR_1);
   return;
  }



  if (VAR_2->op == 130) {

   FUNC_3(VAR_1);
   FUNC_2(VAR_1->queue, VAR_1);
   return;
  }

  VAR_1->offset += VAR_2->transferred_length;
  if (VAR_1->offset != VAR_1->req.transfer_len) {

   FUNC_4(VAR_3, VAR_1,
      131);
   return;
  }




  FUNC_3(VAR_1);

  FUNC_5(VAR_3, VAR_1);

  break;

 case 129:
  if (FUNC_0(VAR_1, VAR_5))
   return;
  FUNC_2(VAR_1->queue, VAR_1);
  break;

 default:
  break;
 }
}
