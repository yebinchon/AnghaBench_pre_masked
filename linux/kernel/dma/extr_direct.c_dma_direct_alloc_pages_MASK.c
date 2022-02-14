
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void page ;
struct device {int dummy; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void*) ;
 void* FUNC_2 (struct device*,size_t,int *,int ,unsigned long) ;
 int FUNC_3 (struct device*,size_t,void*) ;
 int FUNC_4 (struct device*,int ) ;
 int FUNC_5 (void*,size_t) ;
 int FUNC_6 (struct device*,char*) ;
 scalar_t__ FUNC_7 (struct device*,unsigned long) ;
 scalar_t__ FUNC_8 (struct device*) ;
 int FUNC_9 (size_t) ;
 int FUNC_10 (void*,int ,size_t) ;
 void* FUNC_11 (void*) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (struct device*,int ) ;
 int FUNC_14 (unsigned long,int) ;
 void* FUNC_15 (void*) ;

void *FUNC_16(struct device *VAR_2, size_t VAR_3,
  dma_addr_t *VAR_4, gfp_t VAR_5, unsigned long VAR_6)
{
 struct page *VAR_7;
 void *VAR_8;

 VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (!VAR_7)
  return ((void*)0);

 if ((VAR_6 & VAR_1) &&
     !FUNC_8(VAR_2)) {

  if (!FUNC_1(VAR_7))
   FUNC_5(VAR_7, VAR_3);
  *VAR_4 = FUNC_13(VAR_2, FUNC_12(VAR_7));

  return VAR_7;
 }

 if (FUNC_1(VAR_7)) {






  FUNC_6(VAR_2, "Rejecting highmem page from CMA.\n");
  FUNC_3(VAR_2, VAR_3, VAR_7);
  return ((void*)0);
 }

 VAR_8 = FUNC_11(VAR_7);
 if (FUNC_8(VAR_2)) {
  FUNC_14((unsigned long)VAR_8, 1 << FUNC_9(VAR_3));
  *VAR_4 = FUNC_4(VAR_2, FUNC_12(VAR_7));
 } else {
  *VAR_4 = FUNC_13(VAR_2, FUNC_12(VAR_7));
 }
 FUNC_10(VAR_8, 0, VAR_3);

 if (FUNC_0(VAR_0) &&
     FUNC_7(VAR_2, VAR_6)) {
  FUNC_5(VAR_7, VAR_3);
  VAR_8 = FUNC_15(VAR_8);
 }

 return VAR_8;
}
