
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct mlx5_eswitch {TYPE_1__ fdb_table; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_eswitch*,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct mlx5_eswitch *VAR_1)
{

 if (!(VAR_1->fdb_table.flags & VAR_0)) {
  FUNC_0(VAR_1, 0, 1, 1);
  FUNC_0(VAR_1, 0, 1, 0);
 }
}
