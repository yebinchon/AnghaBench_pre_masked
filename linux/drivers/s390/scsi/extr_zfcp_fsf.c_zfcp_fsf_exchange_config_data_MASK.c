
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
struct zfcp_fsf_req {int req_id; int handler; struct zfcp_erp_action* erp_action; TYPE_6__* qtcb; int qdio_req; int status; } ;
struct zfcp_erp_action {int fsf_req_id; TYPE_1__* adapter; } ;
struct TYPE_10__ {int feature_selection; } ;
struct TYPE_11__ {TYPE_4__ config; } ;
struct TYPE_12__ {TYPE_5__ bottom; } ;
struct TYPE_8__ {int erp_req; } ;
struct TYPE_9__ {TYPE_2__ pool; } ;
struct TYPE_7__ {struct zfcp_qdio* qdio; } ;


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
 struct zfcp_fsf_req *VAR_8;
 struct zfcp_qdio *VAR_9 = VAR_7->adapter->qdio;
 int VAR_10 = -VAR_0;

 FUNC_2(&VAR_9->req_q_lock);
 if (FUNC_8(VAR_9))
  goto out;

 VAR_8 = FUNC_4(VAR_9, VAR_3,
      VAR_4,
      VAR_9->adapter->pool.erp_req);

 if (FUNC_0(VAR_8)) {
  VAR_10 = FUNC_1(VAR_8);
  goto out;
 }

 VAR_8->status |= VAR_5;
 FUNC_9(VAR_9, &VAR_8->qdio_req);

 VAR_8->qtcb->bottom.config.feature_selection =
   VAR_1 |
   VAR_2;
 VAR_8->erp_action = VAR_7;
 VAR_8->handler = VAR_6;
 VAR_7->fsf_req_id = VAR_8->req_id;

 FUNC_7(VAR_8);
 VAR_10 = FUNC_6(VAR_8);
 if (VAR_10) {
  FUNC_5(VAR_8);
  VAR_7->fsf_req_id = 0;
 }

out:
 FUNC_3(&VAR_9->req_q_lock);
 return VAR_10;
}
