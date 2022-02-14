
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct zfcp_fc_wka_port {int dummy; } ;
struct zfcp_adapter {TYPE_3__* gs; } ;
struct fc_rport {int dummy; } ;
struct TYPE_4__ {int preamble_word1; } ;
struct TYPE_5__ {TYPE_1__ r_ct; } ;
struct fc_bsg_request {TYPE_2__ rqst_data; } ;
struct bsg_job {struct fc_bsg_request* request; } ;
struct Scsi_Host {scalar_t__* hostdata; } ;
struct TYPE_6__ {struct zfcp_fc_wka_port ds; struct zfcp_fc_wka_port ts; struct zfcp_fc_wka_port ms; struct zfcp_fc_wka_port as; } ;






 struct fc_rport* FUNC_0 (struct bsg_job*) ;
 struct Scsi_Host* FUNC_1 (struct bsg_job*) ;
 struct Scsi_Host* FUNC_2 (struct fc_rport*) ;

__attribute__((used)) static struct zfcp_fc_wka_port *FUNC_3(struct bsg_job *VAR_0)
{
 u32 VAR_1;
 u8 VAR_2;
 struct zfcp_adapter *VAR_3;
 struct fc_bsg_request *VAR_4 = VAR_0->request;
 struct fc_rport *VAR_5 = FUNC_0(VAR_0);
 struct Scsi_Host *VAR_6;

 VAR_1 = VAR_4->rqst_data.r_ct.preamble_word1;
 VAR_2 = (VAR_1 & 0xff000000) >> 24;

 VAR_6 = VAR_5 ? FUNC_2(VAR_5) : FUNC_1(VAR_0);
 VAR_3 = (struct zfcp_adapter *) VAR_6->hostdata[0];

 switch (VAR_2) {
 case 131:
  return &VAR_3->gs->as;
 case 129:
  return &VAR_3->gs->ms;
 case 128:
  return &VAR_3->gs->ts;
  break;
 case 130:
  return &VAR_3->gs->ds;
  break;
 default:
  return ((void*)0);
 }
}
