
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct hns3_nic_priv {TYPE_2__* ring_data; struct hnae3_handle* ae_handle; } ;
struct TYPE_12__ {int int_gl; int gl_adapt_enable; } ;
struct TYPE_13__ {TYPE_5__ coal; } ;
struct TYPE_10__ {int int_gl; int gl_adapt_enable; } ;
struct TYPE_11__ {TYPE_3__ coal; } ;
struct hns3_enet_tqp_vector {TYPE_6__ rx_group; TYPE_4__ tx_group; } ;
struct TYPE_14__ {int num_tqps; int int_rl_setting; } ;
struct hnae3_handle {TYPE_7__ kinfo; } ;
struct ethtool_coalesce {int rx_coalesce_usecs_high; int tx_coalesce_usecs_high; int rx_coalesce_usecs; int tx_coalesce_usecs; int use_adaptive_rx_coalesce; int use_adaptive_tx_coalesce; } ;
struct TYPE_9__ {TYPE_1__* ring; } ;
struct TYPE_8__ {struct hns3_enet_tqp_vector* tqp_vector; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,char*,int,int) ;
 struct hns3_nic_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, u32 VAR_3,
           struct ethtool_coalesce *VAR_4)
{
 struct hns3_enet_tqp_vector *VAR_5, *VAR_6;
 struct hns3_nic_priv *VAR_7 = FUNC_2(VAR_2);
 struct hnae3_handle *VAR_8 = VAR_7->ae_handle;
 u16 VAR_9 = VAR_8->kinfo.num_tqps;

 if (FUNC_0(VAR_2))
  return -VAR_0;

 if (VAR_3 >= VAR_9) {
  FUNC_1(VAR_2,
      "Invalid queue value %d! Queue max id=%d\n",
      VAR_3, VAR_9 - 1);
  return -VAR_1;
 }

 VAR_5 = VAR_7->ring_data[VAR_3].ring->tqp_vector;
 VAR_6 = VAR_7->ring_data[VAR_9 + VAR_3].ring->tqp_vector;

 VAR_4->use_adaptive_tx_coalesce =
   VAR_5->tx_group.coal.gl_adapt_enable;
 VAR_4->use_adaptive_rx_coalesce =
   VAR_6->rx_group.coal.gl_adapt_enable;

 VAR_4->tx_coalesce_usecs = VAR_5->tx_group.coal.int_gl;
 VAR_4->rx_coalesce_usecs = VAR_6->rx_group.coal.int_gl;

 VAR_4->tx_coalesce_usecs_high = VAR_8->kinfo.int_rl_setting;
 VAR_4->rx_coalesce_usecs_high = VAR_8->kinfo.int_rl_setting;

 return 0;
}
