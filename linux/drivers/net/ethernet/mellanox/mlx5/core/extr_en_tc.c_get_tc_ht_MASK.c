
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rhashtable {int dummy; } ;
struct TYPE_8__ {struct rhashtable tc_ht; } ;
struct mlx5e_rep_priv {TYPE_3__ uplink_priv; } ;
struct TYPE_9__ {struct rhashtable ht; } ;
struct TYPE_10__ {TYPE_4__ tc; } ;
struct mlx5e_priv {TYPE_5__ fs; TYPE_2__* mdev; } ;
struct mlx5_eswitch {int dummy; } ;
struct TYPE_6__ {struct mlx5_eswitch* eswitch; } ;
struct TYPE_7__ {TYPE_1__ priv; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int VAR_1 ;
 struct mlx5e_rep_priv* FUNC_1 (struct mlx5_eswitch*,int ) ;

__attribute__((used)) static struct rhashtable *FUNC_2(struct mlx5e_priv *VAR_2,
        unsigned long VAR_3)
{
 struct mlx5_eswitch *VAR_4 = VAR_2->mdev->priv.eswitch;
 struct mlx5e_rep_priv *VAR_5;

 if (VAR_3 & FUNC_0(VAR_0)) {
  VAR_5 = FUNC_1(VAR_4, VAR_1);
  return &VAR_5->uplink_priv.tc_ht;
 } else
  return &VAR_2->fs.tc.ht;
}
