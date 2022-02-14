
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


struct zfcp_fsf_ct_els {int status; int * resp; int * req; int * handler_data; int handler; } ;
struct TYPE_11__ {char* fp_name; int fp_fid; } ;
struct zfcp_fc_gspn_rsp {TYPE_5__ gspn; int ct_hdr; } ;
struct TYPE_7__ {struct zfcp_fc_gspn_rsp rsp; struct zfcp_fc_gspn_rsp req; } ;
struct TYPE_8__ {TYPE_1__ gspn; } ;
struct zfcp_fc_req {int sg_rsp; int sg_req; TYPE_2__ u; struct zfcp_fsf_ct_els ct_els; } ;
struct zfcp_fc_gspn_req {TYPE_5__ gspn; int ct_hdr; } ;
struct zfcp_adapter {int scsi_host; TYPE_4__* ccw_device; TYPE_3__* gs; } ;
struct TYPE_12__ {int nodename; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_9__ {int ds; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 TYPE_6__* FUNC_6 () ;
 int FUNC_7 (int *,struct zfcp_fc_gspn_rsp*,int) ;
 int FUNC_8 (int ,int ,char*,char*,char*,char*,int ) ;
 int FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (int *) ;
 int VAR_5 ;
 int FUNC_12 (int *,int ,int ) ;
 int FUNC_13 (int *,struct zfcp_fsf_ct_els*,int *,int ) ;

__attribute__((used)) static int FUNC_14(struct zfcp_adapter *VAR_6,
   struct zfcp_fc_req *VAR_7)
{
 FUNC_0(VAR_4);
 char VAR_8[] = "DEVNO:";
 struct zfcp_fsf_ct_els *VAR_9 = &VAR_7->ct_els;
 struct zfcp_fc_gspn_req *VAR_10 = &VAR_7->u.gspn.req;
 struct zfcp_fc_gspn_rsp *VAR_11 = &VAR_7->u.gspn.rsp;
 int VAR_12;

 FUNC_12(&VAR_10->ct_hdr, VAR_0,
      VAR_2);
 FUNC_5(VAR_10->gspn.fp_fid, FUNC_2(VAR_6->scsi_host));

 FUNC_7(&VAR_7->sg_req, VAR_10, sizeof(*VAR_10));
 FUNC_7(&VAR_7->sg_rsp, VAR_11, sizeof(*VAR_11));

 VAR_9->handler = VAR_5;
 VAR_9->handler_data = &VAR_4;
 VAR_9->req = &VAR_7->sg_req;
 VAR_9->resp = &VAR_7->sg_rsp;

 VAR_12 = FUNC_13(&VAR_6->gs->ds, VAR_9, ((void*)0),
          VAR_3);
 if (VAR_12)
  return VAR_12;

 FUNC_11(&VAR_4);
 if (VAR_9->status)
  return VAR_9->status;

 if (FUNC_3(VAR_6->scsi_host) == VAR_1 &&
     !(FUNC_10(VAR_11->gspn.fp_name, VAR_8)))
  FUNC_8(FUNC_4(VAR_6->scsi_host),
    VAR_2, "%s%s %s NAME: %s",
    VAR_11->gspn.fp_name, VAR_8,
    FUNC_1(&VAR_6->ccw_device->dev),
    FUNC_6()->nodename);
 else
  FUNC_9(FUNC_4(VAR_6->scsi_host),
   VAR_11->gspn.fp_name, VAR_2);

 return 0;
}
