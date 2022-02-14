
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gen_pool_chunk {int end_addr; int start_addr; scalar_t__ phys_addr; } ;
struct gen_pool {int dummy; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct device*,size_t,void*,int ) ;

__attribute__((used)) static void FUNC_1(struct gen_pool *VAR_0,
         struct gen_pool_chunk *VAR_1, void *VAR_2)
{
 size_t VAR_3 = VAR_1->end_addr - VAR_1->start_addr + 1;

 FUNC_0((struct device *) VAR_2, VAR_3,
    (void *) VAR_1->start_addr,
    (dma_addr_t) VAR_1->phys_addr);
}
