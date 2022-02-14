
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct rmnet_priv {TYPE_2__* pcpu_stats; scalar_t__ real_dev; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;
struct TYPE_3__ {int tx_drops; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 struct rmnet_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static netdev_tx_t FUNC_4(struct sk_buff *VAR_1,
     struct net_device *VAR_2)
{
 struct rmnet_priv *VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3->real_dev) {
  FUNC_2(VAR_1);
 } else {
  FUNC_3(VAR_3->pcpu_stats->stats.tx_drops);
  FUNC_0(VAR_1);
 }
 return VAR_0;
}
