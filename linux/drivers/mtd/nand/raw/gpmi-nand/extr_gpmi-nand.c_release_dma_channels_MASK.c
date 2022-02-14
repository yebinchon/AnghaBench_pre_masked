
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpmi_nand_data {int ** dma_chans; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct gpmi_nand_data *VAR_1)
{
 unsigned int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (VAR_1->dma_chans[VAR_2]) {
   FUNC_0(VAR_1->dma_chans[VAR_2]);
   VAR_1->dma_chans[VAR_2] = ((void*)0);
  }
}
