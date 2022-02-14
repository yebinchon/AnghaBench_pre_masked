
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct TYPE_3__ {size_t engine_for_debug; struct qed_dbg_feature* features; } ;
struct qed_dev {TYPE_1__ dbg_params; struct qed_hwfn* hwfns; } ;
struct qed_dbg_feature {int buf_size; } ;
typedef enum qed_dbg_features { ____Placeholder_qed_dbg_features } qed_dbg_features ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;
struct TYPE_4__ {int (* get_size ) (struct qed_hwfn*,struct qed_ptt*,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 struct qed_ptt* FUNC_0 (struct qed_hwfn*) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int*) ;

int FUNC_3(struct qed_dev *VAR_3, enum qed_dbg_features VAR_4)
{
 struct qed_hwfn *VAR_5 =
  &VAR_3->hwfns[VAR_3->dbg_params.engine_for_debug];
 struct qed_ptt *VAR_6 = FUNC_0(VAR_5);
 struct qed_dbg_feature *VAR_7 =
  &VAR_3->dbg_params.features[VAR_4];
 u32 VAR_8;
 enum dbg_status VAR_9;

 if (!VAR_6)
  return -VAR_1;

 VAR_9 = VAR_2[VAR_4].get_size(VAR_5, VAR_6,
         &VAR_8);
 if (VAR_9 != VAR_0)
  VAR_8 = 0;

 FUNC_1(VAR_5, VAR_6);
 VAR_7->buf_size = VAR_8 * sizeof(u32);
 return VAR_7->buf_size;
}
