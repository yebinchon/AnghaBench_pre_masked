
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_vf_info {int num_sbs; int opaque_fid; int * igu_sbs; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct pfvf_def_resp_tlv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qed_hwfn*,struct qed_ptt*,int ,int ,int) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,struct qed_vf_info*,int ,int,int ) ;

__attribute__((used)) static void FUNC_2(struct qed_hwfn *VAR_2,
           struct qed_ptt *VAR_3,
           struct qed_vf_info *VAR_4)
{
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_4->num_sbs; VAR_5++)
  FUNC_0(VAR_2, VAR_3,
      VAR_4->igu_sbs[VAR_5],
      VAR_4->opaque_fid, 0);

 FUNC_1(VAR_2, VAR_3, VAR_4, VAR_0,
        sizeof(struct pfvf_def_resp_tlv),
        VAR_1);
}
