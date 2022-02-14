
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


struct zfcp_qdio {int req_q_lock; } ;
struct zfcp_fsf_req {TYPE_6__* qtcb; int req_id; struct zfcp_erp_action* erp_action; int data; int handler; int qdio_req; int status; } ;
struct zfcp_erp_action {int fsf_req_id; int sdev; TYPE_3__* port; struct zfcp_adapter* adapter; } ;
struct TYPE_7__ {int erp_req; } ;
struct zfcp_adapter {int connection_features; TYPE_1__ pool; struct zfcp_qdio* qdio; } ;
struct TYPE_10__ {int option; int fcp_lun; } ;
struct TYPE_11__ {TYPE_4__ support; } ;
struct TYPE_8__ {int port_handle; } ;
struct TYPE_12__ {TYPE_5__ bottom; TYPE_2__ header; } ;
struct TYPE_9__ {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct zfcp_fsf_req*) ;
 int FUNC_1 (struct zfcp_fsf_req*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_6 ;
 struct zfcp_fsf_req* FUNC_4 (struct zfcp_qdio*,int ,int ,int ) ;
 int FUNC_5 (struct zfcp_fsf_req*) ;
 int FUNC_6 (struct zfcp_fsf_req*) ;
 int FUNC_7 (struct zfcp_fsf_req*) ;
 scalar_t__ FUNC_8 (struct zfcp_qdio*) ;
 int FUNC_9 (struct zfcp_qdio*,int *) ;
 int FUNC_10 (int ) ;

int FUNC_11(struct zfcp_erp_action *VAR_7)
{
 struct zfcp_adapter *VAR_8 = VAR_7->adapter;
 struct zfcp_qdio *VAR_9 = VAR_8->qdio;
 struct zfcp_fsf_req *VAR_10;
 int VAR_11 = -VAR_0;

 FUNC_2(&VAR_9->req_q_lock);
 if (FUNC_8(VAR_9))
  goto out;

 VAR_10 = FUNC_4(VAR_9, VAR_3,
      VAR_4,
      VAR_8->pool.erp_req);

 if (FUNC_0(VAR_10)) {
  VAR_11 = FUNC_1(VAR_10);
  goto out;
 }

 VAR_10->status |= VAR_5;
 FUNC_9(VAR_9, &VAR_10->qdio_req);

 VAR_10->qtcb->header.port_handle = VAR_7->port->handle;
 VAR_10->qtcb->bottom.support.fcp_lun = FUNC_10(VAR_7->sdev);
 VAR_10->handler = VAR_6;
 VAR_10->data = VAR_7->sdev;
 VAR_10->erp_action = VAR_7;
 VAR_7->fsf_req_id = VAR_10->req_id;

 if (!(VAR_8->connection_features & VAR_1))
  VAR_10->qtcb->bottom.support.option = VAR_2;

 FUNC_7(VAR_10);
 VAR_11 = FUNC_6(VAR_10);
 if (VAR_11) {
  FUNC_5(VAR_10);
  VAR_7->fsf_req_id = 0;
 }

out:
 FUNC_3(&VAR_9->req_q_lock);
 return VAR_11;
}
