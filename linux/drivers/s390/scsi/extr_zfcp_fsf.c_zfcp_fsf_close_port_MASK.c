
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


struct zfcp_qdio {int req_q_lock; TYPE_3__* adapter; } ;
struct zfcp_fsf_req {int req_id; TYPE_5__* qtcb; struct zfcp_erp_action* erp_action; TYPE_6__* data; int handler; int qdio_req; int status; } ;
struct zfcp_erp_action {int fsf_req_id; TYPE_6__* port; TYPE_1__* adapter; } ;
struct TYPE_12__ {int handle; } ;
struct TYPE_10__ {int port_handle; } ;
struct TYPE_11__ {TYPE_4__ header; } ;
struct TYPE_8__ {int erp_req; } ;
struct TYPE_9__ {TYPE_2__ pool; } ;
struct TYPE_7__ {struct zfcp_qdio* qdio; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct zfcp_fsf_req*) ;
 int FUNC_1 (struct zfcp_fsf_req*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 struct zfcp_fsf_req* FUNC_4 (struct zfcp_qdio*,int ,int ,int ) ;
 int FUNC_5 (struct zfcp_fsf_req*) ;
 int FUNC_6 (struct zfcp_fsf_req*) ;
 int FUNC_7 (struct zfcp_fsf_req*) ;
 scalar_t__ FUNC_8 (struct zfcp_qdio*) ;
 int FUNC_9 (struct zfcp_qdio*,int *) ;

int FUNC_10(struct zfcp_erp_action *VAR_5)
{
 struct zfcp_qdio *VAR_6 = VAR_5->adapter->qdio;
 struct zfcp_fsf_req *VAR_7;
 int VAR_8 = -VAR_0;

 FUNC_2(&VAR_6->req_q_lock);
 if (FUNC_8(VAR_6))
  goto out;

 VAR_7 = FUNC_4(VAR_6, VAR_1,
      VAR_2,
      VAR_6->adapter->pool.erp_req);

 if (FUNC_0(VAR_7)) {
  VAR_8 = FUNC_1(VAR_7);
  goto out;
 }

 VAR_7->status |= VAR_3;
 FUNC_9(VAR_6, &VAR_7->qdio_req);

 VAR_7->handler = VAR_4;
 VAR_7->data = VAR_5->port;
 VAR_7->erp_action = VAR_5;
 VAR_7->qtcb->header.port_handle = VAR_5->port->handle;
 VAR_5->fsf_req_id = VAR_7->req_id;

 FUNC_7(VAR_7);
 VAR_8 = FUNC_6(VAR_7);
 if (VAR_8) {
  FUNC_5(VAR_7);
  VAR_5->fsf_req_id = 0;
 }

out:
 FUNC_3(&VAR_6->req_q_lock);
 return VAR_8;
}
