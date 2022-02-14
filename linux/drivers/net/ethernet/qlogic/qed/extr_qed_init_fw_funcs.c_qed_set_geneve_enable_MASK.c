
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int cdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int ) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int ,int) ;

void FUNC_4(struct qed_hwfn *VAR_10,
      struct qed_ptt *VAR_11,
      bool VAR_12, bool VAR_13)
{
 u32 VAR_14;
 u8 VAR_15;


 VAR_14 = FUNC_2(VAR_10, VAR_11, VAR_6);
 VAR_15 = VAR_7;
 FUNC_1(VAR_14, VAR_15, VAR_12);
 VAR_15 = VAR_8;
 FUNC_1(VAR_14, VAR_15, VAR_13);
 FUNC_3(VAR_10, VAR_11, VAR_6, VAR_14);
 if (VAR_14) {
  VAR_14 =
      FUNC_2(VAR_10, VAR_11, VAR_9);


  if (VAR_14 == (u32)VAR_4)
   FUNC_3(VAR_10, VAR_11, VAR_9,
          (u32)VAR_5);
 }


 FUNC_3(VAR_10, VAR_11, VAR_2,
        VAR_12 ? 1 : 0);
 FUNC_3(VAR_10, VAR_11, VAR_3, VAR_13 ? 1 : 0);


 if (FUNC_0(VAR_10->cdev))
  return;


 FUNC_3(VAR_10,
        VAR_11,
        VAR_0,
        VAR_12 ? 1 : 0);
 FUNC_3(VAR_10,
        VAR_11,
        VAR_1,
        VAR_13 ? 1 : 0);
}
