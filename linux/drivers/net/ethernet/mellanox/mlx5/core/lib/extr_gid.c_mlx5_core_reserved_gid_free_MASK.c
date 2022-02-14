
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ida; } ;
struct TYPE_4__ {TYPE_1__ reserved_gids; } ;
struct mlx5_core_dev {TYPE_2__ roce; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct mlx5_core_dev*,char*,int) ;

void FUNC_2(struct mlx5_core_dev *VAR_0, int VAR_1)
{
 FUNC_1(VAR_0, "Freeing reserved GID %u\n", VAR_1);
 FUNC_0(&VAR_0->roce.reserved_gids.ida, VAR_1);
}
