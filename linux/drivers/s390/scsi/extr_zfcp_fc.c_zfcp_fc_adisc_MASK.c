
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct zfcp_port {int d_id; struct zfcp_adapter* adapter; } ;
struct TYPE_7__ {struct zfcp_fc_req* handler_data; int handler; int * resp; int * req; struct zfcp_port* port; } ;
struct TYPE_8__ {int adisc_port_id; int adisc_cmd; void* adisc_wwnn; void* adisc_wwpn; } ;
struct TYPE_5__ {TYPE_4__ req; TYPE_4__ rsp; } ;
struct TYPE_6__ {TYPE_1__ adisc; } ;
struct zfcp_fc_req {TYPE_3__ ct_els; TYPE_2__ u; int sg_rsp; int sg_req; } ;
struct zfcp_adapter {struct Scsi_Host* scsi_host; } ;
struct fc_els_adisc {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (struct Scsi_Host*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,struct zfcp_fc_req*) ;
 struct zfcp_fc_req* FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,TYPE_4__*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (struct zfcp_adapter*,int ,TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_9(struct zfcp_port *VAR_6)
{
 struct zfcp_fc_req *VAR_7;
 struct zfcp_adapter *VAR_8 = VAR_6->adapter;
 struct Scsi_Host *VAR_9 = VAR_8->scsi_host;
 int VAR_10;

 VAR_7 = FUNC_6(VAR_5, VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->ct_els.port = VAR_6;
 VAR_7->ct_els.req = &VAR_7->sg_req;
 VAR_7->ct_els.resp = &VAR_7->sg_rsp;
 FUNC_7(&VAR_7->sg_req, &VAR_7->u.adisc.req,
      sizeof(struct fc_els_adisc));
 FUNC_7(&VAR_7->sg_rsp, &VAR_7->u.adisc.rsp,
      sizeof(struct fc_els_adisc));

 VAR_7->ct_els.handler = VAR_4;
 VAR_7->ct_els.handler_data = VAR_7;



 VAR_7->u.adisc.req.adisc_wwpn = FUNC_0(FUNC_3(VAR_9));
 VAR_7->u.adisc.req.adisc_wwnn = FUNC_0(FUNC_1(VAR_9));
 VAR_7->u.adisc.req.adisc_cmd = VAR_0;
 FUNC_4(VAR_7->u.adisc.req.adisc_port_id, FUNC_2(VAR_9));

 VAR_10 = FUNC_8(VAR_8, VAR_6->d_id, &VAR_7->ct_els,
    VAR_3);
 if (VAR_10)
  FUNC_5(VAR_5, VAR_7);

 return VAR_10;
}
