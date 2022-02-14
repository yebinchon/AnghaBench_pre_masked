
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pluto {int dma_addr; int pdev; int dma_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct pluto *VAR_2)
{
 VAR_2->dma_addr = FUNC_1(VAR_2->pdev, VAR_2->dma_buf,
   VAR_1, VAR_0);

 return FUNC_0(VAR_2->pdev, VAR_2->dma_addr);
}
