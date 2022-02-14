
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct zfcp_fsf_ct_els {int * resp; int * req; int * handler_data; int handler; } ;
struct TYPE_7__ {int fn_fc4_type; } ;
struct zfcp_fc_gpn_ft_req {TYPE_3__ gpn_ft; int ct_hdr; } ;
struct TYPE_5__ {struct zfcp_fc_gpn_ft_req req; } ;
struct TYPE_6__ {TYPE_1__ gpn_ft; } ;
struct zfcp_fc_req {int sg_rsp; int sg_req; TYPE_2__ u; struct zfcp_fsf_ct_els ct_els; } ;
struct zfcp_adapter {TYPE_4__* gs; } ;
struct TYPE_8__ {int ds; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,struct zfcp_fsf_ct_els*,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct zfcp_fc_req *VAR_5,
          struct zfcp_adapter *VAR_6, int VAR_7)
{
 struct zfcp_fsf_ct_els *VAR_8 = &VAR_5->ct_els;
 struct zfcp_fc_gpn_ft_req *VAR_9 = &VAR_5->u.gpn_ft.req;
 FUNC_0(VAR_3);
 int VAR_10;

 FUNC_2(&VAR_9->ct_hdr, VAR_0, VAR_7);
 VAR_9->gpn_ft.fn_fc4_type = VAR_1;

 VAR_8->handler = VAR_4;
 VAR_8->handler_data = &VAR_3;
 VAR_8->req = &VAR_5->sg_req;
 VAR_8->resp = &VAR_5->sg_rsp;

 VAR_10 = FUNC_3(&VAR_6->gs->ds, VAR_8, ((void*)0),
          VAR_2);
 if (!VAR_10)
  FUNC_1(&VAR_3);
 return VAR_10;
}
