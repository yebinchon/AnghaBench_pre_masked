
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int cdev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int ) ;

int FUNC_2(struct qed_hwfn *VAR_5,
      struct qed_ptt *VAR_6, u32 *VAR_7)
{
 u32 VAR_8;

 if (FUNC_0(VAR_5->cdev))
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_5, VAR_6, VAR_2);
 VAR_8 = (VAR_8 & VAR_3) >>
        VAR_4;
 VAR_8 = (1 << (VAR_8 + VAR_1));

 *VAR_7 = VAR_8;

 return 0;
}
