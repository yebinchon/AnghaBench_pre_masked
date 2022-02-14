
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
struct zfcp_port {int dev; int d_id; } ;
struct zfcp_fsf_req {int req_id; struct zfcp_erp_action* erp_action; struct zfcp_port* data; TYPE_6__* qtcb; int handler; int qdio_req; int status; } ;
struct zfcp_erp_action {int fsf_req_id; struct zfcp_port* port; TYPE_1__* adapter; } ;
struct TYPE_10__ {int d_id; } ;
struct TYPE_11__ {TYPE_4__ support; } ;
struct TYPE_12__ {TYPE_5__ bottom; } ;
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
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 struct zfcp_fsf_req* FUNC_7 (struct zfcp_qdio*,int ,int ,int ) ;
 int FUNC_8 (struct zfcp_fsf_req*) ;
 int FUNC_9 (struct zfcp_fsf_req*) ;
 int FUNC_10 (struct zfcp_fsf_req*) ;
 scalar_t__ FUNC_11 (struct zfcp_qdio*) ;
 int FUNC_12 (struct zfcp_qdio*,int *) ;

int FUNC_13(struct zfcp_erp_action *VAR_5)
{
 struct zfcp_qdio *VAR_6 = VAR_5->adapter->qdio;
 struct zfcp_port *VAR_7 = VAR_5->port;
 struct zfcp_fsf_req *VAR_8;
 int VAR_9 = -VAR_0;

 FUNC_5(&VAR_6->req_q_lock);
 if (FUNC_11(VAR_6))
  goto out;

 VAR_8 = FUNC_7(VAR_6, VAR_1,
      VAR_2,
      VAR_6->adapter->pool.erp_req);

 if (FUNC_0(VAR_8)) {
  VAR_9 = FUNC_1(VAR_8);
  goto out;
 }

 VAR_8->status |= VAR_3;
 FUNC_12(VAR_6, &VAR_8->qdio_req);

 VAR_8->handler = VAR_4;
 FUNC_3(VAR_8->qtcb->bottom.support.d_id, VAR_7->d_id);
 VAR_8->data = VAR_7;
 VAR_8->erp_action = VAR_5;
 VAR_5->fsf_req_id = VAR_8->req_id;
 FUNC_2(&VAR_7->dev);

 FUNC_10(VAR_8);
 VAR_9 = FUNC_9(VAR_8);
 if (VAR_9) {
  FUNC_8(VAR_8);
  VAR_5->fsf_req_id = 0;
  FUNC_4(&VAR_7->dev);
 }

out:
 FUNC_6(&VAR_6->req_q_lock);
 return VAR_9;
}
