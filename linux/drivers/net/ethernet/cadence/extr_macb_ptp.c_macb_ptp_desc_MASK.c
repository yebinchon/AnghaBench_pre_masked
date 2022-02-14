
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct macb_dma_desc_ptp {int dummy; } ;
struct macb_dma_desc_64 {int dummy; } ;
struct macb_dma_desc {int dummy; } ;
struct macb {scalar_t__ hw_dma_cap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static struct macb_dma_desc_ptp *FUNC_0(struct macb *VAR_2,
            struct macb_dma_desc *VAR_3)
{
 if (VAR_2->hw_dma_cap == VAR_1)
  return (struct macb_dma_desc_ptp *)
    ((u8 *)VAR_3 + sizeof(struct macb_dma_desc));
 if (VAR_2->hw_dma_cap == VAR_0)
  return (struct macb_dma_desc_ptp *)
    ((u8 *)VAR_3 + sizeof(struct macb_dma_desc)
    + sizeof(struct macb_dma_desc_64));
 return ((void*)0);
}
