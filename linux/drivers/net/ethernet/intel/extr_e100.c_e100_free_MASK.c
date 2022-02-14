
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nic {int * mem; int dma_addr; int pdev; } ;
struct mem {int dummy; } ;


 int FUNC_0 (int ,int,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct nic *VAR_0)
{
 if (VAR_0->mem) {
  FUNC_0(VAR_0->pdev, sizeof(struct mem),
   VAR_0->mem, VAR_0->dma_addr);
  VAR_0->mem = ((void*)0);
 }
}
