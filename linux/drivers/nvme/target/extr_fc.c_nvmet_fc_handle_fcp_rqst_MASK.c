
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nvmet_fc_tgtport {TYPE_2__* pe; } ;
struct TYPE_11__ {scalar_t__ sg_cnt; int * sg; scalar_t__ transfer_len; int port; int * cqe; int * cmd; } ;
struct TYPE_12__ {int cqe; } ;
struct nvme_fc_cmd_iu {int flags; int sqe; int data_len; } ;
struct nvmet_fc_fcp_iod {scalar_t__ io_dir; TYPE_4__ req; scalar_t__ offset; scalar_t__ data_sg_cnt; int * data_sg; TYPE_3__* queue; TYPE_7__ rspiubuf; struct nvme_fc_cmd_iu cmdiubuf; TYPE_1__* fcpreq; } ;
struct TYPE_10__ {int sqtail; int nvme_sq; int nvme_cq; } ;
struct TYPE_9__ {int port; } ;
struct TYPE_8__ {int done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_7__*,int ,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct nvmet_fc_tgtport*,struct nvmet_fc_fcp_iod*) ;
 int FUNC_5 (struct nvmet_fc_fcp_iod*) ;
 int VAR_6 ;
 int FUNC_6 (struct nvmet_fc_tgtport*,struct nvmet_fc_fcp_iod*,int ) ;
 int VAR_7 ;
 int FUNC_7 (TYPE_4__*,int) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_10(struct nvmet_fc_tgtport *VAR_8,
   struct nvmet_fc_fcp_iod *VAR_9)
{
 struct nvme_fc_cmd_iu *VAR_10 = &VAR_9->cmdiubuf;
 u32 VAR_11 = FUNC_1(VAR_10->data_len);
 int VAR_12;





 if (!VAR_8->pe)
  goto transport_error;
 VAR_9->fcpreq->done = VAR_7;

 if (VAR_10->flags & VAR_1) {
  VAR_9->io_dir = VAR_5;
  if (!FUNC_3(&VAR_10->sqe))
   goto transport_error;
 } else if (VAR_10->flags & VAR_0) {
  VAR_9->io_dir = VAR_4;
  if (FUNC_3(&VAR_10->sqe))
   goto transport_error;
 } else {
  VAR_9->io_dir = VAR_3;
  if (VAR_11)
   goto transport_error;
 }

 VAR_9->req.cmd = &VAR_9->cmdiubuf.sqe;
 VAR_9->req.cqe = &VAR_9->rspiubuf.cqe;
 VAR_9->req.port = VAR_8->pe->port;


 FUNC_2(&VAR_9->rspiubuf, 0, sizeof(VAR_9->rspiubuf));

 VAR_9->data_sg = ((void*)0);
 VAR_9->data_sg_cnt = 0;

 VAR_12 = FUNC_9(&VAR_9->req,
    &VAR_9->queue->nvme_cq,
    &VAR_9->queue->nvme_sq,
    &VAR_6);
 if (!VAR_12) {


  return;
 }

 VAR_9->req.transfer_len = VAR_11;


 FUNC_0(&VAR_9->queue->sqtail);

 if (VAR_9->req.transfer_len) {
  VAR_12 = FUNC_5(VAR_9);
  if (VAR_12) {
   FUNC_7(&VAR_9->req, VAR_12);
   return;
  }
 }
 VAR_9->req.sg = VAR_9->data_sg;
 VAR_9->req.sg_cnt = VAR_9->data_sg_cnt;
 VAR_9->offset = 0;

 if (VAR_9->io_dir == VAR_5) {

  FUNC_6(VAR_8, VAR_9, VAR_2);
  return;
 }







 FUNC_8(&VAR_9->req);
 return;

transport_error:
 FUNC_4(VAR_8, VAR_9);
}
