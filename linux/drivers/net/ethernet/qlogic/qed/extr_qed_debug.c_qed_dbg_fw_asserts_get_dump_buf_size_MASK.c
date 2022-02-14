
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;


 int VAR_0 ;
 int FUNC_0 (struct qed_hwfn*,struct qed_ptt*) ;
 scalar_t__ FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int *,int) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*) ;

enum dbg_status FUNC_3(struct qed_hwfn *VAR_1,
           struct qed_ptt *VAR_2,
           u32 *VAR_3)
{
 enum dbg_status VAR_4 = FUNC_0(VAR_1, VAR_2);

 *VAR_3 = 0;

 if (VAR_4 != VAR_0)
  return VAR_4;


 FUNC_2(VAR_1, VAR_2);

 *VAR_3 = FUNC_1(VAR_1, VAR_2, ((void*)0), 0);

 return VAR_0;
}
