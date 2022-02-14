
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct offloads_fdb {int dummy; } ;
struct TYPE_6__ {int fdb_prio_lock; } ;
struct TYPE_4__ {TYPE_3__ offloads; } ;
struct TYPE_5__ {int num_vfs; } ;
struct mlx5_eswitch {int total_vports; TYPE_1__ fdb_table; int dev; TYPE_2__ esw_funcs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlx5_eswitch*) ;
 int FUNC_2 (struct mlx5_eswitch*,int) ;
 int FUNC_3 (struct mlx5_eswitch*,int) ;
 int FUNC_4 (struct mlx5_eswitch*,int) ;
 int FUNC_5 (struct mlx5_eswitch*) ;
 int FUNC_6 (struct mlx5_eswitch*) ;
 int FUNC_7 (struct mlx5_eswitch*) ;
 int FUNC_8 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct mlx5_eswitch *VAR_0)
{
 int VAR_1 = VAR_0->esw_funcs.num_vfs;
 int VAR_2;
 int VAR_3;

 if (FUNC_9(VAR_0->dev))
  VAR_2 = VAR_0->total_vports;
 else
  VAR_2 = VAR_1 + FUNC_0(VAR_0->dev);

 FUNC_8(&VAR_0->fdb_table.offloads, 0, sizeof(struct offloads_fdb));
 FUNC_10(&VAR_0->fdb_table.offloads.fdb_prio_lock);

 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_2);
 if (VAR_3)
  goto create_fdb_err;

 VAR_3 = FUNC_3(VAR_0, VAR_2);
 if (VAR_3)
  goto create_ft_err;

 VAR_3 = FUNC_4(VAR_0, VAR_2);
 if (VAR_3)
  goto create_fg_err;

 return 0;

create_fg_err:
 FUNC_7(VAR_0);

create_ft_err:
 FUNC_6(VAR_0);

create_fdb_err:
 FUNC_5(VAR_0);

 return VAR_3;
}
