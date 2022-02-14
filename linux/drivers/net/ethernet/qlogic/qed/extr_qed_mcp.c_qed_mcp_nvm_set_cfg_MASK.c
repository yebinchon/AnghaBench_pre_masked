
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int ,int ,int *,int *,int ,int *) ;

int FUNC_2(struct qed_hwfn *VAR_13, struct qed_ptt *VAR_14,
   u16 VAR_15, u8 VAR_16, u16 VAR_17, u8 *VAR_18,
   u32 VAR_19)
{
 u32 VAR_20 = 0, VAR_21, VAR_22;

 FUNC_0(VAR_20, VAR_5, VAR_15);
 if (VAR_17 & VAR_8)
  FUNC_0(VAR_20,
      VAR_0, 1);
 if (VAR_17 & VAR_12)
  FUNC_0(VAR_20,
      VAR_6, 1);
 if (VAR_17 & VAR_9)
  FUNC_0(VAR_20,
      VAR_1, 1);
 if (VAR_17 & VAR_11)
  FUNC_0(VAR_20,
      VAR_4, 1);
 if (VAR_17 & VAR_10) {
  FUNC_0(VAR_20,
      VAR_3, 1);
  FUNC_0(VAR_20,
      VAR_2,
      VAR_16);
 }

 return FUNC_1(VAR_13, VAR_14,
      VAR_7,
      VAR_20, &VAR_21, &VAR_22, VAR_19, (u32 *)VAR_18);
}
