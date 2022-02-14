
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qed_hwfn*,struct qed_ptt*,int ) ;

__attribute__((used)) static u32 FUNC_1(struct qed_hwfn *VAR_1,
      struct qed_ptt *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_1, VAR_2, VAR_0);

 if (VAR_3)
  return VAR_3 + 11;
 return 0;
}
