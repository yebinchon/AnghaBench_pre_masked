
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcmgenet_priv {scalar_t__ base; } ;
typedef enum dma_ring_reg { ____Placeholder_dma_ring_reg } dma_ring_reg ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__* VAR_2 ;

__attribute__((used)) static inline void FUNC_1(struct bcmgenet_priv *VAR_3,
          unsigned int VAR_4, u32 VAR_5,
          enum dma_ring_reg VAR_6)
{
 FUNC_0(VAR_5, VAR_3->base + VAR_1 +
   (VAR_0 * VAR_4) +
   VAR_2[VAR_6]);
}
