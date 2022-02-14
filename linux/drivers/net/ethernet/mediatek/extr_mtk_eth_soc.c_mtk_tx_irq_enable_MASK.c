
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_eth {int tx_irq_lock; int tx_int_mask_reg; } ;


 int FUNC_0 (struct mtk_eth*,int ) ;
 int FUNC_1 (struct mtk_eth*,int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_4(struct mtk_eth *VAR_0, u32 VAR_1)
{
 unsigned long VAR_2;
 u32 VAR_3;

 FUNC_2(&VAR_0->tx_irq_lock, VAR_2);
 VAR_3 = FUNC_0(VAR_0, VAR_0->tx_int_mask_reg);
 FUNC_1(VAR_0, VAR_3 | VAR_1, VAR_0->tx_int_mask_reg);
 FUNC_3(&VAR_0->tx_irq_lock, VAR_2);
}
