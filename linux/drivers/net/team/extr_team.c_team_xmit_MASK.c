
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct team_pcpu_stats {unsigned int tx_bytes; int syncp; int tx_packets; } ;
struct TYPE_3__ {int (* transmit ) (struct team*,struct sk_buff*) ;} ;
struct team {TYPE_2__* pcpu_stats; TYPE_1__ ops; } ;
struct sk_buff {unsigned int len; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;
struct TYPE_4__ {int tx_dropped; } ;


 int VAR_0 ;
 struct team* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct team*,struct sk_buff*) ;
 int FUNC_2 (struct team*,struct sk_buff*) ;
 int FUNC_3 (int ) ;
 struct team_pcpu_stats* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static netdev_tx_t FUNC_7(struct sk_buff *VAR_1, struct net_device *VAR_2)
{
 struct team *VAR_3 = FUNC_0(VAR_2);
 bool VAR_4;
 unsigned int VAR_5 = VAR_1->len;

 VAR_4 = FUNC_2(VAR_3, VAR_1);
 if (!VAR_4)
  VAR_4 = VAR_3->ops.transmit(VAR_3, VAR_1);
 if (VAR_4) {
  struct team_pcpu_stats *VAR_6;

  VAR_6 = FUNC_4(VAR_3->pcpu_stats);
  FUNC_5(&VAR_6->syncp);
  VAR_6->tx_packets++;
  VAR_6->tx_bytes += VAR_5;
  FUNC_6(&VAR_6->syncp);
 } else {
  FUNC_3(VAR_3->pcpu_stats->tx_dropped);
 }

 return VAR_0;
}
