
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct zfcp_qdio {int req_q_lock; TYPE_3__* adapter; } ;
struct zfcp_fsf_req {int req_id; struct zfcp_erp_action* erp_action; int handler; int qdio_req; int status; } ;
struct zfcp_erp_action {int fsf_req_id; TYPE_1__* adapter; } ;
struct TYPE_5__ {int erp_req; } ;
struct TYPE_6__ {int adapter_features; TYPE_2__ pool; } ;
struct TYPE_4__ {struct zfcp_qdio* qdio; } ;


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

int FUNC_10(struct zfcp_erp_action *VAR_7)
{
 struct zfcp_qdio *VAR_8 = VAR_7->adapter->qdio;
 struct zfcp_fsf_req *VAR_9;
 int VAR_10 = -VAR_0;

 if (!(VAR_8->adapter->adapter_features & VAR_2))
  return -VAR_1;

 FUNC_2(&VAR_8->req_q_lock);
 if (FUNC_8(VAR_8))
  goto out;

 VAR_9 = FUNC_4(VAR_8, VAR_3,
      VAR_4,
      VAR_8->adapter->pool.erp_req);

 if (FUNC_0(VAR_9)) {
  VAR_10 = FUNC_1(VAR_9);
  goto out;
 }

 VAR_9->status |= VAR_5;
 FUNC_9(VAR_8, &VAR_9->qdio_req);

 VAR_9->handler = VAR_6;
 VAR_9->erp_action = VAR_7;
 VAR_7->fsf_req_id = VAR_9->req_id;

 FUNC_7(VAR_9);
 VAR_10 = FUNC_6(VAR_9);
 if (VAR_10) {
  FUNC_5(VAR_9);
  VAR_7->fsf_req_id = 0;
 }

out:
 FUNC_3(&VAR_8->req_q_lock);
 return VAR_10;
}
