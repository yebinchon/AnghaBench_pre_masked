
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


typedef size_t u32 ;
struct net_device {int dummy; } ;
struct hns3_nic_priv {TYPE_2__* ring_data; struct hnae3_handle* ae_handle; } ;
struct TYPE_12__ {int int_gl; int gl_adapt_enable; } ;
struct TYPE_13__ {TYPE_5__ coal; } ;
struct TYPE_10__ {int int_gl; int gl_adapt_enable; } ;
struct TYPE_11__ {TYPE_3__ coal; } ;
struct hns3_enet_tqp_vector {TYPE_6__ rx_group; TYPE_4__ tx_group; } ;
struct TYPE_14__ {int num_tqps; int int_rl_setting; } ;
struct hnae3_handle {TYPE_7__ kinfo; } ;
struct ethtool_coalesce {int rx_coalesce_usecs; int tx_coalesce_usecs; int use_adaptive_rx_coalesce; int use_adaptive_tx_coalesce; } ;
struct TYPE_9__ {TYPE_1__* ring; } ;
struct TYPE_8__ {struct hns3_enet_tqp_vector* tqp_vector; } ;


 int FUNC_0 (struct hns3_enet_tqp_vector*,int ) ;
 int FUNC_1 (struct hns3_enet_tqp_vector*,int ) ;
 int FUNC_2 (struct hns3_enet_tqp_vector*,int ) ;
 struct hns3_nic_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0,
     struct ethtool_coalesce *VAR_1,
     u32 VAR_2)
{
 struct hns3_enet_tqp_vector *VAR_3, *VAR_4;
 struct hns3_nic_priv *VAR_5 = FUNC_3(VAR_0);
 struct hnae3_handle *VAR_6 = VAR_5->ae_handle;
 int VAR_7 = VAR_6->kinfo.num_tqps;

 VAR_3 = VAR_5->ring_data[VAR_2].ring->tqp_vector;
 VAR_4 = VAR_5->ring_data[VAR_7 + VAR_2].ring->tqp_vector;

 VAR_3->tx_group.coal.gl_adapt_enable =
    VAR_1->use_adaptive_tx_coalesce;
 VAR_4->rx_group.coal.gl_adapt_enable =
    VAR_1->use_adaptive_rx_coalesce;

 VAR_3->tx_group.coal.int_gl = VAR_1->tx_coalesce_usecs;
 VAR_4->rx_group.coal.int_gl = VAR_1->rx_coalesce_usecs;

 FUNC_2(VAR_3,
           VAR_3->tx_group.coal.int_gl);
 FUNC_1(VAR_4,
           VAR_4->rx_group.coal.int_gl);

 FUNC_0(VAR_3, VAR_6->kinfo.int_rl_setting);
 FUNC_0(VAR_4, VAR_6->kinfo.int_rl_setting);
}
