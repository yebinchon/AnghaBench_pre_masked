
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct zfcp_qdio {int req_q_lock; } ;
struct zfcp_fsf_req {struct zfcp_fsf_ct_els* data; int handler; TYPE_3__* qtcb; int qdio_req; int status; } ;
struct zfcp_fsf_ct_els {int d_id; int resp; int req; } ;
struct zfcp_adapter {struct zfcp_qdio* qdio; } ;
struct TYPE_4__ {int d_id; } ;
struct TYPE_5__ {TYPE_1__ support; } ;
struct TYPE_6__ {TYPE_2__ bottom; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct zfcp_fsf_req*) ;
 int FUNC_1 (struct zfcp_fsf_req*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct zfcp_adapter*) ;
 int FUNC_6 (char*,struct zfcp_fsf_req*,int ) ;
 struct zfcp_fsf_req* FUNC_7 (struct zfcp_qdio*,int ,int ,int *) ;
 int FUNC_8 (struct zfcp_fsf_req*) ;
 int FUNC_9 (struct zfcp_fsf_req*) ;
 int VAR_4 ;
 int FUNC_10 (struct zfcp_fsf_req*,int ,int ,unsigned int) ;
 scalar_t__ FUNC_11 (struct zfcp_qdio*) ;
 int FUNC_12 (struct zfcp_qdio*,int *,int) ;

int FUNC_13(struct zfcp_adapter *VAR_5, u32 VAR_6,
        struct zfcp_fsf_ct_els *VAR_7, unsigned int VAR_8)
{
 struct zfcp_fsf_req *VAR_9;
 struct zfcp_qdio *VAR_10 = VAR_5->qdio;
 int VAR_11 = -VAR_0;

 FUNC_3(&VAR_10->req_q_lock);
 if (FUNC_11(VAR_10))
  goto out;

 VAR_9 = FUNC_7(VAR_10, VAR_1,
      VAR_2, ((void*)0));

 if (FUNC_0(VAR_9)) {
  VAR_11 = FUNC_1(VAR_9);
  goto out;
 }

 VAR_9->status |= VAR_3;

 if (!FUNC_5(VAR_5))
  FUNC_12(VAR_10, &VAR_9->qdio_req, 2);

 VAR_11 = FUNC_10(VAR_9, VAR_7->req, VAR_7->resp, VAR_8);

 if (VAR_11)
  goto failed_send;

 FUNC_2(VAR_9->qtcb->bottom.support.d_id, VAR_6);
 VAR_9->handler = VAR_4;
 VAR_7->d_id = VAR_6;
 VAR_9->data = VAR_7;

 FUNC_6("fssels1", VAR_9, VAR_6);

 VAR_11 = FUNC_9(VAR_9);
 if (VAR_11)
  goto failed_send;


 goto out;

failed_send:
 FUNC_8(VAR_9);
out:
 FUNC_4(&VAR_10->req_q_lock);
 return VAR_11;
}
