
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_desc {void* des3; void* des2; scalar_t__ des1; scalar_t__ des0; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 void* FUNC_0 (unsigned int) ;

__attribute__((used)) static void FUNC_1(struct dma_desc *VAR_2, unsigned int VAR_3)
{
 VAR_2->des0 = 0;
 VAR_2->des1 = 0;
 VAR_2->des2 = FUNC_0(VAR_3);
 VAR_2->des3 = FUNC_0(VAR_0 | VAR_1);
}
