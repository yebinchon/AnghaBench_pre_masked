
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenvif_queue {int tx_irq; int tx; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct xenvif_queue *VAR_0)
{
 int VAR_1;

 FUNC_0(&VAR_0->tx, VAR_1);
 if (VAR_1)
  FUNC_1(VAR_0->tx_irq);
}
