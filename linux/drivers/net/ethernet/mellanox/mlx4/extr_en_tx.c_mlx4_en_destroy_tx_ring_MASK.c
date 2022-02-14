
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_en_tx_ring {int * tx_info; struct mlx4_en_tx_ring* bounce_buf; int buf_size; int sp_wqres; int qpn; int sp_qp; int bf; scalar_t__ bf_alloced; } ;
struct mlx4_en_priv {struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct mlx4_en_priv*,char*,int ) ;
 int FUNC_1 (struct mlx4_en_tx_ring*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int *) ;

void FUNC_8(struct mlx4_en_priv *VAR_1,
        struct mlx4_en_tx_ring **VAR_2)
{
 struct mlx4_en_dev *VAR_3 = VAR_1->mdev;
 struct mlx4_en_tx_ring *VAR_4 = *VAR_2;
 FUNC_0(VAR_0, VAR_1, "Destroying tx ring, qpn: %d\n", VAR_4->qpn);

 if (VAR_4->bf_alloced)
  FUNC_3(VAR_3->dev, &VAR_4->bf);
 FUNC_7(VAR_3->dev, &VAR_4->sp_qp);
 FUNC_5(VAR_3->dev, &VAR_4->sp_qp);
 FUNC_6(VAR_1->mdev->dev, VAR_4->qpn, 1);
 FUNC_4(VAR_3->dev, &VAR_4->sp_wqres, VAR_4->buf_size);
 FUNC_1(VAR_4->bounce_buf);
 VAR_4->bounce_buf = ((void*)0);
 FUNC_2(VAR_4->tx_info);
 VAR_4->tx_info = ((void*)0);
 FUNC_1(VAR_4);
 *VAR_2 = ((void*)0);
}
