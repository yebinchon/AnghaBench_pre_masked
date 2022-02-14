
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gen_pool {int dummy; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct device*,int ,int *,int ) ;
 int FUNC_1 (struct gen_pool*,unsigned long,int ,int ,int) ;
 struct gen_pool* FUNC_2 (int,int) ;

struct gen_pool *FUNC_3(struct device *VAR_2, int VAR_3)
{
 struct gen_pool *VAR_4;
 void *VAR_5;
 dma_addr_t VAR_6;
 int VAR_7;

 VAR_4 = FUNC_2(3, -1);
 if (!VAR_4)
  return ((void*)0);
 for (VAR_7 = 0; VAR_7 < VAR_3; ++VAR_7) {
  VAR_5 = FUNC_0(VAR_2, VAR_1, &VAR_6,
           VAR_0);
  if (!VAR_5)
   return VAR_4;
  FUNC_1(VAR_4, (unsigned long) VAR_5,
      VAR_6, VAR_1, -1);
 }
 return VAR_4;
}
