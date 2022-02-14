
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int engine_for_debug; } ;
struct qed_dev {TYPE_1__ dbg_params; } ;


 int FUNC_0 (struct qed_dev*,int ,char*,int) ;
 int VAR_0 ;

void FUNC_1(struct qed_dev *VAR_1, int VAR_2)
{
 FUNC_0(VAR_1, VAR_0, "set debug engine to %d\n",
     VAR_2);
 VAR_1->dbg_params.engine_for_debug = VAR_2;
}
