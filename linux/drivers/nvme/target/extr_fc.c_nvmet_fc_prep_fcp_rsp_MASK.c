
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nvmet_fc_tgtport {int dev; } ;
struct TYPE_8__ {scalar_t__ transfer_len; } ;
struct nvme_common_command {int flags; } ;
struct TYPE_6__ {struct nvme_common_command common; } ;
struct TYPE_7__ {TYPE_1__ sqe; } ;
struct nvme_completion {int sq_head; int status; } ;
struct nvme_fc_ersp_iu {void* xfrd_len; void* rsn; int iu_len; struct nvme_completion cqe; } ;
struct nvmet_fc_fcp_iod {scalar_t__ offset; int rspdma; TYPE_4__* fcpreq; TYPE_5__* queue; TYPE_3__ req; TYPE_2__ cmdiubuf; struct nvme_fc_ersp_iu rspiubuf; } ;
struct nvme_command {int dummy; } ;
struct TYPE_10__ {scalar_t__ ersp_ratio; int rsn; int zrspcnt; } ;
struct TYPE_9__ {scalar_t__ op; int rsplen; int rspdma; struct nvme_fc_ersp_iu* rspaddr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct nvme_fc_ersp_iu*,int ,int) ;
 scalar_t__ FUNC_6 (struct nvme_command*) ;
 scalar_t__ FUNC_7 (TYPE_5__*,int) ;

__attribute__((used)) static void
FUNC_8(struct nvmet_fc_tgtport *VAR_5,
    struct nvmet_fc_fcp_iod *VAR_6)
{
 struct nvme_fc_ersp_iu *VAR_7 = &VAR_6->rspiubuf;
 struct nvme_common_command *VAR_8 = &VAR_6->cmdiubuf.sqe.common;
 struct nvme_completion *VAR_9 = &VAR_7->cqe;
 u32 *VAR_10 = (u32 *)VAR_9;
 bool VAR_11 = 0;
 u32 VAR_12, VAR_13, VAR_14;

 if (VAR_6->fcpreq->op == VAR_1)
  VAR_14 = VAR_6->req.transfer_len;
 else
  VAR_14 = VAR_6->offset;
 VAR_13 = FUNC_0(&VAR_6->queue->zrspcnt);
 if (!(VAR_13 % VAR_6->queue->ersp_ratio) ||
     FUNC_6((struct nvme_command *) VAR_8) ||
     VAR_14 != VAR_6->req.transfer_len ||
     (FUNC_4(VAR_9->status) & 0xFFFE) || VAR_10[0] || VAR_10[1] ||
     (VAR_8->flags & (VAR_2 | VAR_3)) ||
     FUNC_7(VAR_6->queue, FUNC_4(VAR_9->sq_head)))
  VAR_11 = 1;


 VAR_6->fcpreq->rspaddr = VAR_7;
 VAR_6->fcpreq->rspdma = VAR_6->rspdma;

 if (!VAR_11) {
  FUNC_5(VAR_7, 0, VAR_4);
  VAR_6->fcpreq->rsplen = VAR_4;
 } else {
  VAR_7->iu_len = FUNC_1(sizeof(*VAR_7)/sizeof(u32));
  VAR_12 = FUNC_0(&VAR_6->queue->rsn);
  VAR_7->rsn = FUNC_2(VAR_12);
  VAR_7->xfrd_len = FUNC_2(VAR_14);
  VAR_6->fcpreq->rsplen = sizeof(*VAR_7);
 }

 FUNC_3(VAR_5->dev, VAR_6->rspdma,
      sizeof(VAR_6->rspiubuf), VAR_0);
}
