
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ produce_idx; scalar_t__ count; } ;
struct emac_rx_queue {TYPE_1__ rfd; } ;
struct emac_adapter {int rfd_size; } ;
typedef int dma_addr_t ;


 int * FUNC_0 (struct emac_rx_queue*,int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct emac_adapter *VAR_0,
       struct emac_rx_queue *VAR_1,
       dma_addr_t VAR_2)
{
 u32 *VAR_3 = FUNC_0(VAR_1, VAR_0->rfd_size, VAR_1->rfd.produce_idx);

 *(VAR_3++) = FUNC_1(VAR_2);
 *VAR_3 = FUNC_2(VAR_2);

 if (++VAR_1->rfd.produce_idx == VAR_1->rfd.count)
  VAR_1->rfd.produce_idx = 0;
}
