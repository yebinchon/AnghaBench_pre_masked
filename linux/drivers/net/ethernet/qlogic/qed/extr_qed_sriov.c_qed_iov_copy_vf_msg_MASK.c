
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union vfpf_tlvs {int dummy; } vfpf_tlvs ;
typedef int u16 ;
struct TYPE_2__ {int req_phys; int pending_req; } ;
struct qed_vf_info {TYPE_1__ vf_mbx; int abs_vf_id; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct qed_dmae_params {int flags; int src_vfid; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct qed_dmae_params*,int ,int) ;
 scalar_t__ FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int ,int ,int,struct qed_dmae_params*) ;
 struct qed_vf_info* FUNC_3 (struct qed_hwfn*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct qed_hwfn *VAR_5, struct qed_ptt *VAR_6,
          int VAR_7)
{
 struct qed_dmae_params VAR_8;
 struct qed_vf_info *VAR_9;

 VAR_9 = FUNC_3(VAR_5, (u16) VAR_7, 1);
 if (!VAR_9)
  return -VAR_0;

 FUNC_1(&VAR_8, 0, sizeof(struct qed_dmae_params));
 VAR_8.flags = VAR_3 | VAR_2;
 VAR_8.src_vfid = VAR_9->abs_vf_id;

 if (FUNC_2(VAR_5, VAR_6,
          VAR_9->vf_mbx.pending_req,
          VAR_9->vf_mbx.req_phys,
          sizeof(union vfpf_tlvs) / 4, &VAR_8)) {
  FUNC_0(VAR_5, VAR_4,
      "Failed to copy message from VF 0x%02x\n", VAR_7);

  return -VAR_1;
 }

 return 0;
}
