
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int ,int,int *,int *) ;

int FUNC_2(struct qed_hwfn *VAR_1, struct qed_ptt *VAR_2)
{
 u32 VAR_3 = 0, VAR_4 = 0;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2,
    VAR_0, 1000, &VAR_3, &VAR_4);


 FUNC_0(1020);

 return VAR_5;
}
