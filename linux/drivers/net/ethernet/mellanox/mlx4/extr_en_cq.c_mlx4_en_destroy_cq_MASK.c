
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_en_priv {struct mlx4_en_dev* mdev; int port; } ;
struct mlx4_en_dev {int dev; } ;
struct mlx4_en_cq {scalar_t__ type; int * buf; scalar_t__ buf_size; scalar_t__ vector; int wqres; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mlx4_en_cq*) ;
 int FUNC_1 (int ,int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

void FUNC_4(struct mlx4_en_priv *VAR_1, struct mlx4_en_cq **VAR_2)
{
 struct mlx4_en_dev *VAR_3 = VAR_1->mdev;
 struct mlx4_en_cq *VAR_4 = *VAR_2;

 FUNC_1(VAR_3->dev, &VAR_4->wqres, VAR_4->buf_size);
 if (FUNC_2(VAR_3->dev, VAR_1->port, VAR_4->vector) &&
     VAR_4->type == VAR_0)
  FUNC_3(VAR_1->mdev->dev, VAR_4->vector);
 VAR_4->vector = 0;
 VAR_4->buf_size = 0;
 VAR_4->buf = ((void*)0);
 FUNC_0(VAR_4);
 *VAR_2 = ((void*)0);
}
