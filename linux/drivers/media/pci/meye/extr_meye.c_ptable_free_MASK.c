
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_4__ {scalar_t__ mchip_dmahandle; int * mchip_ptable_toc; int ** mchip_ptable; TYPE_1__* mchip_dev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int *,scalar_t__) ;
 int FUNC_1 (int **,int ,int) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void FUNC_2(void)
{
 u32 *VAR_3;
 int VAR_4;

 VAR_3 = VAR_2.mchip_ptable_toc;
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  dma_addr_t VAR_5 = (dma_addr_t) *VAR_3;
  if (VAR_2.mchip_ptable[VAR_4])
   FUNC_0(&VAR_2.mchip_dev->dev,
       VAR_1,
       VAR_2.mchip_ptable[VAR_4], VAR_5);
  VAR_3++;
 }

 if (VAR_2.mchip_ptable_toc)
  FUNC_0(&VAR_2.mchip_dev->dev,
      VAR_1,
      VAR_2.mchip_ptable_toc,
      VAR_2.mchip_dmahandle);

 FUNC_1(VAR_2.mchip_ptable, 0, sizeof(VAR_2.mchip_ptable));
 VAR_2.mchip_ptable_toc = ((void*)0);
 VAR_2.mchip_dmahandle = 0;
}
