
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gelic_descr {int dmac_cmd_status; } ;
typedef enum gelic_descr_dma_status { ____Placeholder_gelic_descr_dma_status } gelic_descr_dma_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static enum gelic_descr_dma_status
FUNC_1(struct gelic_descr *VAR_1)
{
 return FUNC_0(VAR_1->dmac_cmd_status) & VAR_0;
}
