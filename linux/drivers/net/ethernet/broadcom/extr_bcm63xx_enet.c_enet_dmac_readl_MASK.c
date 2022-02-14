
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm_enet_priv {int dma_chan_width; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__* VAR_0 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_2(struct bcm_enet_priv *VAR_1, u32 VAR_2, int VAR_3)
{
 return FUNC_1(VAR_0[1] +
  FUNC_0(VAR_2) + VAR_3 * VAR_1->dma_chan_width);
}
