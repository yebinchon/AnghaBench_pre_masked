
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ prev_state; } ;
struct qlcnic_hardware_context {scalar_t__ reset_context; TYPE_1__ idc; } ;
struct qlcnic_adapter {int state; struct qlcnic_hardware_context* ahw; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_3(struct qlcnic_adapter *VAR_2)
{
 struct qlcnic_hardware_context *VAR_3 = VAR_2->ahw;
 int VAR_4 = 0;

 if (VAR_3->idc.prev_state != VAR_0)
  VAR_4 = FUNC_2(VAR_2);
 else if (VAR_3->reset_context)
  VAR_4 = FUNC_1(VAR_2);

 FUNC_0(VAR_1, &VAR_2->state);
 return VAR_4;
}
