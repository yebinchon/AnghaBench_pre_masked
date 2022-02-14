
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gen_pool {int dummy; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct device*,size_t,int *,int ) ;
 int FUNC_1 (struct gen_pool*,unsigned long,int ,size_t,int) ;
 unsigned long FUNC_2 (struct gen_pool*,size_t) ;
 size_t FUNC_3 (size_t,int ) ;

void *FUNC_4(struct gen_pool *VAR_2, struct device *VAR_3,
   size_t VAR_4)
{
 dma_addr_t VAR_5;
 unsigned long VAR_6;
 size_t VAR_7;

 if (!VAR_2)
  return ((void*)0);
 VAR_6 = FUNC_2(VAR_2, VAR_4);
 while (!VAR_6) {
  VAR_7 = FUNC_3(VAR_4, VAR_1);
  VAR_6 = (unsigned long) FUNC_0(VAR_3,
      VAR_7, &VAR_5, VAR_0);
  if (!VAR_6)
   return ((void*)0);
  FUNC_1(VAR_2, VAR_6, VAR_5, VAR_7, -1);
  VAR_6 = FUNC_2(VAR_2, VAR_4);
 }
 return (void *) VAR_6;
}
