
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct korina_private {int tx_irq; int rx_irq; int restart_task; int napi; TYPE_2__* rx_dma_regs; TYPE_1__* tx_dma_regs; int media_check_timer; } ;
struct TYPE_4__ {int dmasm; } ;
struct TYPE_3__ {int dmasm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *) ;
 struct korina_private* FUNC_8 (struct net_device*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int,int *) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_4)
{
 struct korina_private *VAR_5 = FUNC_8(VAR_4);
 u32 VAR_6;

 FUNC_1(&VAR_5->media_check_timer);


 FUNC_2(VAR_5->rx_irq);
 FUNC_2(VAR_5->tx_irq);

 FUNC_5(VAR_4);
 VAR_6 = FUNC_9(&VAR_5->tx_dma_regs->dmasm);
 VAR_6 = VAR_6 | VAR_2 | VAR_1;
 FUNC_10(VAR_6, &VAR_5->tx_dma_regs->dmasm);

 FUNC_4(VAR_4);
 VAR_6 = FUNC_9(&VAR_5->rx_dma_regs->dmasm);
 VAR_6 = VAR_6 | VAR_0 | VAR_3 | VAR_1;
 FUNC_10(VAR_6, &VAR_5->rx_dma_regs->dmasm);

 FUNC_7(&VAR_5->napi);

 FUNC_0(&VAR_5->restart_task);

 FUNC_6(VAR_4);

 FUNC_3(VAR_5->rx_irq, VAR_4);
 FUNC_3(VAR_5->tx_irq, VAR_4);

 return 0;
}
