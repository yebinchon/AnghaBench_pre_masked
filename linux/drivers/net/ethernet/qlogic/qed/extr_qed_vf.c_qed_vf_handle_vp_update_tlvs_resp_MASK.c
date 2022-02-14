
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct qed_vf_iov {int pf2vf_reply; } ;
struct qed_sp_vport_update_params {int dummy; } ;
struct qed_hwfn {struct qed_vf_iov* vf_iov_info; } ;
struct TYPE_2__ {scalar_t__ status; } ;
struct pfvf_def_resp_tlv {TYPE_1__ hdr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct qed_hwfn*,int ,char*,scalar_t__,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct qed_hwfn*,int ,scalar_t__) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_sp_vport_update_params*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct qed_hwfn *VAR_3,
      struct qed_sp_vport_update_params *VAR_4)
{
 struct qed_vf_iov *VAR_5 = VAR_3->vf_iov_info;
 struct pfvf_def_resp_tlv *VAR_6;
 u16 VAR_7;

 for (VAR_7 = VAR_0;
      VAR_7 < VAR_1; VAR_7++) {
  if (!FUNC_2(VAR_3, VAR_4, VAR_7))
   continue;

  VAR_6 = (struct pfvf_def_resp_tlv *)
    FUNC_1(VAR_3, VAR_5->pf2vf_reply,
        VAR_7);
  if (VAR_6 && VAR_6->hdr.status)
   FUNC_0(VAR_3, VAR_2,
       "TLV[%d] Configuration %s\n",
       VAR_7,
       (VAR_6 && VAR_6->hdr.status) ? "succeeded"
          : "failed");
 }
}
