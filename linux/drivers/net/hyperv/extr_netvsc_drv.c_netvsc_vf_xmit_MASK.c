
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {unsigned int len; int queue_mapping; struct net_device* dev; } ;
struct netvsc_vf_pcpu_stats {unsigned int tx_bytes; int syncp; int tx_packets; } ;
struct net_device_context {TYPE_1__* vf_stats; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int slave_dev_queue_mapping; } ;
struct TYPE_3__ {int tx_dropped; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int) ;
 struct net_device_context* FUNC_2 (struct net_device*) ;
 TYPE_2__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ) ;
 struct netvsc_vf_pcpu_stats* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_2, struct net_device *VAR_3,
     struct sk_buff *VAR_4)
{
 struct net_device_context *VAR_5 = FUNC_2(VAR_2);
 unsigned int VAR_6 = VAR_4->len;
 int VAR_7;

 VAR_4->dev = VAR_3;
 VAR_4->queue_mapping = FUNC_3(VAR_4)->slave_dev_queue_mapping;

 VAR_7 = FUNC_0(VAR_4);
 if (FUNC_1(VAR_7 == VAR_1 || VAR_7 == VAR_0)) {
  struct netvsc_vf_pcpu_stats *VAR_8
   = FUNC_5(VAR_5->vf_stats);

  FUNC_6(&VAR_8->syncp);
  VAR_8->tx_packets++;
  VAR_8->tx_bytes += VAR_6;
  FUNC_7(&VAR_8->syncp);
 } else {
  FUNC_4(VAR_5->vf_stats->tx_dropped);
 }

 return VAR_7;
}
