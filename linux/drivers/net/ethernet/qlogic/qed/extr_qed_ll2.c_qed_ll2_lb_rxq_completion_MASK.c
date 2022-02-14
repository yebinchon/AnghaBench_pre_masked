
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_ll2_info {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_ll2_info*) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ll2_info*) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ll2_info*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ll2_info*) ;

__attribute__((used)) static int FUNC_4(struct qed_hwfn *VAR_0, void *VAR_1)
{
 struct qed_ll2_info *VAR_2 = (struct qed_ll2_info *)VAR_1;
 int VAR_3;

 if (!FUNC_0(VAR_2))
  return 0;

 VAR_3 = FUNC_1(VAR_0, VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_2(VAR_0, VAR_2);
 FUNC_3(VAR_0, VAR_2);

 return 0;
}
