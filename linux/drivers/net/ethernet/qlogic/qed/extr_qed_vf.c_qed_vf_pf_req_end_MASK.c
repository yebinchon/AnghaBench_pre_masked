
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int status; } ;
struct TYPE_5__ {TYPE_1__ hdr; } ;
union pfvf_tlvs {TYPE_2__ default_resp; } ;
struct qed_hwfn {TYPE_3__* vf_iov_info; } ;
struct TYPE_6__ {int mutex; union pfvf_tlvs* pf2vf_reply; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct qed_hwfn *VAR_1, int VAR_2)
{
 union pfvf_tlvs *VAR_3 = VAR_1->vf_iov_info->pf2vf_reply;

 FUNC_0(VAR_1, VAR_0,
     "VF request status = 0x%x, PF reply status = 0x%x\n",
     VAR_2, VAR_3->default_resp.hdr.status);

 FUNC_1(&(VAR_1->vf_iov_info->mutex));
}
