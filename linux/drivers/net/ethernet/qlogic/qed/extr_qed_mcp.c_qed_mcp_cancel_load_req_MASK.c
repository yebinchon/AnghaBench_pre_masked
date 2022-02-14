
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int ,int ,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct qed_hwfn *VAR_1,
       struct qed_ptt *VAR_2)
{
 u32 VAR_3 = 0, VAR_4 = 0;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_0, 0,
    &VAR_3, &VAR_4);
 if (VAR_5)
  FUNC_0(VAR_1,
     "Failed to send cancel load request, rc = %d\n", VAR_5);

 return VAR_5;
}
