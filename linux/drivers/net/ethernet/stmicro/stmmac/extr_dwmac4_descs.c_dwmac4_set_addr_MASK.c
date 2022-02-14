
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_desc {scalar_t__ des1; int des0; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct dma_desc *VAR_0, dma_addr_t VAR_1)
{
 VAR_0->des0 = FUNC_0(VAR_1);
 VAR_0->des1 = 0;
}
