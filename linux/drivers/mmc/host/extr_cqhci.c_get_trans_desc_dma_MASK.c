
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct cqhci_host {int trans_desc_len; TYPE_1__* mmc; scalar_t__ trans_desc_dma_base; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {int max_segs; } ;



__attribute__((used)) static inline dma_addr_t FUNC_0(struct cqhci_host *VAR_0, u8 VAR_1)
{
 return VAR_0->trans_desc_dma_base +
  (VAR_0->mmc->max_segs * VAR_1 *
   VAR_0->trans_desc_len);
}
