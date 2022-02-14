
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ vepa_uplink_rule; } ;
struct TYPE_4__ {TYPE_1__ legacy; } ;
struct mlx5_eswitch {scalar_t__ mode; int state_lock; TYPE_2__ fdb_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5_eswitch*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct mlx5_eswitch *VAR_3, u8 *VAR_4)
{
 int VAR_5 = 0;

 if (!VAR_3)
  return -VAR_0;

 if (!FUNC_0(VAR_3))
  return -VAR_1;

 FUNC_1(&VAR_3->state_lock);
 if (VAR_3->mode != VAR_2) {
  VAR_5 = -VAR_0;
  goto out;
 }

 *VAR_4 = VAR_3->fdb_table.legacy.vepa_uplink_rule ? 1 : 0;

out:
 FUNC_2(&VAR_3->state_lock);
 return VAR_5;
}
