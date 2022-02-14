
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
 int FUNC_0 (int ,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int ,int ,int *,int *,int *,int *) ;

int FUNC_2(struct qed_hwfn *VAR_9, struct qed_ptt *VAR_10,
   u16 VAR_11, u8 VAR_12, u16 VAR_13, u8 *VAR_14,
   u32 *VAR_15)
{
 u32 VAR_16 = 0, VAR_17, VAR_18;
 int VAR_19;

 FUNC_0(VAR_16, VAR_3, VAR_11);
 if (VAR_13 & VAR_8)
  FUNC_0(VAR_16,
      VAR_4, 1);
 if (VAR_13 & VAR_7)
  FUNC_0(VAR_16,
      VAR_2, 1);
 if (VAR_13 & VAR_6) {
  FUNC_0(VAR_16,
      VAR_1, 1);
  FUNC_0(VAR_16,
      VAR_0,
      VAR_12);
 }

 VAR_19 = FUNC_1(VAR_9, VAR_10,
    VAR_5,
    VAR_16, &VAR_17, &VAR_18, VAR_15, (u32 *)VAR_14);

 return VAR_19;
}
