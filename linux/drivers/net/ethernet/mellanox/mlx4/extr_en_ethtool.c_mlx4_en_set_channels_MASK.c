
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {scalar_t__ rx_ring_num; scalar_t__* tx_ring_num; TYPE_2__* prof; scalar_t__ port_up; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_port_profile {int num_tx_rings_p_up; int* tx_ring_num; int rx_ring_num; } ;
struct TYPE_3__ {int max_num_tx_rings_p_up; } ;
struct mlx4_en_dev {int state_lock; TYPE_1__ profile; } ;
struct ethtool_channels {int tx_count; int rx_count; } ;
struct TYPE_4__ {int num_up; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (struct mlx4_en_priv*,char*,...) ;
 int FUNC_1 (struct mlx4_en_priv*,char*,scalar_t__) ;
 int FUNC_2 (struct mlx4_en_priv*) ;
 struct mlx4_en_priv* FUNC_3 (int,int ) ;
 int FUNC_4 (struct mlx4_en_port_profile*,TYPE_2__*,int) ;
 int FUNC_5 (struct mlx4_en_priv*) ;
 int FUNC_6 (struct mlx4_en_priv*,struct mlx4_en_priv*) ;
 int FUNC_7 (struct net_device*,int) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*,int) ;
 int FUNC_10 (struct mlx4_en_priv*,struct mlx4_en_priv*,struct mlx4_en_port_profile*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 struct mlx4_en_priv* FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*,scalar_t__) ;

__attribute__((used)) static int FUNC_15(struct net_device *VAR_7,
    struct ethtool_channels *VAR_8)
{
 struct mlx4_en_priv *VAR_9 = FUNC_13(VAR_7);
 struct mlx4_en_dev *VAR_10 = VAR_9->mdev;
 struct mlx4_en_port_profile VAR_11;
 struct mlx4_en_priv *VAR_12;
 int VAR_13 = 0;
 int VAR_14;
 int VAR_15 = 0;
 u8 VAR_16;

 if (!VAR_8->tx_count || !VAR_8->rx_count)
  return -VAR_0;

 VAR_12 = FUNC_3(sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 FUNC_11(&VAR_10->state_lock);
 VAR_14 = VAR_9->tx_ring_num[VAR_6] ? VAR_8->rx_count : 0;
 if (VAR_8->tx_count * VAR_9->prof->num_up + VAR_14 >
     VAR_9->mdev->profile.max_num_tx_rings_p_up * VAR_9->prof->num_up) {
  VAR_15 = -VAR_0;
  FUNC_0(VAR_9,
         "Total number of TX and XDP rings (%d) exceeds the maximum supported (%d)\n",
         VAR_8->tx_count * VAR_9->prof->num_up + VAR_14,
         VAR_3);
  goto out;
 }

 FUNC_4(&VAR_11, VAR_9->prof, sizeof(struct mlx4_en_port_profile));
 VAR_11.num_tx_rings_p_up = VAR_8->tx_count;
 VAR_11.tx_ring_num[VAR_5] = VAR_8->tx_count * VAR_9->prof->num_up;
 VAR_11.tx_ring_num[VAR_6] = VAR_14;
 VAR_11.rx_ring_num = VAR_8->rx_count;

 VAR_15 = FUNC_10(VAR_9, VAR_12, &VAR_11, 1);
 if (VAR_15)
  goto out;

 if (VAR_9->port_up) {
  VAR_13 = 1;
  FUNC_9(VAR_7, 1);
 }

 FUNC_6(VAR_9, VAR_12);

 FUNC_14(VAR_7, VAR_9->rx_ring_num);

 VAR_16 = (VAR_9->prof->num_up == VAR_4) ?
        0 : VAR_9->prof->num_up;
 FUNC_7(VAR_7, VAR_16);

 FUNC_1(VAR_9, "Using %d TX rings\n", VAR_9->tx_ring_num[VAR_5]);
 FUNC_1(VAR_9, "Using %d RX rings\n", VAR_9->rx_ring_num);

 if (VAR_13) {
  VAR_15 = FUNC_8(VAR_7);
  if (VAR_15)
   FUNC_0(VAR_9, "Failed starting port\n");
 }

 VAR_15 = FUNC_5(VAR_9);
out:
 FUNC_12(&VAR_10->state_lock);
 FUNC_2(VAR_12);
 return VAR_15;
}
