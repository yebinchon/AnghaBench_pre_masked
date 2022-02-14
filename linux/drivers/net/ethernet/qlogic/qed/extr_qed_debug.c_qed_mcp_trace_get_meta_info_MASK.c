
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int,int*,int*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int) ;

__attribute__((used)) static enum dbg_status FUNC_4(struct qed_hwfn *VAR_6,
         struct qed_ptt *VAR_7,
         u32 VAR_8,
         u32 *VAR_9,
         u32 *VAR_10,
         u32 *VAR_11)
{
 u32 VAR_12, VAR_13, VAR_14;


 VAR_12 = FUNC_3(VAR_6, VAR_7, VAR_3);


 VAR_14 =
  VAR_2 + FUNC_1(VAR_12) +
  FUNC_0(VAR_12) + VAR_8;
 *VAR_9 = FUNC_3(VAR_6, VAR_7, VAR_14);
 if (*VAR_9 > 1)
  return VAR_0;


 VAR_13 =
     (*VAR_9 ==
      VAR_1) ? VAR_4 : VAR_5;
 return FUNC_2(VAR_6,
        VAR_7,
        VAR_13,
        VAR_10, VAR_11);
}
