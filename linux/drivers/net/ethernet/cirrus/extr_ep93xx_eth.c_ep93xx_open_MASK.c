
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
struct ep93xx_priv {int napi; int irq; scalar_t__ tx_pending; int tx_pending_lock; scalar_t__ tx_pointer; scalar_t__ tx_clean_pointer; scalar_t__ rx_pointer; int rx_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ep93xx_priv*) ;
 int FUNC_1 (struct ep93xx_priv*) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct ep93xx_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ,int ,int ,int ,struct net_device*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct ep93xx_priv*,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_6)
{
 struct ep93xx_priv *VAR_7 = FUNC_6(VAR_6);
 int VAR_8;

 if (FUNC_0(VAR_7))
  return -VAR_1;

 FUNC_5(&VAR_7->napi);

 if (FUNC_2(VAR_6)) {
  FUNC_4(&VAR_7->napi);
  FUNC_1(VAR_7);
  return -VAR_0;
 }

 FUNC_9(&VAR_7->rx_lock);
 VAR_7->rx_pointer = 0;
 VAR_7->tx_clean_pointer = 0;
 VAR_7->tx_pointer = 0;
 FUNC_9(&VAR_7->tx_pending_lock);
 VAR_7->tx_pending = 0;

 VAR_8 = FUNC_8(VAR_7->irq, VAR_5, VAR_2, VAR_6->name, VAR_6);
 if (VAR_8) {
  FUNC_4(&VAR_7->napi);
  FUNC_3(VAR_6);
  FUNC_1(VAR_7);
  return VAR_8;
 }

 FUNC_10(VAR_7, VAR_3, VAR_4);

 FUNC_7(VAR_6);

 return 0;
}
