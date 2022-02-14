
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct ave_desc {scalar_t__ skbs_dma; int skbs_dmalen; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 (int ,scalar_t__,int ,int) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0, struct ave_desc *VAR_1,
     enum dma_data_direction VAR_2)
{
 if (!VAR_1->skbs_dma)
  return;

 FUNC_0(VAR_0->dev.parent,
    VAR_1->skbs_dma, VAR_1->skbs_dmalen, VAR_2);
 VAR_1->skbs_dma = 0;
}
