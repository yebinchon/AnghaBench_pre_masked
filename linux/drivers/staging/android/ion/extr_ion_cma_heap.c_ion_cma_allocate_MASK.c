
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {int sgl; } ;
struct page {int dummy; } ;
struct ion_heap {int dummy; } ;
struct ion_cma_heap {int cma; } ;
struct ion_buffer {struct sg_table* sg_table; struct page* priv_virt; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ FUNC_1 (struct page*) ;
 struct page* FUNC_2 (int ,unsigned long,unsigned long,int) ;
 int FUNC_3 (int ,struct page*,unsigned long) ;
 unsigned long FUNC_4 (unsigned long) ;
 int FUNC_5 (struct sg_table*) ;
 struct sg_table* FUNC_6 (int,int ) ;
 void* FUNC_7 (struct page*) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*,int ,unsigned long) ;
 void* FUNC_10 (struct page*) ;
 int FUNC_11 (struct sg_table*,int,int ) ;
 int FUNC_12 (int ,struct page*,unsigned long,int ) ;
 struct ion_cma_heap* FUNC_13 (struct ion_heap*) ;

__attribute__((used)) static int FUNC_14(struct ion_heap *VAR_5, struct ion_buffer *VAR_6,
       unsigned long VAR_7,
       unsigned long VAR_8)
{
 struct ion_cma_heap *VAR_9 = FUNC_13(VAR_5);
 struct sg_table *VAR_10;
 struct page *VAR_11;
 unsigned long VAR_12 = FUNC_0(VAR_7);
 unsigned long VAR_13 = VAR_12 >> VAR_3;
 unsigned long VAR_14 = FUNC_4(VAR_12);
 int VAR_15;

 if (VAR_14 > VAR_0)
  VAR_14 = VAR_0;

 VAR_11 = FUNC_2(VAR_9->cma, VAR_13, VAR_14, 0);
 if (!VAR_11)
  return -VAR_1;

 if (FUNC_1(VAR_11)) {
  unsigned long VAR_16 = VAR_13;
  struct page *VAR_17 = VAR_11;

  while (VAR_16 > 0) {
   void *VAR_18 = FUNC_7(VAR_17);

   FUNC_9(VAR_18, 0, VAR_4);
   FUNC_8(VAR_18);
   VAR_17++;
   VAR_16--;
  }
 } else {
  FUNC_9(FUNC_10(VAR_11), 0, VAR_12);
 }

 VAR_10 = FUNC_6(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  goto err;

 VAR_15 = FUNC_11(VAR_10, 1, VAR_2);
 if (VAR_15)
  goto free_mem;

 FUNC_12(VAR_10->sgl, VAR_11, VAR_12, 0);

 VAR_6->priv_virt = VAR_11;
 VAR_6->sg_table = VAR_10;
 return 0;

free_mem:
 FUNC_5(VAR_10);
err:
 FUNC_3(VAR_9->cma, VAR_11, VAR_13);
 return -VAR_1;
}
