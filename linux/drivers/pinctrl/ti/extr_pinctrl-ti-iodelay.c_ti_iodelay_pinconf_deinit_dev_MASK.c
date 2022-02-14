
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_iodelay_reg_data {int global_lock_val; int global_lock_mask; int reg_global_lock_offset; } ;
struct ti_iodelay_device {int regmap; struct ti_iodelay_reg_data* reg_data; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ti_iodelay_device *VAR_0)
{
 const struct ti_iodelay_reg_data *VAR_1 = VAR_0->reg_data;


 FUNC_0(VAR_0->regmap, VAR_1->reg_global_lock_offset,
      VAR_1->global_lock_mask, VAR_1->global_lock_val);
}
