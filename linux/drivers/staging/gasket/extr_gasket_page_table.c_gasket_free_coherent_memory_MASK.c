
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u64 ;
struct TYPE_4__ {scalar_t__ base; } ;
struct gasket_driver_desc {TYPE_1__ coherent_buffer_description; } ;
struct TYPE_5__ {scalar_t__ phys_base; int * virt_base; scalar_t__ length_bytes; } ;
struct gasket_dev {TYPE_3__** page_table; TYPE_2__ coherent_buffer; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_6__ {scalar_t__ num_coherent_pages; int * coherent_pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int *,scalar_t__) ;
 int FUNC_1 (struct gasket_dev*) ;
 struct gasket_driver_desc* FUNC_2 (struct gasket_dev*) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct gasket_dev *VAR_2, u64 VAR_3,
    dma_addr_t VAR_4, u64 VAR_5)
{
 const struct gasket_driver_desc *VAR_6;

 if (!VAR_2->page_table[VAR_5])
  return -VAR_1;

 VAR_6 = FUNC_2(VAR_2);

 if (VAR_6->coherent_buffer_description.base != VAR_4)
  return -VAR_0;

 if (VAR_2->coherent_buffer.length_bytes) {
  FUNC_0(FUNC_1(VAR_2),
      VAR_2->coherent_buffer.length_bytes,
      VAR_2->coherent_buffer.virt_base,
      VAR_2->coherent_buffer.phys_base);
  VAR_2->coherent_buffer.length_bytes = 0;
  VAR_2->coherent_buffer.virt_base = ((void*)0);
  VAR_2->coherent_buffer.phys_base = 0;
 }

 FUNC_3(VAR_2->page_table[VAR_5]->coherent_pages);
 VAR_2->page_table[VAR_5]->coherent_pages = ((void*)0);
 VAR_2->page_table[VAR_5]->num_coherent_pages = 0;

 return 0;
}
