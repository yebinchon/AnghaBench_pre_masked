
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct spmi_voltage_range {scalar_t__ range_sel; } ;
struct spmi_regulator {TYPE_1__* set_points; } ;
struct TYPE_2__ {int count; struct spmi_voltage_range* range; } ;


 int VAR_0 ;
 int FUNC_0 (struct spmi_regulator*,int ,scalar_t__*,int) ;

__attribute__((used)) static const struct spmi_voltage_range *
FUNC_1(struct spmi_regulator *VAR_1)
{
 u8 VAR_2;
 const struct spmi_voltage_range *VAR_3, *VAR_4;

 VAR_3 = VAR_1->set_points->range;
 VAR_4 = VAR_3 + VAR_1->set_points->count;

 FUNC_0(VAR_1, VAR_0, &VAR_2, 1);

 for (; VAR_3 < VAR_4; VAR_3++)
  if (VAR_3->range_sel == VAR_2)
   return VAR_3;

 return ((void*)0);
}
