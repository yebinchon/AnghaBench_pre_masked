
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcmgenet_priv {scalar_t__ base; } ;
typedef enum dma_reg { ____Placeholder_dma_reg } dma_reg ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(struct bcmgenet_priv *VAR_3,
          enum dma_reg VAR_4)
{
 return FUNC_0(VAR_3->base + VAR_1 +
         VAR_0 + VAR_2[VAR_4]);
}
