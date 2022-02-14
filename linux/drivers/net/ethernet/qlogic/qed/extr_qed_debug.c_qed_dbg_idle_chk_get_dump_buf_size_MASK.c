
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct idle_chk_data {int buf_size_set; int buf_size; } ;
struct dbg_tools_data {struct idle_chk_data idle_chk; } ;
struct qed_hwfn {struct dbg_tools_data dbg_info; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;
struct TYPE_2__ {int ptr; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int *,int) ;
 TYPE_1__* VAR_6 ;

enum dbg_status FUNC_2(struct qed_hwfn *VAR_7,
         struct qed_ptt *VAR_8,
         u32 *VAR_9)
{
 struct dbg_tools_data *VAR_10 = &VAR_7->dbg_info;
 struct idle_chk_data *VAR_11;
 enum dbg_status VAR_12;

 VAR_11 = &VAR_10->idle_chk;
 *VAR_9 = 0;

 VAR_12 = FUNC_0(VAR_7, VAR_8);
 if (VAR_12 != VAR_5)
  return VAR_12;

 if (!VAR_6[VAR_3].ptr ||
     !VAR_6[VAR_1].ptr ||
     !VAR_6[VAR_0].ptr ||
     !VAR_6[VAR_2].ptr)
  return VAR_4;

 if (!VAR_11->buf_size_set) {
  VAR_11->buf_size = FUNC_1(VAR_7,
             VAR_8, ((void*)0), 0);
  VAR_11->buf_size_set = 1;
 }

 *VAR_9 = VAR_11->buf_size;

 return VAR_5;
}
