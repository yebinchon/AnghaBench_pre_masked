
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pch_gbe_hw {TYPE_1__* reg; } ;
struct TYPE_2__ {int DMA_CTRL; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct pch_gbe_hw *VAR_1)
{
 u32 VAR_2;


 VAR_2 = FUNC_0(&VAR_1->reg->DMA_CTRL);
 VAR_2 &= ~VAR_0;
 FUNC_1(VAR_2, &VAR_1->reg->DMA_CTRL);
}
