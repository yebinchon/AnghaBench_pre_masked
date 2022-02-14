
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long flags; struct mlx4_dev_persistent* persist; } ;
struct mlx4_priv {TYPE_1__ dev; } ;
struct mlx4_dev_persistent {int dummy; } ;
struct mlx4_dev {unsigned long flags; struct mlx4_dev_persistent* persist; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct mlx4_priv*,int ,int) ;
 struct mlx4_priv* FUNC_1 (struct mlx4_dev*) ;

__attribute__((used)) static void FUNC_2(struct mlx4_dev *VAR_1)
{
 struct mlx4_dev_persistent *VAR_2 = VAR_1->persist;
 struct mlx4_priv *VAR_3 = FUNC_1(VAR_1);
 unsigned long VAR_4 = (VAR_1->flags & VAR_0);

 FUNC_0(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->dev.persist = VAR_2;
 VAR_3->dev.flags = VAR_4;
}
