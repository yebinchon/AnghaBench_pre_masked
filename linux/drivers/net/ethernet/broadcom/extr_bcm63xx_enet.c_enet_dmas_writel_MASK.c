
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bcm_enet_priv {int dma_chan_width; } ;


 scalar_t__* VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct bcm_enet_priv *VAR_1,
           u32 VAR_2, u32 VAR_3, int VAR_4)
{
 FUNC_0(VAR_2, VAR_0[2] + VAR_3 + VAR_4 * VAR_1->dma_chan_width);
}
