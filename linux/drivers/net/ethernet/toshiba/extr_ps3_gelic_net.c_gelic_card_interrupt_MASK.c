
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int tail; } ;
struct gelic_card {int irq_status; int irq_mask; int * netdev; int tx_lock; TYPE_1__ tx_chain; scalar_t__ tx_dma_progress; int napi; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct gelic_card*,int) ;
 int FUNC_1 (struct gelic_card*,int ) ;
 int FUNC_2 (struct gelic_card*,int ) ;
 int FUNC_3 (struct gelic_card*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_8, void *VAR_9)
{
 unsigned long VAR_10;
 struct gelic_card *VAR_11 = VAR_9;
 u64 VAR_12;

 VAR_12 = VAR_11->irq_status;

 if (!VAR_12)
  return VAR_7;

 VAR_12 &= VAR_11->irq_mask;

 if (VAR_12 & VAR_1) {
  FUNC_3(VAR_11);
  FUNC_5(&VAR_11->napi);
 }

 if (VAR_12 & VAR_2) {
  FUNC_6(&VAR_11->tx_lock, VAR_10);
  VAR_11->tx_dma_progress = 0;
  FUNC_2(VAR_11, 0);

  FUNC_1(VAR_11, VAR_11->tx_chain.tail);
  FUNC_7(&VAR_11->tx_lock, VAR_10);
 }


 if (VAR_12 & VAR_0)
  FUNC_0(VAR_11, 1);







 return VAR_6;
}
