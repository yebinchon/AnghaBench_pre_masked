
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int legacy; } ;
struct mlx5_eswitch {TYPE_1__ fdb_table; } ;
struct legacy_fdb {int dummy; } ;


 int FUNC_0 (struct mlx5_eswitch*) ;
 int FUNC_1 (struct mlx5_eswitch*) ;
 int FUNC_2 (struct mlx5_eswitch*) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static int FUNC_4(struct mlx5_eswitch *VAR_0)
{
 int VAR_1;

 FUNC_3(&VAR_0->fdb_table.legacy, 0, sizeof(struct legacy_fdb));

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  FUNC_2(VAR_0);

 return VAR_1;
}
