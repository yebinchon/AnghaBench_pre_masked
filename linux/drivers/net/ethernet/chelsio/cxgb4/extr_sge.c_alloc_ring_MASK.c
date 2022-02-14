
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 void* FUNC_0 (struct device*,size_t,int *,int ) ;
 int FUNC_1 (struct device*,size_t,void*,int ) ;
 void* FUNC_2 (size_t,size_t,int ,int) ;

__attribute__((used)) static void *FUNC_3(struct device *VAR_1, size_t VAR_2, size_t VAR_3,
   size_t VAR_4, dma_addr_t *VAR_5, void *VAR_6,
   size_t VAR_7, int VAR_8)
{
 size_t VAR_9 = VAR_2 * VAR_3 + VAR_7;
 void *VAR_10 = ((void*)0);
 void *VAR_11 = FUNC_0(VAR_1, VAR_9, VAR_5, VAR_0);

 if (!VAR_11)
  return ((void*)0);
 if (VAR_4) {
  VAR_10 = FUNC_2(VAR_4, VAR_2, VAR_0, VAR_8);

  if (!VAR_10) {
   FUNC_1(VAR_1, VAR_9, VAR_11, *VAR_5);
   return ((void*)0);
  }
 }
 if (VAR_6)
  *(void **)VAR_6 = VAR_10;
 return VAR_11;
}
