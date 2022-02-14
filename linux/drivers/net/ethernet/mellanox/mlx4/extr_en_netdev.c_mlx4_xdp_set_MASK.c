
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int mtu; } ;
struct mlx4_en_priv {int rx_ring_num; int* tx_ring_num; int watchdog_task; int port; TYPE_1__** rx_ring; scalar_t__ port_up; TYPE_2__* prof; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_port_profile {int* tx_ring_num; } ;
struct mlx4_en_dev {int state_lock; int workqueue; } ;
struct bpf_prog {int dummy; } ;
struct TYPE_4__ {int num_up; } ;
struct TYPE_3__ {int xdp_prog; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct bpf_prog*) ;
 int VAR_3 ;
 int FUNC_2 (struct bpf_prog*) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 struct bpf_prog* FUNC_3 (struct bpf_prog*,int) ;
 int FUNC_4 (struct bpf_prog*) ;
 int FUNC_5 (struct bpf_prog*,int) ;
 int FUNC_6 (struct mlx4_en_priv*,char*,int ) ;
 int FUNC_7 (struct mlx4_en_priv*,char*) ;
 int FUNC_8 (struct mlx4_en_priv*) ;
 struct mlx4_en_priv* FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct mlx4_en_port_profile*,TYPE_2__*,int) ;
 int FUNC_12 (struct net_device*,int ) ;
 int FUNC_13 (struct mlx4_en_priv*,struct mlx4_en_priv*) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct net_device*,int) ;
 int FUNC_16 (struct mlx4_en_priv*,struct mlx4_en_priv*,struct mlx4_en_port_profile*,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 struct mlx4_en_priv* FUNC_19 (struct net_device*) ;
 int FUNC_20 (struct net_device*,int) ;
 int FUNC_21 (int ,int *) ;
 int FUNC_22 (int ,struct bpf_prog*) ;
 struct bpf_prog* FUNC_23 (int ,int ) ;

__attribute__((used)) static int FUNC_24(struct net_device *VAR_6, struct bpf_prog *VAR_7)
{
 struct mlx4_en_priv *VAR_8 = FUNC_19(VAR_6);
 struct mlx4_en_dev *VAR_9 = VAR_8->mdev;
 struct mlx4_en_port_profile VAR_10;
 struct bpf_prog *VAR_11;
 struct mlx4_en_priv *VAR_12;
 int VAR_13 = 0;
 int VAR_14;
 int VAR_15 = 0;
 int VAR_16;
 int VAR_17;

 VAR_14 = VAR_7 ? VAR_8->rx_ring_num : 0;




 if (VAR_8->tx_ring_num[VAR_5] == VAR_14) {
  if (VAR_7) {
   VAR_7 = FUNC_3(VAR_7, VAR_8->rx_ring_num - 1);
   if (FUNC_1(VAR_7))
    return FUNC_2(VAR_7);
  }
  FUNC_17(&VAR_9->state_lock);
  for (VAR_17 = 0; VAR_17 < VAR_8->rx_ring_num; VAR_17++) {
   VAR_11 = FUNC_23(
     VAR_8->rx_ring[VAR_17]->xdp_prog,
     FUNC_10(&VAR_9->state_lock));
   FUNC_22(VAR_8->rx_ring[VAR_17]->xdp_prog, VAR_7);
   if (VAR_11)
    FUNC_4(VAR_11);
  }
  FUNC_18(&VAR_9->state_lock);
  return 0;
 }

 if (!FUNC_12(VAR_6, VAR_6->mtu))
  return -VAR_1;

 VAR_12 = FUNC_9(sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_0;

 if (VAR_7) {
  VAR_7 = FUNC_3(VAR_7, VAR_8->rx_ring_num - 1);
  if (FUNC_1(VAR_7)) {
   VAR_16 = FUNC_2(VAR_7);
   goto out;
  }
 }

 FUNC_17(&VAR_9->state_lock);
 FUNC_11(&VAR_10, VAR_8->prof, sizeof(struct mlx4_en_port_profile));
 VAR_10.tx_ring_num[VAR_5] = VAR_14;

 if (VAR_8->tx_ring_num[VAR_4] + VAR_14 > VAR_3) {
  VAR_13 = 1;
  VAR_10.tx_ring_num[VAR_4] =
   VAR_3 - FUNC_0(VAR_14, VAR_8->prof->num_up);
  FUNC_7(VAR_8, "Reducing the number of TX rings, to not exceed the max total rings number.\n");
 }

 VAR_16 = FUNC_16(VAR_8, VAR_12, &VAR_10, 0);
 if (VAR_16) {
  if (VAR_7)
   FUNC_5(VAR_7, VAR_8->rx_ring_num - 1);
  goto unlock_out;
 }

 if (VAR_8->port_up) {
  VAR_15 = 1;
  FUNC_15(VAR_6, 1);
 }

 FUNC_13(VAR_8, VAR_12);
 if (VAR_13)
  FUNC_20(VAR_6, VAR_8->tx_ring_num[VAR_4]);

 for (VAR_17 = 0; VAR_17 < VAR_8->rx_ring_num; VAR_17++) {
  VAR_11 = FUNC_23(
     VAR_8->rx_ring[VAR_17]->xdp_prog,
     FUNC_10(&VAR_9->state_lock));
  FUNC_22(VAR_8->rx_ring[VAR_17]->xdp_prog, VAR_7);
  if (VAR_11)
   FUNC_4(VAR_11);
 }

 if (VAR_15) {
  VAR_16 = FUNC_14(VAR_6);
  if (VAR_16) {
   FUNC_6(VAR_8, "Failed starting port %d for XDP change\n",
          VAR_8->port);
   FUNC_21(VAR_9->workqueue, &VAR_8->watchdog_task);
  }
 }

unlock_out:
 FUNC_18(&VAR_9->state_lock);
out:
 FUNC_8(VAR_12);
 return VAR_16;
}
