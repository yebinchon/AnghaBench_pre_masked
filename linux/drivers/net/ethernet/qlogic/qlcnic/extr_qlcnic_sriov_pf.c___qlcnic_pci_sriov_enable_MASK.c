
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_1__* ahw; int state; } ;
struct TYPE_2__ {int op_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qlcnic_adapter*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (struct qlcnic_adapter*,int) ;
 int FUNC_4 (struct qlcnic_adapter*) ;
 int FUNC_5 (struct qlcnic_adapter*) ;
 int FUNC_6 (struct qlcnic_adapter*) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct qlcnic_adapter *VAR_3,
         int VAR_4)
{
 int VAR_5 = 0;

 FUNC_7(VAR_2, &VAR_3->state);
 VAR_3->ahw->op_mode = VAR_1;

 VAR_5 = FUNC_3(VAR_3, VAR_4);
 if (VAR_5)
  goto clear_op_mode;

 VAR_5 = FUNC_4(VAR_3);
 if (VAR_5)
  goto sriov_cleanup;

 VAR_5 = FUNC_6(VAR_3);
 if (VAR_5)
  goto del_flr_queue;

 FUNC_2(VAR_3);

 return VAR_5;

del_flr_queue:
 FUNC_5(VAR_3);

sriov_cleanup:
 FUNC_0(VAR_3);

clear_op_mode:
 FUNC_1(VAR_2, &VAR_3->state);
 VAR_3->ahw->op_mode = VAR_0;
 return VAR_5;
}
