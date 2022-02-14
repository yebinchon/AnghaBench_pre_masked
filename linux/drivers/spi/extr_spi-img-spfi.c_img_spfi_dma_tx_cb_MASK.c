
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct img_spfi {int tx_dma_busy; int lock; int master; int rx_dma_busy; } ;


 int FUNC_0 (struct img_spfi*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
 struct img_spfi *VAR_1 = VAR_0;
 unsigned long VAR_2;

 FUNC_0(VAR_1);

 FUNC_2(&VAR_1->lock, VAR_2);
 VAR_1->tx_dma_busy = 0;
 if (!VAR_1->rx_dma_busy)
  FUNC_1(VAR_1->master);
 FUNC_3(&VAR_1->lock, VAR_2);
}
