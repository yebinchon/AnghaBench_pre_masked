
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mlx4_en_rx_ring {int * rx_info; int wqres; int xdp_rxq; int xdp_prog; } ;
struct mlx4_en_priv {struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int dev; int state_lock; } ;
struct bpf_prog {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bpf_prog*) ;
 int FUNC_1 (struct mlx4_en_rx_ring*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,scalar_t__) ;
 struct bpf_prog* FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct mlx4_en_priv *VAR_1,
        struct mlx4_en_rx_ring **VAR_2,
        u32 VAR_3, u16 VAR_4)
{
 struct mlx4_en_dev *VAR_5 = VAR_1->mdev;
 struct mlx4_en_rx_ring *VAR_6 = *VAR_2;
 struct bpf_prog *VAR_7;

 VAR_7 = FUNC_5(
     VAR_6->xdp_prog,
     FUNC_3(&VAR_5->state_lock));
 if (VAR_7)
  FUNC_0(VAR_7);
 FUNC_6(&VAR_6->xdp_rxq);
 FUNC_4(VAR_5->dev, &VAR_6->wqres, VAR_3 * VAR_4 + VAR_0);
 FUNC_2(VAR_6->rx_info);
 VAR_6->rx_info = ((void*)0);
 FUNC_1(VAR_6);
 *VAR_2 = ((void*)0);
}
