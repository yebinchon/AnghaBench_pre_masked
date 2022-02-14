
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_desc {void* des1; void* des0; } ;
typedef int dma_addr_t ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct dma_desc *VAR_0, dma_addr_t VAR_1)
{
 VAR_0->des0 = FUNC_0(FUNC_1(VAR_1));
 VAR_0->des1 = FUNC_0(FUNC_2(VAR_1));
}
