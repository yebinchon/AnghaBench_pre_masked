
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct qed_vf_info {int dummy; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct pfvf_def_resp_tlv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qed_hwfn*,struct qed_ptt*,struct qed_vf_info*,int ) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,struct qed_vf_info*,int ,int,int ) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,struct qed_vf_info*,int ) ;

__attribute__((used)) static void FUNC_3(struct qed_hwfn *VAR_2,
     struct qed_ptt *VAR_3, struct qed_vf_info *VAR_4)
{
 u16 VAR_5 = sizeof(struct pfvf_def_resp_tlv);
 u8 VAR_6 = VAR_1;


 FUNC_2(VAR_2, VAR_3, VAR_4, 0);


 FUNC_0(VAR_2, VAR_3, VAR_4, 0);

 FUNC_1(VAR_2, VAR_3, VAR_4, VAR_0,
        VAR_5, VAR_6);
}
