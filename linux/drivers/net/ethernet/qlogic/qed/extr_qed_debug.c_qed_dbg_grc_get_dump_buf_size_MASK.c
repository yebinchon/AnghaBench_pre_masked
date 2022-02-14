
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;
struct TYPE_2__ {int ptr; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int *,int,scalar_t__*) ;
 TYPE_1__* VAR_7 ;

enum dbg_status FUNC_2(struct qed_hwfn *VAR_8,
           struct qed_ptt *VAR_9,
           u32 *VAR_10)
{
 enum dbg_status VAR_11 = FUNC_0(VAR_8, VAR_9);

 *VAR_10 = 0;

 if (VAR_11 != VAR_6)
  return VAR_11;

 if (!VAR_7[VAR_4].ptr ||
     !VAR_7[VAR_3].ptr ||
     !VAR_7[VAR_2].ptr ||
     !VAR_7[VAR_0].ptr ||
     !VAR_7[VAR_1].ptr)
  return VAR_5;

 return FUNC_1(VAR_8, VAR_9, ((void*)0), 0, VAR_10);
}
