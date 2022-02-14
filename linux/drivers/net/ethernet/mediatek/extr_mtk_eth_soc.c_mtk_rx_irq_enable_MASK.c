
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_eth {int rx_irq_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtk_eth*,int ) ;
 int FUNC_1 (struct mtk_eth*,int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_4(struct mtk_eth *VAR_1, u32 VAR_2)
{
 unsigned long VAR_3;
 u32 VAR_4;

 FUNC_2(&VAR_1->rx_irq_lock, VAR_3);
 VAR_4 = FUNC_0(VAR_1, VAR_0);
 FUNC_1(VAR_1, VAR_4 | VAR_2, VAR_0);
 FUNC_3(&VAR_1->rx_irq_lock, VAR_3);
}
