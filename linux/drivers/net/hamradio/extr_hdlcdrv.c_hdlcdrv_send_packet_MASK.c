
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ protocol; scalar_t__* data; int len; } ;
struct net_device {int dummy; } ;
struct hdlcdrv_state {struct sk_buff* skb; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct hdlcdrv_state*,scalar_t__*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 struct hdlcdrv_state* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static netdev_tx_t FUNC_6(struct sk_buff *VAR_2,
           struct net_device *VAR_3)
{
 struct hdlcdrv_state *VAR_4 = FUNC_4(VAR_3);

 if (VAR_2->protocol == FUNC_3(VAR_0))
  return FUNC_0(VAR_2);

 if (VAR_2->data[0] != 0) {
  FUNC_2(VAR_4, VAR_2->data, VAR_2->len);
  FUNC_1(VAR_2);
  return VAR_1;
 }
 if (VAR_4->skb) {
  FUNC_1(VAR_2);
  return VAR_1;
 }
 FUNC_5(VAR_3);
 VAR_4->skb = VAR_2;
 return VAR_1;
}
