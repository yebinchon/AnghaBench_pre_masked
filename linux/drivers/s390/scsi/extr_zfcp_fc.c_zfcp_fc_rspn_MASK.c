
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct zfcp_fsf_ct_els {int * resp; int * req; int * handler_data; int handler; } ;
struct TYPE_8__ {int fp_fid; } ;
struct TYPE_9__ {int fr_name_len; int fr_name; TYPE_3__ fr_fid; } ;
struct zfcp_fc_rspn_req {TYPE_4__ rspn; int ct_hdr; } ;
struct TYPE_6__ {struct zfcp_fc_rspn_req rsp; struct zfcp_fc_rspn_req req; } ;
struct TYPE_7__ {TYPE_1__ rspn; } ;
struct zfcp_fc_req {int sg_rsp; int sg_req; TYPE_2__ u; struct zfcp_fsf_ct_els ct_els; } ;
struct zfcp_adapter {TYPE_5__* gs; struct Scsi_Host* scsi_host; } ;
struct fc_ct_hdr {TYPE_4__ rspn; int ct_hdr; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_10__ {int ds; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,struct zfcp_fc_rspn_req*,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,struct zfcp_fsf_ct_els*,int *,int ) ;

__attribute__((used)) static void FUNC_9(struct zfcp_adapter *VAR_5,
    struct zfcp_fc_req *VAR_6)
{
 FUNC_0(VAR_3);
 struct Scsi_Host *VAR_7 = VAR_5->scsi_host;
 struct zfcp_fsf_ct_els *VAR_8 = &VAR_6->ct_els;
 struct zfcp_fc_rspn_req *VAR_9 = &VAR_6->u.rspn.req;
 struct fc_ct_hdr *VAR_10 = &VAR_6->u.rspn.rsp;
 int VAR_11, VAR_12;

 FUNC_7(&VAR_9->ct_hdr, VAR_0,
      VAR_1);
 FUNC_3(VAR_9->rspn.fr_fid.fp_fid, FUNC_1(VAR_7));
 VAR_12 = FUNC_5(VAR_9->rspn.fr_name, FUNC_2(VAR_7),
        VAR_1);
 VAR_9->rspn.fr_name_len = VAR_12;

 FUNC_4(&VAR_6->sg_req, VAR_9, sizeof(*VAR_9));
 FUNC_4(&VAR_6->sg_rsp, VAR_10, sizeof(*VAR_10));

 VAR_8->handler = VAR_4;
 VAR_8->handler_data = &VAR_3;
 VAR_8->req = &VAR_6->sg_req;
 VAR_8->resp = &VAR_6->sg_rsp;

 VAR_11 = FUNC_8(&VAR_5->gs->ds, VAR_8, ((void*)0),
          VAR_2);
 if (!VAR_11)
  FUNC_6(&VAR_3);
}
