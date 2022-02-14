
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bcmgenet_priv {TYPE_1__* hw_params; int dev; } ;
struct TYPE_2__ {int rx_queues; int tx_queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bcmgenet_priv*,int ) ;
 int FUNC_1 (struct bcmgenet_priv*,int,int ) ;
 int FUNC_2 (struct bcmgenet_priv*,int ) ;
 int FUNC_3 (struct bcmgenet_priv*,int,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct bcmgenet_priv *VAR_7)
{
 int VAR_8 = 0;
 int VAR_9 = 0;
 u32 VAR_10;
 u32 VAR_11;
 int VAR_12;


 VAR_10 = FUNC_2(VAR_7, VAR_0);
 VAR_10 &= ~VAR_2;
 FUNC_3(VAR_7, VAR_10, VAR_0);


 while (VAR_9++ < VAR_5) {
  VAR_10 = FUNC_2(VAR_7, VAR_4);
  if (VAR_10 & VAR_1)
   break;

  FUNC_5(1);
 }

 if (VAR_9 == VAR_5) {
  FUNC_4(VAR_7->dev, "Timed out while disabling TX DMA\n");
  VAR_8 = -VAR_6;
 }


 FUNC_6(10000, 20000);


 VAR_10 = FUNC_0(VAR_7, VAR_0);
 VAR_10 &= ~VAR_2;
 FUNC_1(VAR_7, VAR_10, VAR_0);

 VAR_9 = 0;

 while (VAR_9++ < VAR_5) {
  VAR_10 = FUNC_0(VAR_7, VAR_4);
  if (VAR_10 & VAR_1)
   break;

  FUNC_5(1);
 }

 if (VAR_9 == VAR_5) {
  FUNC_4(VAR_7->dev, "Timed out while disabling RX DMA\n");
  VAR_8 = -VAR_6;
 }

 VAR_11 = 0;
 for (VAR_12 = 0; VAR_12 < VAR_7->hw_params->rx_queues; VAR_12++)
  VAR_11 |= (1 << (VAR_12 + VAR_3));
 VAR_10 = FUNC_0(VAR_7, VAR_0);
 VAR_10 &= ~VAR_11;
 FUNC_1(VAR_7, VAR_10, VAR_0);

 VAR_11 = 0;
 for (VAR_12 = 0; VAR_12 < VAR_7->hw_params->tx_queues; VAR_12++)
  VAR_11 |= (1 << (VAR_12 + VAR_3));
 VAR_10 = FUNC_2(VAR_7, VAR_0);
 VAR_10 &= ~VAR_11;
 FUNC_3(VAR_7, VAR_10, VAR_0);

 return VAR_8;
}
