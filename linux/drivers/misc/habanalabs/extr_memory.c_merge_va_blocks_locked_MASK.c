
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct hl_vm_va_block {scalar_t__ end; scalar_t__ start; scalar_t__ size; struct list_head node; } ;
struct hl_device {int dummy; } ;


 int FUNC_0 (struct hl_vm_va_block*) ;
 int FUNC_1 (struct list_head*) ;
 struct hl_vm_va_block* FUNC_2 (struct hl_vm_va_block*,int ) ;
 struct hl_vm_va_block* FUNC_3 (struct hl_vm_va_block*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct hl_device *VAR_1,
  struct list_head *VAR_2, struct hl_vm_va_block *VAR_3)
{
 struct hl_vm_va_block *VAR_4, *VAR_5;

 VAR_4 = FUNC_3(VAR_3, VAR_0);
 if (&VAR_4->node != VAR_2 && VAR_4->end + 1 == VAR_3->start) {
  VAR_4->end = VAR_3->end;
  VAR_4->size = VAR_4->end - VAR_4->start;
  FUNC_1(&VAR_3->node);
  FUNC_0(VAR_3);
  VAR_3 = VAR_4;
 }

 VAR_5 = FUNC_2(VAR_3, VAR_0);
 if (&VAR_5->node != VAR_2 && VAR_3->end + 1 == VAR_5->start) {
  VAR_5->start = VAR_3->start;
  VAR_5->size = VAR_5->end - VAR_5->start;
  FUNC_1(&VAR_3->node);
  FUNC_0(VAR_3);
 }
}
