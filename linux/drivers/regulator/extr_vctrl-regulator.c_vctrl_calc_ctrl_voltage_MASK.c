
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vctrl_voltage_range {int min_uV; int max_uV; } ;
struct TYPE_2__ {struct vctrl_voltage_range out; struct vctrl_voltage_range ctrl; } ;
struct vctrl_data {TYPE_1__ vrange; } ;
typedef int s64 ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(struct vctrl_data *VAR_0, int VAR_1)
{
 struct vctrl_voltage_range *VAR_2 = &VAR_0->vrange.ctrl;
 struct vctrl_voltage_range *VAR_3 = &VAR_0->vrange.out;

 return VAR_2->min_uV +
  FUNC_0((s64)(VAR_1 - VAR_3->min_uV) *
          (VAR_2->max_uV - VAR_2->min_uV),
          VAR_3->max_uV - VAR_3->min_uV);
}
