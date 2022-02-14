
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct fc_rport_priv {int kref; int e_d_tov; } ;
struct fc_rport {int port_id; struct fc_rport_priv* dd_data; } ;
struct fc_lport {int lp_mutex; int e_d_tov; struct fc_rport_priv* dns_rdata; } ;
struct TYPE_5__ {int port_id; } ;
struct TYPE_4__ {int port_id; } ;
struct TYPE_6__ {TYPE_2__ h_els; TYPE_1__ h_ct; } ;
struct fc_bsg_request {int msgcode; TYPE_3__ rqst_data; } ;
struct fc_bsg_reply {scalar_t__ reply_payload_rcv_len; } ;
struct bsg_job {struct fc_bsg_reply* reply; struct fc_bsg_request* request; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;




 int VAR_1 ;
 struct fc_rport* FUNC_0 (struct bsg_job*) ;
 struct Scsi_Host* FUNC_1 (struct bsg_job*) ;
 int FUNC_2 (struct bsg_job*,struct fc_lport*,int ,int ) ;
 int FUNC_3 (struct bsg_job*,struct fc_lport*,int ,int ) ;
 int VAR_2 ;
 struct fc_rport_priv* FUNC_4 (struct fc_lport*,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 struct fc_lport* FUNC_9 (struct Scsi_Host*) ;

int FUNC_10(struct bsg_job *VAR_3)
{
 struct fc_bsg_request *VAR_4 = VAR_3->request;
 struct fc_bsg_reply *VAR_5 = VAR_3->reply;
 struct Scsi_Host *VAR_6 = FUNC_1(VAR_3);
 struct fc_lport *VAR_7 = FUNC_9(VAR_6);
 struct fc_rport *VAR_8;
 struct fc_rport_priv *VAR_9;
 int VAR_10 = -VAR_0;
 u32 VAR_11, VAR_12;

 VAR_5->reply_payload_rcv_len = 0;

 FUNC_6(&VAR_7->lp_mutex);

 switch (VAR_4->msgcode) {
 case 128:
  VAR_8 = FUNC_0(VAR_3);
  if (!VAR_8)
   break;

  VAR_9 = VAR_8->dd_data;
  VAR_10 = FUNC_3(VAR_3, VAR_7, VAR_8->port_id,
       VAR_9->e_d_tov);
  break;

 case 129:
  VAR_8 = FUNC_0(VAR_3);
  if (!VAR_8)
   break;

  VAR_9 = VAR_8->dd_data;
  VAR_10 = FUNC_2(VAR_3, VAR_7, VAR_8->port_id,
      VAR_9->e_d_tov);
  break;

 case 131:
  VAR_11 = FUNC_8(VAR_4->rqst_data.h_ct.port_id);
  if (VAR_11 == VAR_1) {
   VAR_9 = VAR_7->dns_rdata;
   if (!VAR_9)
    break;
   VAR_12 = VAR_9->e_d_tov;
  } else {
   VAR_9 = FUNC_4(VAR_7, VAR_11);
   if (!VAR_9)
    break;
   VAR_12 = VAR_9->e_d_tov;
   FUNC_5(&VAR_9->kref, VAR_2);
  }

  VAR_10 = FUNC_2(VAR_3, VAR_7, VAR_11, VAR_12);
  break;

 case 130:
  VAR_11 = FUNC_8(VAR_4->rqst_data.h_els.port_id);
  VAR_10 = FUNC_3(VAR_3, VAR_7, VAR_11, VAR_7->e_d_tov);
  break;
 }

 FUNC_7(&VAR_7->lp_mutex);
 return VAR_10;
}
