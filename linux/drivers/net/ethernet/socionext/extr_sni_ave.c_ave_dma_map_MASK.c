
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct ave_desc {size_t skbs_dmalen; int skbs_dma; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,void*,size_t,int) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, struct ave_desc *VAR_2,
         void *VAR_3, size_t VAR_4, enum dma_data_direction VAR_5,
         dma_addr_t *VAR_6)
{
 dma_addr_t VAR_7;

 VAR_7 = FUNC_0(VAR_1->dev.parent, VAR_3, VAR_4, VAR_5);
 if (FUNC_2(FUNC_1(VAR_1->dev.parent, VAR_7)))
  return -VAR_0;

 VAR_2->skbs_dma = VAR_7;
 VAR_2->skbs_dmalen = VAR_4;
 *VAR_6 = VAR_7;

 return 0;
}
