
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;
typedef enum dbg_grc_params { ____Placeholder_dbg_grc_params } dbg_grc_params ;
struct TYPE_2__ {int crash_preset_val; int exclude_all_preset_val; scalar_t__ is_persistent; scalar_t__ is_preset; int max; int min; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct qed_hwfn*,int ,char*,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_2 (struct qed_hwfn*) ;
 int FUNC_3 (struct qed_hwfn*,int,int ) ;
 TYPE_1__* VAR_6 ;

enum dbg_status FUNC_4(struct qed_hwfn *VAR_7,
       struct qed_ptt *VAR_8,
       enum dbg_grc_params VAR_9, u32 VAR_10)
{
 enum dbg_status VAR_11;
 int VAR_12;

 FUNC_0(VAR_7, VAR_5,
     "dbg_grc_config: paramId = %d, val = %d\n", VAR_9, VAR_10);

 VAR_11 = FUNC_1(VAR_7, VAR_8);
 if (VAR_11 != VAR_3)
  return VAR_11;




 FUNC_2(VAR_7);

 if (VAR_9 >= VAR_4)
  return VAR_2;
 if (VAR_10 < VAR_6[VAR_9].min ||
     VAR_10 > VAR_6[VAR_9].max)
  return VAR_2;

 if (VAR_6[VAR_9].is_preset) {





  if (!VAR_10)
   return VAR_2;


  for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
   u32 VAR_13;


   if (VAR_6[VAR_12].is_persistent)
    continue;


   if (VAR_9 == VAR_1)
    VAR_13 =
        VAR_6[VAR_12].exclude_all_preset_val;
   else if (VAR_9 == VAR_0)
    VAR_13 =
        VAR_6[VAR_12].crash_preset_val;
   else
    return VAR_2;

   FUNC_3(VAR_7,
       (enum dbg_grc_params)VAR_12, VAR_13);
  }
 } else {

  FUNC_3(VAR_7, VAR_9, VAR_10);
 }

 return VAR_3;
}
