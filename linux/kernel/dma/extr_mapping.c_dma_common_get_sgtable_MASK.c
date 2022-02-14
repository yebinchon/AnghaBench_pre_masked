
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {int sgl; } ;
struct page {int dummy; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (size_t) ;
 unsigned long FUNC_2 (struct device*,void*,int ) ;
 int FUNC_3 (struct device*) ;
 struct page* FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (struct sg_table*,int,int ) ;
 int FUNC_7 (int ,struct page*,int ,int ) ;
 struct page* FUNC_8 (void*) ;

int FUNC_9(struct device *VAR_3, struct sg_table *VAR_4,
   void *VAR_5, dma_addr_t VAR_6, size_t VAR_7,
   unsigned long VAR_8)
{
 struct page *VAR_9;
 int VAR_10;

 if (!FUNC_3(VAR_3)) {
  unsigned long VAR_11;

  if (!FUNC_0(VAR_0))
   return -VAR_1;


  VAR_11 = FUNC_2(VAR_3, VAR_5, VAR_6);
  if (!FUNC_5(VAR_11))
   return -VAR_1;
  VAR_9 = FUNC_4(VAR_11);
 } else {
  VAR_9 = FUNC_8(VAR_5);
 }

 VAR_10 = FUNC_6(VAR_4, 1, VAR_2);
 if (!VAR_10)
  FUNC_7(VAR_4->sgl, VAR_9, FUNC_1(VAR_7), 0);
 return VAR_10;
}
