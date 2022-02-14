
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scatterlist {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scatterlist*) ;
 int FUNC_1 (struct scatterlist*) ;

__attribute__((used)) static u32 FUNC_2(struct scatterlist *VAR_2, dma_addr_t *VAR_3)
{
 *VAR_3 = FUNC_0(VAR_2);

 return ((((*VAR_3) & (VAR_1 - 1)) + FUNC_1(VAR_2)) +
   (VAR_1 - 1)) >> VAR_0;
}
