
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vctrl_voltage_table {int ctrl; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct vctrl_voltage_table *VAR_2 = VAR_0;
 const struct vctrl_voltage_table *VAR_3 = VAR_1;

 return VAR_2->ctrl - VAR_3->ctrl;
}
