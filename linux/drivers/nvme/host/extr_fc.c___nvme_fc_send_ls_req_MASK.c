
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvmefc_ls_req {void (* done ) (struct nvmefc_ls_req*,int) ;scalar_t__ rsplen; scalar_t__ rqstlen; scalar_t__ rqstdma; scalar_t__ rspdma; int rqstaddr; } ;
struct nvmefc_ls_req_op {int req_queued; int ls_error; int lsreq_list; int ls_done; struct nvme_fc_rport* rport; struct nvmefc_ls_req ls_req; } ;
struct TYPE_6__ {scalar_t__ port_state; } ;
struct nvme_fc_rport {int dev; int lock; TYPE_3__ remoteport; TYPE_2__* lport; int ls_req_list; } ;
struct TYPE_5__ {int localport; TYPE_1__* ops; } ;
struct TYPE_4__ {int (* ls_req ) (int *,TYPE_3__*,struct nvmefc_ls_req*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct nvme_fc_rport*) ;
 int FUNC_8 (struct nvme_fc_rport*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,TYPE_3__*,struct nvmefc_ls_req*) ;

__attribute__((used)) static int
FUNC_12(struct nvme_fc_rport *VAR_5,
  struct nvmefc_ls_req_op *VAR_6,
  void (*VAR_7)(struct nvmefc_ls_req *VAR_8, int VAR_9))
{
 struct nvmefc_ls_req *VAR_10 = &VAR_6->ls_req;
 unsigned long VAR_11;
 int VAR_12 = 0;

 if (VAR_5->remoteport.port_state != VAR_4)
  return -VAR_1;

 if (!FUNC_7(VAR_5))
  return -VAR_3;

 VAR_10->done = VAR_7;
 VAR_6->rport = VAR_5;
 VAR_6->req_queued = 0;
 FUNC_0(&VAR_6->lsreq_list);
 FUNC_4(&VAR_6->ls_done);

 VAR_10->rqstdma = FUNC_1(VAR_5->dev, VAR_10->rqstaddr,
      VAR_10->rqstlen + VAR_10->rsplen,
      VAR_0);
 if (FUNC_2(VAR_5->dev, VAR_10->rqstdma)) {
  VAR_12 = -VAR_2;
  goto out_putrport;
 }
 VAR_10->rspdma = VAR_10->rqstdma + VAR_10->rqstlen;

 FUNC_9(&VAR_5->lock, VAR_11);

 FUNC_5(&VAR_6->lsreq_list, &VAR_5->ls_req_list);

 VAR_6->req_queued = 1;

 FUNC_10(&VAR_5->lock, VAR_11);

 VAR_12 = VAR_5->lport->ops->ls_req(&VAR_5->lport->localport,
     &VAR_5->remoteport, VAR_10);
 if (VAR_12)
  goto out_unlink;

 return 0;

out_unlink:
 VAR_6->ls_error = VAR_12;
 FUNC_9(&VAR_5->lock, VAR_11);
 VAR_6->req_queued = 0;
 FUNC_6(&VAR_6->lsreq_list);
 FUNC_10(&VAR_5->lock, VAR_11);
 FUNC_3(VAR_5->dev, VAR_10->rqstdma,
      (VAR_10->rqstlen + VAR_10->rsplen),
      VAR_0);
out_putrport:
 FUNC_8(VAR_5);

 return VAR_12;
}
