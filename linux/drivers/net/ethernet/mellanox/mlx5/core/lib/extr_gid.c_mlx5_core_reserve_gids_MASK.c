
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int start; scalar_t__ count; } ;
struct TYPE_4__ {TYPE_1__ reserved_gids; } ;
struct mlx5_core_dev {TYPE_2__ roce; int intf_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct mlx5_core_dev*,char*,scalar_t__,unsigned int) ;
 int FUNC_1 (struct mlx5_core_dev*,char*) ;
 int FUNC_2 (struct mlx5_core_dev*,char*,unsigned int) ;
 scalar_t__ FUNC_3 (int ,int *) ;

int FUNC_4(struct mlx5_core_dev *VAR_4, unsigned int VAR_5)
{
 if (FUNC_3(VAR_2, &VAR_4->intf_state)) {
  FUNC_1(VAR_4, "Cannot reserve GIDs when interfaces are up\n");
  return -VAR_1;
 }
 if (VAR_4->roce.reserved_gids.start < VAR_5) {
  FUNC_2(VAR_4, "GID table exhausted attempting to reserve %d more GIDs\n",
          VAR_5);
  return -VAR_0;
 }
 if (VAR_4->roce.reserved_gids.count + VAR_5 > VAR_3) {
  FUNC_2(VAR_4, "Unable to reserve %d more GIDs\n", VAR_5);
  return -VAR_0;
 }

 VAR_4->roce.reserved_gids.start -= VAR_5;
 VAR_4->roce.reserved_gids.count += VAR_5;
 FUNC_0(VAR_4, "Reserved %u GIDs starting at %u\n",
        VAR_4->roce.reserved_gids.count,
        VAR_4->roce.reserved_gids.start);
 return 0;
}
