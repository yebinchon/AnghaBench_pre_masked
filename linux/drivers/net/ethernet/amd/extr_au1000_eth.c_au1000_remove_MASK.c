
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dev; } ;
struct net_device {int dummy; } ;
struct au1000_private {int enable; int mac; int macdma; int dma_addr; scalar_t__ vaddr; scalar_t__* tx_db_inuse; scalar_t__* rx_db_inuse; int mii_bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct au1000_private*,scalar_t__) ;
 int FUNC_1 (int *,int,void*,int ,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct au1000_private* FUNC_6 (struct net_device*) ;
 struct net_device* FUNC_7 (struct platform_device*) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct resource*) ;
 int FUNC_11 (struct net_device*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_7)
{
 struct net_device *VAR_8 = FUNC_7(VAR_7);
 struct au1000_private *VAR_9 = FUNC_6(VAR_8);
 int VAR_10;
 struct resource *VAR_11, *VAR_12;

 FUNC_11(VAR_8);
 FUNC_5(VAR_9->mii_bus);
 FUNC_4(VAR_9->mii_bus);

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
  if (VAR_9->rx_db_inuse[VAR_10])
   FUNC_0(VAR_9, VAR_9->rx_db_inuse[VAR_10]);

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++)
  if (VAR_9->tx_db_inuse[VAR_10])
   FUNC_0(VAR_9, VAR_9->tx_db_inuse[VAR_10]);

 FUNC_1(&VAR_7->dev, VAR_2 * (VAR_5 + VAR_3),
   (void *)VAR_9->vaddr, VAR_9->dma_addr,
   VAR_0);

 FUNC_3(VAR_9->macdma);
 FUNC_3(VAR_9->mac);
 FUNC_3(VAR_9->enable);

 VAR_11 = FUNC_8(VAR_7, VAR_1, 2);
 FUNC_9(VAR_11->start, FUNC_10(VAR_11));

 VAR_11 = FUNC_8(VAR_7, VAR_1, 0);
 FUNC_9(VAR_11->start, FUNC_10(VAR_11));

 VAR_12 = FUNC_8(VAR_7, VAR_1, 1);
 FUNC_9(VAR_12->start, FUNC_10(VAR_12));

 FUNC_2(VAR_8);

 return 0;
}
