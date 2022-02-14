
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct ion_cma_heap {int cma; } ;
struct ion_buffer {int sg_table; int size; struct page* priv_virt; int heap; } ;


 unsigned long FUNC_0 (int ) ;
 unsigned long VAR_0 ;
 int FUNC_1 (int ,struct page*,unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct ion_cma_heap* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct ion_buffer *VAR_1)
{
 struct ion_cma_heap *VAR_2 = FUNC_4(VAR_1->heap);
 struct page *VAR_3 = VAR_1->priv_virt;
 unsigned long VAR_4 = FUNC_0(VAR_1->size) >> VAR_0;


 FUNC_1(VAR_2->cma, VAR_3, VAR_4);

 FUNC_3(VAR_1->sg_table);
 FUNC_2(VAR_1->sg_table);
}
