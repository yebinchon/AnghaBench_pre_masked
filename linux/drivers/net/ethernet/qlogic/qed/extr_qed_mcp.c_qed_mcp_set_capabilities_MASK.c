
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qed_hwfn*,struct qed_ptt*,int ,int,int*,int*) ;

int FUNC_1(struct qed_hwfn *VAR_3, struct qed_ptt *VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7;

 VAR_7 = VAR_1 |
     VAR_0;

 return FUNC_0(VAR_3, VAR_4, VAR_2,
      VAR_7, &VAR_5, &VAR_6);
}
