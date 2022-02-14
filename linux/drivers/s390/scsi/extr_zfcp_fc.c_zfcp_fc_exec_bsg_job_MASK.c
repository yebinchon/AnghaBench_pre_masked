
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zfcp_fsf_ct_els {struct bsg_job* handler_data; int resp; int req; } ;
struct zfcp_adapter {int status; } ;
struct fc_rport {int dummy; } ;
struct fc_bsg_request {int msgcode; } ;
struct TYPE_4__ {int sg_list; } ;
struct TYPE_3__ {int sg_list; } ;
struct bsg_job {TYPE_2__ reply_payload; TYPE_1__ request_payload; struct fc_bsg_request* request; struct zfcp_fsf_ct_els* dd_data; } ;
struct Scsi_Host {scalar_t__* hostdata; } ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct fc_rport* FUNC_1 (struct bsg_job*) ;
 struct Scsi_Host* FUNC_2 (struct bsg_job*) ;
 struct Scsi_Host* FUNC_3 (struct fc_rport*) ;
 int FUNC_4 (struct bsg_job*,struct zfcp_adapter*) ;
 int FUNC_5 (struct bsg_job*,struct zfcp_adapter*) ;

int FUNC_6(struct bsg_job *VAR_2)
{
 struct Scsi_Host *VAR_3;
 struct zfcp_adapter *VAR_4;
 struct zfcp_fsf_ct_els *VAR_5 = VAR_2->dd_data;
 struct fc_bsg_request *VAR_6 = VAR_2->request;
 struct fc_rport *VAR_7 = FUNC_1(VAR_2);

 VAR_3 = VAR_7 ? FUNC_3(VAR_7) : FUNC_2(VAR_2);
 VAR_4 = (struct zfcp_adapter *)VAR_3->hostdata[0];

 if (!(FUNC_0(&VAR_4->status) & VAR_1))
  return -VAR_0;

 VAR_5->req = VAR_2->request_payload.sg_list;
 VAR_5->resp = VAR_2->reply_payload.sg_list;
 VAR_5->handler_data = VAR_2;

 switch (VAR_6->msgcode) {
 case 128:
 case 130:
  return FUNC_5(VAR_2, VAR_4);
 case 129:
 case 131:
  return FUNC_4(VAR_2, VAR_4);
 default:
  return -VAR_0;
 }
}
