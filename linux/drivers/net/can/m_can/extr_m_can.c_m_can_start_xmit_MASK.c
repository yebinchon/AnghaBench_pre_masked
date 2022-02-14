
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ state; } ;
struct m_can_classdev {struct sk_buff* tx_skb; int tx_work; int tx_wq; int net; TYPE_1__ can; scalar_t__ is_peripheral; } ;
typedef int netdev_tx_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct net_device*,struct sk_buff*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct m_can_classdev*) ;
 int FUNC_3 (struct net_device*,char*) ;
 struct m_can_classdev* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static netdev_tx_t FUNC_7(struct sk_buff *VAR_3,
        struct net_device *VAR_4)
{
 struct m_can_classdev *VAR_5 = FUNC_4(VAR_4);

 if (FUNC_0(VAR_4, VAR_3))
  return VAR_2;

 if (VAR_5->is_peripheral) {
  if (VAR_5->tx_skb) {
   FUNC_3(VAR_4, "hard_xmit called while tx busy\n");
   return VAR_1;
  }

  if (VAR_5->can.state == VAR_0) {
   FUNC_1(VAR_4);
  } else {





   VAR_5->tx_skb = VAR_3;
   FUNC_5(VAR_5->net);
   FUNC_6(VAR_5->tx_wq, &VAR_5->tx_work);
  }
 } else {
  VAR_5->tx_skb = VAR_3;
  return FUNC_2(VAR_5);
 }

 return VAR_2;
}
