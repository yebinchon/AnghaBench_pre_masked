
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct qed_dbg_feature* features; } ;
struct qed_dev {TYPE_1__ dbg_params; } ;
struct qed_dbg_feature {int * dump_buf; } ;
typedef enum qed_dbg_features { ____Placeholder_qed_dbg_features } qed_dbg_features ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct qed_dev *VAR_1)
{
 struct qed_dbg_feature *VAR_2 = ((void*)0);
 enum qed_dbg_features VAR_3;




 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2 = &VAR_1->dbg_params.features[VAR_3];
  if (VAR_2->dump_buf) {
   FUNC_0(VAR_2->dump_buf);
   VAR_2->dump_buf = ((void*)0);
  }
 }
}
