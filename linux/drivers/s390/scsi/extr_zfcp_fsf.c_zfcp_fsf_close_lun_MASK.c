
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct zfcp_scsi_dev {int lun_handle; } ;
struct zfcp_qdio {int req_q_lock; TYPE_3__* adapter; } ;
struct zfcp_fsf_req {int req_id; struct zfcp_erp_action* erp_action; int data; int handler; TYPE_6__* qtcb; int qdio_req; int status; } ;
struct zfcp_erp_action {int fsf_req_id; int sdev; TYPE_4__* port; TYPE_1__* adapter; } ;
struct TYPE_11__ {int lun_handle; int port_handle; } ;
struct TYPE_12__ {TYPE_5__ header; } ;
struct TYPE_10__ {int handle; } ;
struct TYPE_8__ {int erp_req; } ;
struct TYPE_9__ {TYPE_2__ pool; } ;
struct TYPE_7__ {struct zfcp_qdio* qdio; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct zfcp_fsf_req*) ;
 int FUNC_1 (struct zfcp_fsf_req*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct zfcp_scsi_dev* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 struct zfcp_fsf_req* FUNC_5 (struct zfcp_qdio*,int ,int ,int ) ;
 int FUNC_6 (struct zfcp_fsf_req*) ;
 int FUNC_7 (struct zfcp_fsf_req*) ;
 int FUNC_8 (struct zfcp_fsf_req*) ;
 scalar_t__ FUNC_9 (struct zfcp_qdio*) ;
 int FUNC_10 (struct zfcp_qdio*,int *) ;

int FUNC_11(struct zfcp_erp_action *VAR_5)
{
 struct zfcp_qdio *VAR_6 = VAR_5->adapter->qdio;
 struct zfcp_scsi_dev *VAR_7 = FUNC_2(VAR_5->sdev);
 struct zfcp_fsf_req *VAR_8;
 int VAR_9 = -VAR_0;

 FUNC_3(&VAR_6->req_q_lock);
 if (FUNC_9(VAR_6))
  goto out;

 VAR_8 = FUNC_5(VAR_6, VAR_1,
      VAR_2,
      VAR_6->adapter->pool.erp_req);

 if (FUNC_0(VAR_8)) {
  VAR_9 = FUNC_1(VAR_8);
  goto out;
 }

 VAR_8->status |= VAR_3;
 FUNC_10(VAR_6, &VAR_8->qdio_req);

 VAR_8->qtcb->header.port_handle = VAR_5->port->handle;
 VAR_8->qtcb->header.lun_handle = VAR_7->lun_handle;
 VAR_8->handler = VAR_4;
 VAR_8->data = VAR_5->sdev;
 VAR_8->erp_action = VAR_5;
 VAR_5->fsf_req_id = VAR_8->req_id;

 FUNC_8(VAR_8);
 VAR_9 = FUNC_7(VAR_8);
 if (VAR_9) {
  FUNC_6(VAR_8);
  VAR_5->fsf_req_id = 0;
 }

out:
 FUNC_4(&VAR_6->req_q_lock);
 return VAR_9;
}
