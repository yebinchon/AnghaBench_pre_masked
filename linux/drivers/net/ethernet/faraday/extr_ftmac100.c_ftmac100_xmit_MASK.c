
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int len; } ;
struct net_device {int dummy; } ;
struct ftmac100_txdes {int dummy; } ;
struct ftmac100 {scalar_t__ tx_pending; int tx_lock; struct net_device* netdev; } ;
typedef int netdev_tx_t ;
typedef int dma_addr_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct ftmac100_txdes* FUNC_0 (struct ftmac100*) ;
 int FUNC_1 (struct ftmac100*) ;
 int FUNC_2 (struct ftmac100_txdes*,unsigned int) ;
 int FUNC_3 (struct ftmac100_txdes*,int ) ;
 int FUNC_4 (struct ftmac100_txdes*) ;
 int FUNC_5 (struct ftmac100_txdes*) ;
 int FUNC_6 (struct ftmac100_txdes*) ;
 int FUNC_7 (struct ftmac100_txdes*,struct sk_buff*) ;
 int FUNC_8 (struct ftmac100_txdes*) ;
 int FUNC_9 (struct ftmac100*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static netdev_tx_t FUNC_13(struct ftmac100 *VAR_3, struct sk_buff *VAR_4,
     dma_addr_t VAR_5)
{
 struct net_device *VAR_6 = VAR_3->netdev;
 struct ftmac100_txdes *VAR_7;
 unsigned int VAR_8 = (VAR_4->len < VAR_0) ? VAR_0 : VAR_4->len;

 VAR_7 = FUNC_0(VAR_3);
 FUNC_1(VAR_3);


 FUNC_7(VAR_7, VAR_4);
 FUNC_3(VAR_7, VAR_5);

 FUNC_5(VAR_7);
 FUNC_6(VAR_7);
 FUNC_8(VAR_7);
 FUNC_2(VAR_7, VAR_8);

 FUNC_11(&VAR_3->tx_lock);
 VAR_3->tx_pending++;
 if (VAR_3->tx_pending == VAR_2)
  FUNC_10(VAR_6);


 FUNC_4(VAR_7);
 FUNC_12(&VAR_3->tx_lock);

 FUNC_9(VAR_3);
 return VAR_1;
}
