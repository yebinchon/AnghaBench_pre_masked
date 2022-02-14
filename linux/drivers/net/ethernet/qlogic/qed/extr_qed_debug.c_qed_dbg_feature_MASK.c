
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct TYPE_2__ {size_t engine_for_debug; struct qed_dbg_feature* features; } ;
struct qed_dev {TYPE_1__ dbg_params; struct qed_hwfn* hwfns; } ;
struct qed_dbg_feature {int dumped_dwords; int buf_size; int dump_buf; } ;
typedef enum qed_dbg_features { ____Placeholder_qed_dbg_features } qed_dbg_features ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;


 int VAR_0 ;
 int FUNC_0 (struct qed_dev*,int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*,int ,int ) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int) ;
 int FUNC_3 (int) ;
 struct qed_ptt* FUNC_4 (struct qed_hwfn*) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_ptt*) ;

int FUNC_6(struct qed_dev *VAR_3, void *VAR_4,
      enum qed_dbg_features VAR_5, u32 *VAR_6)
{
 struct qed_hwfn *VAR_7 =
  &VAR_3->hwfns[VAR_3->dbg_params.engine_for_debug];
 struct qed_dbg_feature *VAR_8 =
  &VAR_3->dbg_params.features[VAR_5];
 enum dbg_status VAR_9;
 struct qed_ptt *VAR_10;
 int VAR_11 = 0;


 VAR_10 = FUNC_4(VAR_7);
 if (!VAR_10)
  return -VAR_1;


 VAR_9 = FUNC_2(VAR_7, VAR_10, VAR_5);
 if (VAR_9 != VAR_0) {
  FUNC_0(VAR_3, VAR_2, "%s\n",
      FUNC_3(VAR_9));
  *VAR_6 = 0;
  VAR_11 = -VAR_1;
  goto out;
 }

 FUNC_0(VAR_3, VAR_2,
     "copying debugfs feature to external buffer\n");
 FUNC_1(VAR_4, VAR_8->dump_buf, VAR_8->buf_size);
 *VAR_6 = VAR_3->dbg_params.features[VAR_5].dumped_dwords *
       4;

out:
 FUNC_5(VAR_7, VAR_10);
 return VAR_11;
}
