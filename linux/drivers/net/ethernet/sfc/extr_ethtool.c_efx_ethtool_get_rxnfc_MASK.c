
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int flow_type; } ;
struct ethtool_rxnfc {int cmd; int data; int flow_type; int rule_cnt; int rss_context; TYPE_1__ fs; } ;
struct efx_rss_context {int rx_hash_udp_4tuple; } ;
struct efx_nic {int n_rx_channels; int rss_lock; struct efx_rss_context rss_context; } ;
typedef int s32 ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;






 int FUNC_0 (struct efx_nic*,TYPE_1__*,int *) ;
 int FUNC_1 (struct efx_nic*,int ) ;
 void* FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (struct efx_nic*,int ,int *,int) ;
 struct efx_rss_context* FUNC_4 (struct efx_nic*,int ) ;
 int FUNC_5 (struct efx_rss_context*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct efx_nic* FUNC_8 (struct net_device*) ;

__attribute__((used)) static int
FUNC_9(struct net_device *VAR_9,
        struct ethtool_rxnfc *VAR_10, u32 *VAR_11)
{
 struct efx_nic *VAR_12 = FUNC_8(VAR_9);
 u32 VAR_13 = 0;
 s32 VAR_14 = 0;

 switch (VAR_10->cmd) {
 case 136:
  VAR_10->data = VAR_12->n_rx_channels;
  return 0;

 case 137: {
  struct efx_rss_context *VAR_15 = &VAR_12->rss_context;

  FUNC_6(&VAR_12->rss_lock);
  if (VAR_10->flow_type & VAR_3 && VAR_10->rss_context) {
   VAR_15 = FUNC_4(VAR_12, VAR_10->rss_context);
   if (!VAR_15) {
    VAR_14 = -VAR_1;
    goto out_unlock;
   }
  }
  VAR_10->data = 0;
  if (!FUNC_5(VAR_15))
   goto out_unlock;
  switch (VAR_10->flow_type & ~VAR_3) {
  case 129:
   if (VAR_15->rx_hash_udp_4tuple)

  case 131:
    VAR_10->data |= VAR_6 | VAR_7;

  case 133:
  case 142:
  case 135:
   VAR_10->data |= VAR_5 | VAR_4;
   break;
  case 128:
   if (VAR_15->rx_hash_udp_4tuple)

  case 130:
    VAR_10->data |= VAR_6 | VAR_7;

  case 132:
  case 141:
  case 134:
   VAR_10->data |= VAR_5 | VAR_4;
   break;
  default:
   break;
  }
out_unlock:
  FUNC_7(&VAR_12->rss_lock);
  return VAR_14;
 }

 case 139:
  VAR_10->data = FUNC_2(VAR_12);
  if (VAR_10->data == 0)
   return -VAR_2;
  VAR_10->data |= VAR_8;
  VAR_10->rule_cnt =
   FUNC_1(VAR_12, VAR_0);
  return 0;

 case 138:
  if (FUNC_2(VAR_12) == 0)
   return -VAR_2;
  VAR_14 = FUNC_0(VAR_12, &VAR_10->fs, &VAR_13);
  if (VAR_14 < 0)
   return VAR_14;
  if (VAR_10->fs.flow_type & VAR_3)
   VAR_10->rss_context = VAR_13;
  return 0;

 case 140:
  VAR_10->data = FUNC_2(VAR_12);
  if (VAR_10->data == 0)
   return -VAR_2;
  VAR_14 = FUNC_3(VAR_12, VAR_0,
        VAR_11, VAR_10->rule_cnt);
  if (VAR_14 < 0)
   return VAR_14;
  VAR_10->rule_cnt = VAR_14;
  return 0;

 default:
  return -VAR_2;
 }
}
