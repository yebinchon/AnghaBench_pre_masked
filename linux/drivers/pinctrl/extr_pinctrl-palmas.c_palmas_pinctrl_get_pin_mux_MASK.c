
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct palmas_pingroup {scalar_t__ mux_reg_base; unsigned int mux_reg_mask; unsigned int mux_bit_shift; int mux_reg_add; } ;
struct palmas_pctrl_chip_info {int num_pin_groups; unsigned int* pins_current_opt; int dev; int palmas; struct palmas_pingroup* pin_groups; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ,scalar_t__,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct palmas_pctrl_chip_info *VAR_1)
{
 const struct palmas_pingroup *VAR_2;
 unsigned int VAR_3;
 int VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1->num_pin_groups; ++VAR_5) {
  VAR_2 = &VAR_1->pin_groups[VAR_5];
  if (VAR_2->mux_reg_base == VAR_0) {
   VAR_1->pins_current_opt[VAR_5] = 0;
   continue;
  }
  VAR_4 = FUNC_1(VAR_1->palmas, VAR_2->mux_reg_base,
    VAR_2->mux_reg_add, &VAR_3);
  if (VAR_4 < 0) {
   FUNC_0(VAR_1->dev, "mux_reg 0x%02x read failed: %d\n",
     VAR_2->mux_reg_add, VAR_4);
   return VAR_4;
  }
  VAR_3 &= VAR_2->mux_reg_mask;
  VAR_1->pins_current_opt[VAR_5] = VAR_3 >> VAR_2->mux_bit_shift;
 }
 return 0;
}
