
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct venus_resources {unsigned int reg_tbl_size; struct reg_val* reg_tbl; } ;
struct venus_hfi_device {TYPE_1__* core; } ;
struct reg_val {int value; int reg; } ;
struct TYPE_2__ {struct venus_resources* res; } ;


 int FUNC_0 (struct venus_hfi_device*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct venus_hfi_device *VAR_0)
{
 const struct venus_resources *VAR_1 = VAR_0->core->res;
 const struct reg_val *VAR_2 = VAR_1->reg_tbl;
 unsigned int VAR_3 = VAR_1->reg_tbl_size;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  FUNC_0(VAR_0, VAR_2[VAR_4].reg, VAR_2[VAR_4].value);
}
