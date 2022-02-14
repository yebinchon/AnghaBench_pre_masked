
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct zfcp_qdio {int req_q_lock; TYPE_3__* adapter; } ;
struct zfcp_fsf_req {unsigned long req_id; TYPE_5__* qtcb; struct zfcp_fc_wka_port* data; int handler; int qdio_req; int status; } ;
struct zfcp_fc_wka_port {int handle; TYPE_1__* adapter; } ;
struct TYPE_9__ {int port_handle; } ;
struct TYPE_10__ {TYPE_4__ header; } ;
struct TYPE_7__ {int erp_req; } ;
struct TYPE_8__ {TYPE_2__ pool; } ;
struct TYPE_6__ {struct zfcp_qdio* qdio; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct zfcp_fsf_req*) ;
 int FUNC_1 (struct zfcp_fsf_req*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,struct zfcp_fc_wka_port*,unsigned long) ;
 int VAR_5 ;
 struct zfcp_fsf_req* FUNC_5 (struct zfcp_qdio*,int ,int ,int ) ;
 int FUNC_6 (struct zfcp_fsf_req*) ;
 int FUNC_7 (struct zfcp_fsf_req*) ;
 int FUNC_8 (struct zfcp_fsf_req*,int ) ;
 scalar_t__ FUNC_9 (struct zfcp_qdio*) ;
 int FUNC_10 (struct zfcp_qdio*,int *) ;

int FUNC_11(struct zfcp_fc_wka_port *VAR_6)
{
 struct zfcp_qdio *VAR_7 = VAR_6->adapter->qdio;
 struct zfcp_fsf_req *VAR_8;
 unsigned long VAR_9 = 0;
 int VAR_10 = -VAR_0;

 FUNC_2(&VAR_7->req_q_lock);
 if (FUNC_9(VAR_7))
  goto out;

 VAR_8 = FUNC_5(VAR_7, VAR_1,
      VAR_2,
      VAR_7->adapter->pool.erp_req);

 if (FUNC_0(VAR_8)) {
  VAR_10 = FUNC_1(VAR_8);
  goto out;
 }

 VAR_8->status |= VAR_4;
 FUNC_10(VAR_7, &VAR_8->qdio_req);

 VAR_8->handler = VAR_5;
 VAR_8->data = VAR_6;
 VAR_8->qtcb->header.port_handle = VAR_6->handle;

 VAR_9 = VAR_8->req_id;

 FUNC_8(VAR_8, VAR_3);
 VAR_10 = FUNC_7(VAR_8);
 if (VAR_10)
  FUNC_6(VAR_8);

out:
 FUNC_3(&VAR_7->req_q_lock);
 if (!VAR_10)
  FUNC_4("fscwp_1", VAR_6, VAR_9);
 return VAR_10;
}
