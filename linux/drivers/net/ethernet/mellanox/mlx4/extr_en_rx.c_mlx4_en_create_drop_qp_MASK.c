
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx4_en_priv {TYPE_1__* mdev; int drop_qp; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx4_en_priv*,char*) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int,int,int *,int ,int ) ;

int FUNC_4(struct mlx4_en_priv *VAR_2)
{
 int VAR_3;
 u32 VAR_4;

 VAR_3 = FUNC_3(VAR_2->mdev->dev, 1, 1, &VAR_4,
        VAR_0,
        VAR_1);
 if (VAR_3) {
  FUNC_0(VAR_2, "Failed reserving drop qpn\n");
  return VAR_3;
 }
 VAR_3 = FUNC_1(VAR_2->mdev->dev, VAR_4, &VAR_2->drop_qp);
 if (VAR_3) {
  FUNC_0(VAR_2, "Failed allocating drop qp\n");
  FUNC_2(VAR_2->mdev->dev, VAR_4, 1);
  return VAR_3;
 }

 return 0;
}
