
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
struct mlx4_en_priv {TYPE_2__* mdev; int dev; } ;
struct TYPE_3__ {void* port2; void* port1; } ;
struct mlx4_en_bond {int is_bonded; int work; TYPE_1__ port_map; struct mlx4_en_priv* priv; } ;
struct TYPE_4__ {int workqueue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 struct mlx4_en_bond* FUNC_2 (int,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct mlx4_en_priv *VAR_3, int VAR_4,
       u8 VAR_5, u8 VAR_6)
{
 struct mlx4_en_bond *VAR_7 = ((void*)0);

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_0(&VAR_7->work, VAR_2);
 VAR_7->priv = VAR_3;
 VAR_7->is_bonded = VAR_4;
 VAR_7->port_map.port1 = VAR_5;
 VAR_7->port_map.port2 = VAR_6;
 FUNC_1(VAR_3->dev);
 FUNC_3(VAR_3->mdev->workqueue, &VAR_7->work);
 return 0;
}
