
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct kvaser_pciefd {scalar_t__ reg_base; TYPE_1__* pci; int * dma_data; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (struct kvaser_pciefd*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct kvaser_pciefd *VAR_14)
{
 int VAR_15;
 u32 VAR_16;
 dma_addr_t VAR_17[VAR_3];


 FUNC_3(0, VAR_14->reg_base + VAR_11);
 for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++) {
  unsigned int VAR_18 = VAR_4 + 8 * VAR_15;

  VAR_14->dma_data[VAR_15] =
   FUNC_1(&VAR_14->pci->dev,
         VAR_5,
         &VAR_17[VAR_15],
         VAR_2);

  if (!VAR_14->dma_data[VAR_15] || !VAR_17[VAR_15]) {
   FUNC_0(&VAR_14->pci->dev, "Rx dma_alloc(%u) failure\n",
    VAR_5);
   return -VAR_1;
  }

  FUNC_4(VAR_14, VAR_17[VAR_15], VAR_18);
 }


 FUNC_3(VAR_6 | VAR_7 |
    VAR_8,
    VAR_14->reg_base + VAR_9);

 VAR_16 = FUNC_2(VAR_14->reg_base + VAR_13);
 if (!(VAR_16 & VAR_12)) {
  FUNC_0(&VAR_14->pci->dev, "DMA not idle before enabling\n");
  return -VAR_0;
 }


 FUNC_3(VAR_10,
    VAR_14->reg_base + VAR_11);

 return 0;
}
