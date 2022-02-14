
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


struct zfcp_port {int wwpn; struct zfcp_adapter* adapter; } ;
struct TYPE_12__ {int * resp; int * req; int * handler_data; int handler; struct zfcp_port* port; } ;
struct TYPE_9__ {int fn_wwpn; } ;
struct zfcp_fc_gid_pn_rsp {TYPE_3__ gid_pn; int ct_hdr; } ;
struct TYPE_7__ {struct zfcp_fc_gid_pn_rsp rsp; struct zfcp_fc_gid_pn_rsp req; } ;
struct TYPE_8__ {TYPE_1__ gid_pn; } ;
struct zfcp_fc_req {TYPE_6__ ct_els; int sg_rsp; int sg_req; TYPE_2__ u; } ;
struct zfcp_fc_gid_pn_req {TYPE_3__ gid_pn; int ct_hdr; } ;
struct TYPE_11__ {int gid_pn_req; } ;
struct zfcp_adapter {TYPE_5__ pool; TYPE_4__* gs; } ;
struct TYPE_10__ {int ds; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct zfcp_fc_gid_pn_rsp*,int) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (struct zfcp_fc_req*) ;
 int FUNC_6 (int *,TYPE_6__*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct zfcp_port *VAR_5,
         struct zfcp_fc_req *VAR_6)
{
 struct zfcp_adapter *VAR_7 = VAR_5->adapter;
 FUNC_0(VAR_3);
 struct zfcp_fc_gid_pn_req *VAR_8 = &VAR_6->u.gid_pn.req;
 struct zfcp_fc_gid_pn_rsp *VAR_9 = &VAR_6->u.gid_pn.rsp;
 int VAR_10;


 VAR_6->ct_els.port = VAR_5;
 VAR_6->ct_els.handler = VAR_4;
 VAR_6->ct_els.handler_data = &VAR_3;
 VAR_6->ct_els.req = &VAR_6->sg_req;
 VAR_6->ct_els.resp = &VAR_6->sg_rsp;
 FUNC_2(&VAR_6->sg_req, VAR_8, sizeof(*VAR_8));
 FUNC_2(&VAR_6->sg_rsp, VAR_9, sizeof(*VAR_9));

 FUNC_4(&VAR_8->ct_hdr,
      VAR_0, VAR_2);
 VAR_8->gid_pn.fn_wwpn = FUNC_1(VAR_5->wwpn);

 VAR_10 = FUNC_6(&VAR_7->gs->ds, &VAR_6->ct_els,
          VAR_7->pool.gid_pn_req,
          VAR_1);
 if (!VAR_10) {
  FUNC_3(&VAR_3);
  FUNC_5(VAR_6);
 }
 return VAR_10;
}
