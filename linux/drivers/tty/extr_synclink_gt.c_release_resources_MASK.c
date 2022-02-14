
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slgt_info {int irq_requested; int reg_addr_requested; int * reg_addr; int phys_reg_addr; int irq_level; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct slgt_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct slgt_info *VAR_1)
{
 if (VAR_1->irq_requested) {
  FUNC_0(VAR_1->irq_level, VAR_1);
  VAR_1->irq_requested = 0;
 }

 if (VAR_1->reg_addr_requested) {
  FUNC_2(VAR_1->phys_reg_addr, VAR_0);
  VAR_1->reg_addr_requested = 0;
 }

 if (VAR_1->reg_addr) {
  FUNC_1(VAR_1->reg_addr);
  VAR_1->reg_addr = ((void*)0);
 }
}
