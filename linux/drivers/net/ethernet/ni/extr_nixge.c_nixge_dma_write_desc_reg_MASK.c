
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nixge_priv {scalar_t__ dma_regs; } ;
typedef scalar_t__ off_t ;
typedef int dma_addr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct nixge_priv *VAR_0, off_t VAR_1,
         dma_addr_t VAR_2)
{
 FUNC_2(FUNC_0(VAR_2), VAR_0->dma_regs + VAR_1);



}
