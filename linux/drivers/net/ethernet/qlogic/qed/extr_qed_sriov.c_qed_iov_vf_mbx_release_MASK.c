
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct qed_vf_info {scalar_t__ state; int opaque_fid; int concrete_fid; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct pfvf_def_resp_tlv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct qed_hwfn*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,struct qed_vf_info*,int ,int,int ) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_vf_info*) ;
 int FUNC_3 (struct qed_hwfn*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct qed_hwfn *VAR_5,
       struct qed_ptt *VAR_6,
       struct qed_vf_info *VAR_7)
{
 u16 VAR_8 = sizeof(struct pfvf_def_resp_tlv);
 u8 VAR_9 = VAR_2;
 int VAR_10 = 0;

 FUNC_2(VAR_5, VAR_7);

 if (VAR_7->state != VAR_4 && VAR_7->state != VAR_3) {

  VAR_10 = FUNC_3(VAR_5, VAR_7->concrete_fid,
        VAR_7->opaque_fid);

  if (VAR_10) {
   FUNC_0(VAR_5, "qed_sp_vf_stop returned error %d\n",
          VAR_10);
   VAR_9 = VAR_1;
  }

  VAR_7->state = VAR_4;
 }

 FUNC_1(VAR_5, VAR_6, VAR_7, VAR_0,
        VAR_8, VAR_9);
}
