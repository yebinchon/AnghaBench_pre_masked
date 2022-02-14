
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ data; } ;
struct TYPE_3__ {int tx_dropped; } ;
struct net_device {TYPE_1__ stats; } ;
typedef int netdev_tx_t ;
struct TYPE_4__ {int (* xmit ) (struct sk_buff*,struct net_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 TYPE_2__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int,int ) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,struct net_device*) ;

__attribute__((used)) static netdev_tx_t FUNC_7(struct sk_buff *VAR_2, struct net_device *VAR_3)
{
 int VAR_4 = VAR_0 - VAR_2->len;
 if (VAR_4 > 0) {
  int VAR_5 = VAR_2->len;
  if (FUNC_5(VAR_2) < VAR_4)
   if (FUNC_3(VAR_2, 0, VAR_4, VAR_1)) {
    VAR_3->stats.tx_dropped++;
    FUNC_0(VAR_2);
    return 0;
   }
  FUNC_4(VAR_2, VAR_4);
  FUNC_2(VAR_2->data + VAR_5, 0, VAR_4);
 }
 return FUNC_1(VAR_3)->xmit(VAR_2, VAR_3);
}
