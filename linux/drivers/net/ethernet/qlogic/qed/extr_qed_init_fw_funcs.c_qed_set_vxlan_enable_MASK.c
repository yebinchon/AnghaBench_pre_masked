
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int ) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int ,int) ;

void FUNC_3(struct qed_hwfn *VAR_8,
     struct qed_ptt *VAR_9, bool VAR_10)
{
 u32 VAR_11;
 u8 VAR_12;


 VAR_11 = FUNC_1(VAR_8, VAR_9, VAR_5);
 VAR_12 = VAR_6;
 FUNC_0(VAR_11, VAR_12, VAR_10);
 FUNC_2(VAR_8, VAR_9, VAR_5, VAR_11);
 if (VAR_11) {
  VAR_11 =
      FUNC_1(VAR_8, VAR_9, VAR_7);


  if (VAR_11 == (u32)VAR_3)
   FUNC_2(VAR_8, VAR_9, VAR_7,
          (u32)VAR_4);
 }


 VAR_11 = FUNC_1(VAR_8, VAR_9, VAR_1);
 VAR_12 = VAR_2;
 FUNC_0(VAR_11, VAR_12, VAR_10);
 FUNC_2(VAR_8, VAR_9, VAR_1, VAR_11);


 FUNC_2(VAR_8,
        VAR_9, VAR_0, VAR_10 ? 1 : 0);
}
