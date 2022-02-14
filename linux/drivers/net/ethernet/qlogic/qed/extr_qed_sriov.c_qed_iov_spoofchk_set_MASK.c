
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct qed_vf_info {int req_spoofchk_val; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct qed_hwfn*,struct qed_vf_info*,int) ;
 struct qed_vf_info* FUNC_2 (struct qed_hwfn*,int ,int) ;
 int FUNC_3 (struct qed_hwfn*,int) ;
 int FUNC_4 (struct qed_hwfn*,int) ;

__attribute__((used)) static int FUNC_5(struct qed_hwfn *VAR_1, int VAR_2, bool VAR_3)
{
 struct qed_vf_info *VAR_4;
 int VAR_5 = -VAR_0;

 if (!FUNC_3(VAR_1, VAR_2)) {
  FUNC_0(VAR_1,
     "SR-IOV sanity check failed, can't set spoofchk\n");
  goto out;
 }

 VAR_4 = FUNC_2(VAR_1, (u16) VAR_2, 1);
 if (!VAR_4)
  goto out;

 if (!FUNC_4(VAR_1, VAR_2)) {

  VAR_4->req_spoofchk_val = VAR_3;
  VAR_5 = 0;
  goto out;
 }

 VAR_5 = FUNC_1(VAR_1, VAR_4, VAR_3);

out:
 return VAR_5;
}
