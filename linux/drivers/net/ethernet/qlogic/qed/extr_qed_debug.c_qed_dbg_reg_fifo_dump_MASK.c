
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qed_hwfn*) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,scalar_t__*) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,scalar_t__*,int,scalar_t__*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*) ;

enum dbg_status FUNC_4(struct qed_hwfn *VAR_2,
          struct qed_ptt *VAR_3,
          u32 *VAR_4,
          u32 VAR_5,
          u32 *VAR_6)
{
 u32 VAR_7;
 enum dbg_status VAR_8;

 *VAR_6 = 0;

 VAR_8 = FUNC_1(VAR_2,
          VAR_3,
          &VAR_7);
 if (VAR_8 != VAR_1)
  return VAR_8;

 if (VAR_5 < VAR_7)
  return VAR_0;


 FUNC_3(VAR_2, VAR_3);

 VAR_8 = FUNC_2(VAR_2,
       VAR_3, VAR_4, 1, VAR_6);


 FUNC_0(VAR_2);

 return VAR_8;
}
