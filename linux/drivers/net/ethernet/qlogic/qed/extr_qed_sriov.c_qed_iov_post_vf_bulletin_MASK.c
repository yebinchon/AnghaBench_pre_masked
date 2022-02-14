
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int size; int phys; struct qed_bulletin_content* p_virt; } ;
struct qed_vf_info {TYPE_1__ bulletin; int vf_bulletin; int abs_vf_id; int relative_vf_id; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct qed_dmae_params {int dst_vfid; int flags; } ;
struct qed_bulletin_content {int crc; int version; } ;
typedef int params ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (struct qed_dmae_params*,int ,int) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int ,int ,int,struct qed_dmae_params*) ;
 struct qed_vf_info* FUNC_4 (struct qed_hwfn*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct qed_hwfn *VAR_3,
        int VAR_4, struct qed_ptt *VAR_5)
{
 struct qed_bulletin_content *VAR_6;
 int VAR_7 = sizeof(VAR_6->crc);
 struct qed_dmae_params VAR_8;
 struct qed_vf_info *VAR_9;

 VAR_9 = FUNC_4(VAR_3, (u16) VAR_4, 1);
 if (!VAR_9)
  return -VAR_0;

 if (!VAR_9->vf_bulletin)
  return -VAR_0;

 VAR_6 = VAR_9->bulletin.p_virt;


 VAR_6->version++;
 VAR_6->crc = FUNC_1(0, (u8 *)VAR_6 + VAR_7,
    VAR_9->bulletin.size - VAR_7);

 FUNC_0(VAR_3, VAR_2,
     "Posting Bulletin 0x%08x to VF[%d] (CRC 0x%08x)\n",
     VAR_6->version, VAR_9->relative_vf_id, VAR_6->crc);


 FUNC_2(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.flags = VAR_1;
 VAR_8.dst_vfid = VAR_9->abs_vf_id;
 return FUNC_3(VAR_3, VAR_5, VAR_9->bulletin.phys,
      VAR_9->vf_bulletin, VAR_9->bulletin.size / 4,
      &VAR_8);
}
