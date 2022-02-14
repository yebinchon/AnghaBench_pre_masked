
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct qed_vf_info {int abs_vf_id; scalar_t__ concrete_fid; } ;
struct qed_ptt {int dummy; } ;
struct TYPE_2__ {scalar_t__ concrete_fid; } ;
struct qed_hwfn {TYPE_1__ hw_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct qed_hwfn*,char*,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int ) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int ) ;

__attribute__((used)) static int
FUNC_4(struct qed_hwfn *VAR_2,
    struct qed_vf_info *VAR_3, struct qed_ptt *VAR_4)
{
 int VAR_5;
 u32 VAR_6;

 FUNC_2(VAR_2, VAR_4, (u16) VAR_3->concrete_fid);

 for (VAR_5 = 0; VAR_5 < 50; VAR_5++) {
  VAR_6 = FUNC_3(VAR_2, VAR_4, VAR_0);
  if (!VAR_6)
   break;
  FUNC_1(20);
 }
 FUNC_2(VAR_2, VAR_4, (u16) VAR_2->hw_info.concrete_fid);

 if (VAR_5 == 50) {
  FUNC_0(VAR_2,
         "VF[%d] - dorq failed to cleanup [usage 0x%08x]\n",
         VAR_3->abs_vf_id, VAR_6);
  return -VAR_1;
 }

 return 0;
}
