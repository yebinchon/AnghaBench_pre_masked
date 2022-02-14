
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int start; int count; int ida; } ;
struct TYPE_3__ {TYPE_2__ reserved_gids; } ;
struct mlx5_core_dev {TYPE_1__ roce; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int,int ) ;
 int FUNC_1 (struct mlx5_core_dev*,char*,int) ;

int FUNC_2(struct mlx5_core_dev *VAR_1, int *VAR_2)
{
 int VAR_3 = VAR_1->roce.reserved_gids.start +
    VAR_1->roce.reserved_gids.count;
 int VAR_4 = 0;

 VAR_4 = FUNC_0(&VAR_1->roce.reserved_gids.ida,
          VAR_1->roce.reserved_gids.start, VAR_3,
          VAR_0);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_1(VAR_1, "Allocating reserved GID %u\n", VAR_4);
 *VAR_2 = VAR_4;
 return 0;
}
