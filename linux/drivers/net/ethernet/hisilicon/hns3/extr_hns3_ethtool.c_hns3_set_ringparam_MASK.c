
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct net_device {TYPE_3__* netdev_ops; } ;
struct hns3_nic_priv {TYPE_1__* ring_data; struct hnae3_handle* ae_handle; } ;
struct hns3_enet_ring {int dummy; } ;
struct TYPE_6__ {size_t num_tqps; } ;
struct hnae3_handle {TYPE_2__ kinfo; } ;
struct ethtool_ringparam {int rx_pending; int tx_pending; } ;
struct TYPE_8__ {scalar_t__ desc_num; } ;
struct TYPE_7__ {int (* ndo_open ) (struct net_device*) ;int (* ndo_stop ) (struct net_device*) ;} ;
struct TYPE_5__ {TYPE_4__* ring; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct hns3_enet_ring* FUNC_1 (struct hns3_nic_priv*) ;
 int FUNC_2 (struct hns3_nic_priv*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct net_device*,struct ethtool_ringparam*) ;
 int FUNC_4 (struct hns3_enet_ring*) ;
 int FUNC_5 (struct hns3_nic_priv*) ;
 int FUNC_6 (struct hns3_enet_ring*) ;
 int FUNC_7 (TYPE_4__*,struct hns3_enet_ring*,int) ;
 int FUNC_8 (struct net_device*,char*,...) ;
 int FUNC_9 (struct net_device*,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 struct hns3_nic_priv* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;

__attribute__((used)) static int FUNC_14(struct net_device *VAR_2,
         struct ethtool_ringparam *VAR_3)
{
 struct hns3_nic_priv *VAR_4 = FUNC_10(VAR_2);
 struct hnae3_handle *VAR_5 = VAR_4->ae_handle;
 struct hns3_enet_ring *VAR_6;
 bool VAR_7 = FUNC_11(VAR_2);
 u32 VAR_8, VAR_9;
 u32 VAR_10, VAR_11;
 u16 VAR_12 = VAR_5->kinfo.num_tqps;
 int VAR_13, VAR_14;

 VAR_13 = FUNC_3(VAR_2, VAR_3);
 if (VAR_13)
  return VAR_13;


 VAR_9 = FUNC_0(VAR_3->tx_pending, VAR_1);
 VAR_11 = FUNC_0(VAR_3->rx_pending, VAR_1);
 VAR_8 = VAR_4->ring_data[0].ring->desc_num;
 VAR_10 = VAR_4->ring_data[VAR_12].ring->desc_num;
 if (VAR_8 == VAR_9 &&
     VAR_10 == VAR_11)
  return 0;

 VAR_6 = FUNC_1(VAR_4);
 if (!VAR_6) {
  FUNC_8(VAR_2,
      "backup ring param failed by allocating memory fail\n");
  return -VAR_0;
 }

 FUNC_9(VAR_2,
      "Changing Tx/Rx ring depth from %d/%d to %d/%d\n",
      VAR_8, VAR_10,
      VAR_9, VAR_11);

 if (VAR_7)
  VAR_2->netdev_ops->ndo_stop(VAR_2);

 FUNC_2(VAR_4, VAR_9, VAR_11);
 VAR_13 = FUNC_5(VAR_4);
 if (VAR_13) {
  FUNC_8(VAR_2, "Change bd num fail, revert to old value(%d)\n",
      VAR_13);

  FUNC_2(VAR_4, VAR_8,
         VAR_10);
  for (VAR_14 = 0; VAR_14 < VAR_5->kinfo.num_tqps * 2; VAR_14++)
   FUNC_7(VAR_4->ring_data[VAR_14].ring, &VAR_6[VAR_14],
          sizeof(struct hns3_enet_ring));
 } else {
  for (VAR_14 = 0; VAR_14 < VAR_5->kinfo.num_tqps * 2; VAR_14++)
   FUNC_4(&VAR_6[VAR_14]);
 }

 FUNC_6(VAR_6);

 if (VAR_7)
  VAR_13 = VAR_2->netdev_ops->ndo_open(VAR_2);

 return VAR_13;
}
