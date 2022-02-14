
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adv748x_state {int dummy; } ;
struct adv748x_reg_value {scalar_t__ page; int reg; int value; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct adv748x_state*,scalar_t__,int ,int ) ;
 int FUNC_1 (struct adv748x_state*,char*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(struct adv748x_state *VAR_1,
         const struct adv748x_reg_value *VAR_2)
{
 int VAR_3;

 for (; VAR_2->page != VAR_0; VAR_2++) {
  VAR_3 = FUNC_0(VAR_1, VAR_2->page, VAR_2->reg, VAR_2->value);
  if (VAR_3 < 0) {
   FUNC_1(VAR_1, "Error regs page: 0x%02x reg: 0x%02x\n",
    VAR_2->page, VAR_2->reg);
   return VAR_3;
  }
 }

 return 0;
}
