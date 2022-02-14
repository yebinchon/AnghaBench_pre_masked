
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct qed_vf_info {int b_malicious; int state; int abs_vf_id; scalar_t__ concrete_fid; int num_sbs; scalar_t__ to_disable; } ;
struct qed_ptt {int dummy; } ;
struct TYPE_2__ {scalar_t__ concrete_fid; int hw_mode; } ;
struct qed_hwfn {TYPE_1__ hw_info; int rel_pf_id; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct qed_hwfn*,struct qed_vf_info*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct qed_hwfn*,int ,int ) ;
 int VAR_5 ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*,int ) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_ptt*,int ,int ,int ) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_ptt*,int ,int ) ;
 int FUNC_7 (struct qed_hwfn*,struct qed_ptt*,struct qed_vf_info*) ;
 int FUNC_8 (struct qed_hwfn*,struct qed_ptt*,int ) ;

__attribute__((used)) static int FUNC_9(struct qed_hwfn *VAR_6,
        struct qed_ptt *VAR_7,
        struct qed_vf_info *VAR_8)
{
 u32 VAR_9 = VAR_1;
 int VAR_10;




 VAR_8->b_malicious = 0;

 if (VAR_8->to_disable)
  return 0;

 FUNC_0(VAR_6,
     VAR_4,
     "Enable internal access for vf %x [abs %x]\n",
     VAR_8->abs_vf_id, FUNC_1(VAR_6, VAR_8));

 FUNC_8(VAR_6, VAR_7, FUNC_1(VAR_6, VAR_8));

 FUNC_7(VAR_6, VAR_7, VAR_8);

 VAR_10 = FUNC_6(VAR_6, VAR_7,
        VAR_8->abs_vf_id, VAR_8->num_sbs);
 if (VAR_10)
  return VAR_10;

 FUNC_4(VAR_6, VAR_7, (u16) VAR_8->concrete_fid);

 FUNC_2(VAR_9, VAR_2, VAR_6->rel_pf_id);
 FUNC_3(VAR_6, VAR_0, VAR_9);

 FUNC_5(VAR_6, VAR_7, VAR_3, VAR_8->abs_vf_id,
       VAR_6->hw_info.hw_mode);


 FUNC_4(VAR_6, VAR_7, (u16) VAR_6->hw_info.concrete_fid);

 VAR_8->state = VAR_5;

 return VAR_10;
}
