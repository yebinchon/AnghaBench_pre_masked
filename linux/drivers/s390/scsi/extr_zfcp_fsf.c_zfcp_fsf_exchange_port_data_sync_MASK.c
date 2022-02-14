
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_qdio {int req_q_lock; TYPE_1__* adapter; } ;
struct zfcp_fsf_req {int completion; int handler; int qdio_req; struct fsf_qtcb_bottom_port* data; } ;
struct fsf_qtcb_bottom_port {int dummy; } ;
struct TYPE_2__ {int adapter_features; } ;


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
 int FUNC_4 (int *) ;
 int VAR_6 ;
 struct zfcp_fsf_req* FUNC_5 (struct zfcp_qdio*,int ,int ,int *) ;
 int FUNC_6 (struct zfcp_fsf_req*) ;
 int FUNC_7 (struct zfcp_fsf_req*) ;
 int FUNC_8 (struct zfcp_fsf_req*,int ) ;
 scalar_t__ FUNC_9 (struct zfcp_qdio*) ;
 int FUNC_10 (struct zfcp_qdio*,int *) ;

int FUNC_11(struct zfcp_qdio *VAR_7,
         struct fsf_qtcb_bottom_port *VAR_8)
{
 struct zfcp_fsf_req *VAR_9 = ((void*)0);
 int VAR_10 = -VAR_0;

 if (!(VAR_7->adapter->adapter_features & VAR_2))
  return -VAR_1;

 FUNC_2(&VAR_7->req_q_lock);
 if (FUNC_9(VAR_7))
  goto out_unlock;

 VAR_9 = FUNC_5(VAR_7, VAR_3,
      VAR_4, ((void*)0));

 if (FUNC_0(VAR_9)) {
  VAR_10 = FUNC_1(VAR_9);
  goto out_unlock;
 }

 if (VAR_8)
  VAR_9->data = VAR_8;

 FUNC_10(VAR_7, &VAR_9->qdio_req);

 VAR_9->handler = VAR_6;
 FUNC_8(VAR_9, VAR_5);
 VAR_10 = FUNC_7(VAR_9);
 FUNC_3(&VAR_7->req_q_lock);

 if (!VAR_10) {

  FUNC_4(&VAR_9->completion);
 }

 FUNC_6(VAR_9);

 return VAR_10;

out_unlock:
 FUNC_3(&VAR_7->req_q_lock);
 return VAR_10;
}
