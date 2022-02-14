
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ protocol; scalar_t__ len; int data; } ;
struct sixpack {int lock; } ;
struct TYPE_2__ {int tx_bytes; } ;
struct net_device {TYPE_1__ stats; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct sixpack* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct sixpack*,int ,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static netdev_tx_t FUNC_8(struct sk_buff *VAR_2, struct net_device *VAR_3)
{
 struct sixpack *VAR_4 = FUNC_3(VAR_3);

 if (VAR_2->protocol == FUNC_2(VAR_0))
  return FUNC_0(VAR_2);

 FUNC_6(&VAR_4->lock);

 FUNC_4(VAR_3);
 VAR_3->stats.tx_bytes += VAR_2->len;
 FUNC_5(VAR_4, VAR_2->data, VAR_2->len);
 FUNC_7(&VAR_4->lock);

 FUNC_1(VAR_2);

 return VAR_1;
}
