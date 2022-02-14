
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {TYPE_1__** rx_ring; int * tx_ring_num; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int state_lock; } ;
struct bpf_prog {TYPE_2__* aux; } ;
struct TYPE_4__ {int id; } ;
struct TYPE_3__ {int xdp_prog; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct mlx4_en_priv* FUNC_3 (struct net_device*) ;
 struct bpf_prog* FUNC_4 (int ,int ) ;

__attribute__((used)) static u32 FUNC_5(struct net_device *VAR_1)
{
 struct mlx4_en_priv *VAR_2 = FUNC_3(VAR_1);
 struct mlx4_en_dev *VAR_3 = VAR_2->mdev;
 const struct bpf_prog *VAR_4;
 u32 VAR_5 = 0;

 if (!VAR_2->tx_ring_num[VAR_0])
  return VAR_5;

 FUNC_1(&VAR_3->state_lock);
 VAR_4 = FUNC_4(
  VAR_2->rx_ring[0]->xdp_prog,
  FUNC_0(&VAR_3->state_lock));
 if (VAR_4)
  VAR_5 = VAR_4->aux->id;
 FUNC_2(&VAR_3->state_lock);

 return VAR_5;
}
