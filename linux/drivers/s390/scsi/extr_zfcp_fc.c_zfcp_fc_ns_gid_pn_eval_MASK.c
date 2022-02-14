
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct zfcp_fsf_ct_els {TYPE_4__* port; scalar_t__ status; } ;
struct TYPE_10__ {int fp_fid; } ;
struct TYPE_8__ {scalar_t__ ct_cmd; } ;
struct zfcp_fc_gid_pn_rsp {TYPE_5__ gid_pn; TYPE_3__ ct_hdr; } ;
struct TYPE_6__ {struct zfcp_fc_gid_pn_rsp rsp; } ;
struct TYPE_7__ {TYPE_1__ gid_pn; } ;
struct zfcp_fc_req {TYPE_2__ u; struct zfcp_fsf_ct_els ct_els; } ;
struct TYPE_9__ {int d_id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct zfcp_fc_req *VAR_1)
{
 struct zfcp_fsf_ct_els *VAR_2 = &VAR_1->ct_els;
 struct zfcp_fc_gid_pn_rsp *VAR_3 = &VAR_1->u.gid_pn.rsp;

 if (VAR_2->status)
  return;
 if (VAR_3->ct_hdr.ct_cmd != FUNC_0(VAR_0))
  return;


 VAR_2->port->d_id = FUNC_1(VAR_3->gid_pn.fp_fid);
}
