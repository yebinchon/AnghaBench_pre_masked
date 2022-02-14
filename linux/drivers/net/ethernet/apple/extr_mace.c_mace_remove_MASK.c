
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int irq; } ;
struct macio_dev {int dummy; } ;
struct mace_data {int mace; int tx_dma; int rx_dma; int rx_dma_intr; int tx_dma_intr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 struct net_device* FUNC_4 (struct macio_dev*) ;
 int FUNC_5 (struct macio_dev*) ;
 int FUNC_6 (struct macio_dev*,int *) ;
 struct mace_data* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct macio_dev *VAR_0)
{
 struct net_device *VAR_1 = FUNC_4(VAR_0);
 struct mace_data *VAR_2;

 FUNC_0(VAR_1 == ((void*)0));

 FUNC_6(VAR_0, ((void*)0));

 VAR_2 = FUNC_7(VAR_1);

 FUNC_8(VAR_1);

 FUNC_1(VAR_1->irq, VAR_1);
 FUNC_1(VAR_2->tx_dma_intr, VAR_1);
 FUNC_1(VAR_2->rx_dma_intr, VAR_1);

 FUNC_3(VAR_2->rx_dma);
 FUNC_3(VAR_2->tx_dma);
 FUNC_3(VAR_2->mace);

 FUNC_2(VAR_1);

 FUNC_5(VAR_0);

 return 0;
}
