
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_en_rss_map {int base_qpn; int * qps; int * state; int * indir_qp; int indir_state; } ;
struct mlx4_en_priv {int rx_ring_num; struct mlx4_en_rss_map rss_map; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,int ,int ,int *,int ,int ,int *) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(struct mlx4_en_priv *VAR_1)
{
 struct mlx4_en_dev *VAR_2 = VAR_1->mdev;
 struct mlx4_en_rss_map *VAR_3 = &VAR_1->rss_map;
 int VAR_4;

 if (VAR_1->rx_ring_num > 1) {
  FUNC_2(VAR_2->dev, ((void*)0), VAR_3->indir_state,
          VAR_0, ((void*)0), 0, 0,
          VAR_3->indir_qp);
  FUNC_4(VAR_2->dev, VAR_3->indir_qp);
  FUNC_1(VAR_2->dev, VAR_3->indir_qp);
  FUNC_0(VAR_3->indir_qp);
  VAR_3->indir_qp = ((void*)0);
 }

 for (VAR_4 = 0; VAR_4 < VAR_1->rx_ring_num; VAR_4++) {
  FUNC_2(VAR_2->dev, ((void*)0), VAR_3->state[VAR_4],
          VAR_0, ((void*)0), 0, 0, &VAR_3->qps[VAR_4]);
  FUNC_4(VAR_2->dev, &VAR_3->qps[VAR_4]);
  FUNC_1(VAR_2->dev, &VAR_3->qps[VAR_4]);
 }
 FUNC_3(VAR_2->dev, VAR_3->base_qpn, VAR_1->rx_ring_num);
}
