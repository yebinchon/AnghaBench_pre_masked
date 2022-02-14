
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct zfcp_qdio {int req_q_lock; } ;
struct zfcp_fsf_req {struct zfcp_fsf_ct_els* data; TYPE_3__* qtcb; int handler; int status; } ;
struct zfcp_fsf_ct_els {int d_id; int resp; int req; } ;
struct zfcp_fc_wka_port {int d_id; int handle; TYPE_1__* adapter; } ;
typedef int mempool_t ;
struct TYPE_5__ {int port_handle; } ;
struct TYPE_6__ {TYPE_2__ header; } ;
struct TYPE_4__ {struct zfcp_qdio* qdio; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct zfcp_fsf_req*) ;
 int FUNC_1 (struct zfcp_fsf_req*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,struct zfcp_fsf_req*,int ) ;
 struct zfcp_fsf_req* FUNC_5 (struct zfcp_qdio*,int ,int ,int *) ;
 int FUNC_6 (struct zfcp_fsf_req*) ;
 int FUNC_7 (struct zfcp_fsf_req*) ;
 int VAR_4 ;
 int FUNC_8 (struct zfcp_fsf_req*,int ,int ,unsigned int) ;
 scalar_t__ FUNC_9 (struct zfcp_qdio*) ;

int FUNC_10(struct zfcp_fc_wka_port *VAR_5,
       struct zfcp_fsf_ct_els *VAR_6, mempool_t *VAR_7,
       unsigned int VAR_8)
{
 struct zfcp_qdio *VAR_9 = VAR_5->adapter->qdio;
 struct zfcp_fsf_req *VAR_10;
 int VAR_11 = -VAR_0;

 FUNC_2(&VAR_9->req_q_lock);
 if (FUNC_9(VAR_9))
  goto out;

 VAR_10 = FUNC_5(VAR_9, VAR_1,
      VAR_2, VAR_7);

 if (FUNC_0(VAR_10)) {
  VAR_11 = FUNC_1(VAR_10);
  goto out;
 }

 VAR_10->status |= VAR_3;
 VAR_11 = FUNC_8(VAR_10, VAR_6->req, VAR_6->resp, VAR_8);
 if (VAR_11)
  goto failed_send;

 VAR_10->handler = VAR_4;
 VAR_10->qtcb->header.port_handle = VAR_5->handle;
 VAR_6->d_id = VAR_5->d_id;
 VAR_10->data = VAR_6;

 FUNC_4("fssct_1", VAR_10, VAR_5->d_id);

 VAR_11 = FUNC_7(VAR_10);
 if (VAR_11)
  goto failed_send;


 goto out;

failed_send:
 FUNC_6(VAR_10);
out:
 FUNC_3(&VAR_9->req_q_lock);
 return VAR_11;
}
