
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;
struct fec_enet_private {struct fec_enet_priv_tx_q** tx_queue; } ;
struct fec_enet_priv_tx_q {int tx_stop_threshold; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int FUNC_0 (struct fec_enet_priv_tx_q*) ;
 int FUNC_1 (struct fec_enet_priv_tx_q*,struct sk_buff*,struct net_device*) ;
 int FUNC_2 (struct fec_enet_priv_tx_q*,struct sk_buff*,struct net_device*) ;
 struct netdev_queue* FUNC_3 (struct net_device*,unsigned short) ;
 struct fec_enet_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct netdev_queue*) ;
 unsigned short FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static netdev_tx_t
FUNC_8(struct sk_buff *VAR_1, struct net_device *VAR_2)
{
 struct fec_enet_private *VAR_3 = FUNC_4(VAR_2);
 int VAR_4;
 unsigned short VAR_5;
 struct fec_enet_priv_tx_q *VAR_6;
 struct netdev_queue *VAR_7;
 int VAR_8;

 VAR_5 = FUNC_6(VAR_1);
 VAR_6 = VAR_3->tx_queue[VAR_5];
 VAR_7 = FUNC_3(VAR_2, VAR_5);

 if (FUNC_7(VAR_1))
  VAR_8 = FUNC_2(VAR_6, VAR_1, VAR_2);
 else
  VAR_8 = FUNC_1(VAR_6, VAR_1, VAR_2);
 if (VAR_8)
  return VAR_8;

 VAR_4 = FUNC_0(VAR_6);
 if (VAR_4 <= VAR_6->tx_stop_threshold)
  FUNC_5(VAR_7);

 return VAR_0;
}
