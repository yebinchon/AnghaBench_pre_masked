
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u64 ;
struct TYPE_6__ {void* base; } ;
struct gasket_driver_desc {TYPE_1__ coherent_buffer_description; } ;
struct TYPE_7__ {unsigned int length_bytes; void* phys_base; int * virt_base; } ;
struct gasket_dev {TYPE_3__** page_table; TYPE_2__ coherent_buffer; } ;
typedef void* dma_addr_t ;
struct TYPE_9__ {size_t kernel_virt; void* paddr; } ;
struct TYPE_8__ {unsigned int num_coherent_pages; TYPE_4__* coherent_pages; } ;


 unsigned int FUNC_0 (size_t,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 void* FUNC_1 (int ,unsigned int,void**,int ) ;
 int FUNC_2 (int ,unsigned int,void*,void*) ;
 int FUNC_3 (struct gasket_dev*) ;
 struct gasket_driver_desc* FUNC_4 (struct gasket_dev*) ;
 TYPE_4__* FUNC_5 (unsigned int,int,int ) ;
 int FUNC_6 (TYPE_4__*) ;

int FUNC_7(struct gasket_dev *VAR_5, u64 VAR_6,
     dma_addr_t *VAR_7, u64 VAR_8)
{
 dma_addr_t VAR_9;
 void *VAR_10;
 int VAR_11;
 unsigned int VAR_12 = FUNC_0(VAR_6, VAR_4);
 const struct gasket_driver_desc *VAR_13 =
  FUNC_4(VAR_5);

 if (!VAR_5->page_table[VAR_8])
  return -VAR_0;

 if (VAR_12 == 0)
  return -VAR_1;

 VAR_10 = FUNC_1(FUNC_3(VAR_5),
     VAR_12 * VAR_4, &VAR_9, VAR_3);
 if (!VAR_10)
  goto nomem;

 VAR_5->page_table[VAR_8]->num_coherent_pages = VAR_12;


 VAR_5->page_table[VAR_8]->coherent_pages =
  FUNC_5(VAR_12,
   sizeof(*VAR_5->page_table[VAR_8]->coherent_pages),
   VAR_3);
 if (!VAR_5->page_table[VAR_8]->coherent_pages)
  goto nomem;

 VAR_5->coherent_buffer.length_bytes =
  VAR_4 * (VAR_12);
 VAR_5->coherent_buffer.phys_base = VAR_9;
 VAR_5->coherent_buffer.virt_base = VAR_10;

 *VAR_7 = VAR_13->coherent_buffer_description.base;
 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
  VAR_5->page_table[VAR_8]->coherent_pages[VAR_11].paddr =
   VAR_9 + VAR_11 * VAR_4;
  VAR_5->page_table[VAR_8]->coherent_pages[VAR_11].kernel_virt =
   (u64)VAR_10 + VAR_11 * VAR_4;
 }

 return 0;

nomem:
 if (VAR_10) {
  FUNC_2(FUNC_3(VAR_5),
      VAR_12 * VAR_4, VAR_10, VAR_9);
  VAR_5->coherent_buffer.length_bytes = 0;
  VAR_5->coherent_buffer.virt_base = ((void*)0);
  VAR_5->coherent_buffer.phys_base = 0;
 }

 FUNC_6(VAR_5->page_table[VAR_8]->coherent_pages);
 VAR_5->page_table[VAR_8]->coherent_pages = ((void*)0);
 VAR_5->page_table[VAR_8]->num_coherent_pages = 0;
 return -VAR_2;
}
