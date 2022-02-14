
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u64 ;
struct TYPE_2__ {scalar_t__ phys_base; int * virt_base; scalar_t__ length_bytes; } ;
struct gasket_dev {TYPE_1__ coherent_buffer; int * page_table; } ;


 int FUNC_0 (int ,scalar_t__,int *,scalar_t__) ;
 int FUNC_1 (struct gasket_dev*) ;

void FUNC_2(struct gasket_dev *VAR_0, u64 VAR_1)
{
 if (!VAR_0->page_table[VAR_1])
  return;

 if (VAR_0->coherent_buffer.length_bytes) {
  FUNC_0(FUNC_1(VAR_0),
      VAR_0->coherent_buffer.length_bytes,
      VAR_0->coherent_buffer.virt_base,
      VAR_0->coherent_buffer.phys_base);
  VAR_0->coherent_buffer.length_bytes = 0;
  VAR_0->coherent_buffer.virt_base = ((void*)0);
  VAR_0->coherent_buffer.phys_base = 0;
 }
}
