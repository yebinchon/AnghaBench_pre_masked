
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wbsd_host {int dma; scalar_t__ dma_addr; int * dma_buffer; int mmc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct wbsd_host *VAR_2)
{



 if (VAR_2->dma_buffer) {
  FUNC_0(FUNC_3(VAR_2->mmc), VAR_2->dma_addr,
   VAR_1, VAR_0);
  FUNC_2(VAR_2->dma_buffer);
 }
 if (VAR_2->dma >= 0)
  FUNC_1(VAR_2->dma);

 VAR_2->dma = -1;
 VAR_2->dma_buffer = ((void*)0);
 VAR_2->dma_addr = 0;
}
