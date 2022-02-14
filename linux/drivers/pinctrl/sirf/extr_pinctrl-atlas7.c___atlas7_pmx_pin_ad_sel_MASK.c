
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct atlas7_pmx {scalar_t__* regs; } ;
struct atlas7_pad_config {unsigned long ad_ctrl_bit; scalar_t__ ad_ctrl_reg; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,size_t,scalar_t__,unsigned long) ;
 unsigned long FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct atlas7_pmx *VAR_1,
   struct atlas7_pad_config *VAR_2,
   u32 VAR_3, u32 VAR_4)
{
 unsigned long VAR_5;


 FUNC_3(VAR_0 << VAR_2->ad_ctrl_bit,
  VAR_1->regs[VAR_3] + FUNC_0(VAR_2->ad_ctrl_reg));


 VAR_5 = FUNC_2(VAR_1->regs[VAR_3] + VAR_2->ad_ctrl_reg);
 VAR_5 &= ~(VAR_0 << VAR_2->ad_ctrl_bit);
 FUNC_3(VAR_5 | (VAR_4 << VAR_2->ad_ctrl_bit),
   VAR_1->regs[VAR_3] + VAR_2->ad_ctrl_reg);

 VAR_5 = FUNC_2(VAR_1->regs[VAR_3] + VAR_2->ad_ctrl_reg);
 FUNC_1("bank:%d reg:0x%04x val:0x%08lx\n",
   VAR_3, VAR_2->ad_ctrl_reg, VAR_5);
 return 0;
}
