
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int ) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int ,int ) ;

void FUNC_3(struct qed_hwfn *VAR_4,
    struct qed_ptt *VAR_5, bool VAR_6)
{
 u32 VAR_7, VAR_8;


 VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_2);


 VAR_8 = FUNC_0(VAR_0);

 if (VAR_6) {

  VAR_7 |= VAR_8;


  FUNC_2(VAR_4,
         VAR_5,
         VAR_3,
         (u32)VAR_1);
 } else {

  VAR_7 &= ~VAR_8;
 }


 FUNC_2(VAR_4, VAR_5, VAR_2, VAR_7);
}
