
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int qpn; } ;
struct mlx4_en_priv {TYPE_1__* mdev; TYPE_2__ drop_qp; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,TYPE_2__*) ;

void FUNC_3(struct mlx4_en_priv *VAR_0)
{
 u32 VAR_1;

 VAR_1 = VAR_0->drop_qp.qpn;
 FUNC_2(VAR_0->mdev->dev, &VAR_0->drop_qp);
 FUNC_0(VAR_0->mdev->dev, &VAR_0->drop_qp);
 FUNC_1(VAR_0->mdev->dev, VAR_1, 1);
}
