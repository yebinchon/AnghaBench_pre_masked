
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctlr_info {int interrupts_enabled; scalar_t__ vaddr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ctlr_info *VAR_2, unsigned long VAR_3)
{
 if (VAR_3) {
  VAR_2->interrupts_enabled = 1;
  FUNC_1(0, VAR_2->vaddr + VAR_1);
  (void) FUNC_0(VAR_2->vaddr + VAR_1);
 } else {
  VAR_2->interrupts_enabled = 0;
  FUNC_1(VAR_0,
         VAR_2->vaddr + VAR_1);
  (void) FUNC_0(VAR_2->vaddr + VAR_1);
 }
}
