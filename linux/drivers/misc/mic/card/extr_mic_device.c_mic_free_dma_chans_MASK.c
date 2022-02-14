
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mic_driver {int num_dma_ch; int ** dma_ch; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct mic_driver *VAR_0)
{
 int VAR_1 = 0;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_dma_ch; VAR_1++) {
  FUNC_0(VAR_0->dma_ch[VAR_1]);
  VAR_0->dma_ch[VAR_1] = ((void*)0);
 }
 VAR_0->num_dma_ch = 0;
}
