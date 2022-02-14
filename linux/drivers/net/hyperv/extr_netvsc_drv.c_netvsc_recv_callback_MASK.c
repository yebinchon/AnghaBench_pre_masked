
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {int sub_channel_index; } ;
struct TYPE_6__ {TYPE_1__ offer; } ;
struct vmbus_channel {TYPE_2__ offermsg; } ;
struct sk_buff {scalar_t__ pkt_type; } ;
struct netvsc_stats {int syncp; int multicast; int broadcast; int bytes; int packets; } ;
struct netvsc_device {int dummy; } ;
struct TYPE_8__ {scalar_t__ pktlen; } ;
struct netvsc_channel {int napi; TYPE_4__ rsc; struct netvsc_stats rx_stats; struct vmbus_channel* channel; } ;
struct TYPE_7__ {int rx_no_memory; } ;
struct net_device_context {TYPE_3__ eth_stats; } ;
struct net_device {scalar_t__ reg_state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,struct sk_buff*) ;
 struct net_device_context* FUNC_1 (struct net_device*) ;
 struct sk_buff* FUNC_2 (struct net_device*,struct netvsc_channel*) ;
 int FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct net_device *VAR_5,
    struct netvsc_device *VAR_6,
    struct netvsc_channel *VAR_7)
{
 struct net_device_context *VAR_8 = FUNC_1(VAR_5);
 struct vmbus_channel *VAR_9 = VAR_7->channel;
 u16 VAR_10 = VAR_9->offermsg.offer.sub_channel_index;
 struct sk_buff *VAR_11;
 struct netvsc_stats *VAR_12;

 if (VAR_5->reg_state != VAR_0)
  return VAR_1;


 VAR_11 = FUNC_2(VAR_5, VAR_7);

 if (FUNC_6(!VAR_11)) {
  ++VAR_8->eth_stats.rx_no_memory;
  return VAR_1;
 }

 FUNC_3(VAR_11, VAR_10);






 VAR_12 = &VAR_7->rx_stats;
 FUNC_4(&VAR_12->syncp);
 VAR_12->packets++;
 VAR_12->bytes += VAR_7->rsc.pktlen;

 if (VAR_11->pkt_type == VAR_3)
  ++VAR_12->broadcast;
 else if (VAR_11->pkt_type == VAR_4)
  ++VAR_12->multicast;
 FUNC_5(&VAR_12->syncp);

 FUNC_0(&VAR_7->napi, VAR_11);
 return VAR_2;
}
