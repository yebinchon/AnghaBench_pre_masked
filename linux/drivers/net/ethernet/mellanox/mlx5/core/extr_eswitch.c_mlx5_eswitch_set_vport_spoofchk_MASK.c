
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int spoofchk; int mac; } ;
struct mlx5_vport {TYPE_1__ info; scalar_t__ enabled; int vport; } ;
struct mlx5_eswitch {scalar_t__ mode; int state_lock; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_eswitch*) ;
 scalar_t__ FUNC_1 (struct mlx5_vport*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct mlx5_vport*) ;
 int FUNC_3 (struct mlx5_eswitch*,struct mlx5_vport*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ) ;
 struct mlx5_vport* FUNC_6 (struct mlx5_eswitch*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct mlx5_eswitch *VAR_2,
        u16 VAR_3, bool VAR_4)
{
 struct mlx5_vport *VAR_5 = FUNC_6(VAR_2, VAR_3);
 bool VAR_6;
 int VAR_7 = 0;

 if (!FUNC_0(VAR_2))
  return -VAR_0;
 if (FUNC_1(VAR_5))
  return FUNC_2(VAR_5);

 FUNC_7(&VAR_2->state_lock);
 VAR_6 = VAR_5->info.spoofchk;
 VAR_5->info.spoofchk = VAR_4;
 if (VAR_6 && !FUNC_4(VAR_5->info.mac))
  FUNC_5(VAR_2->dev,
          "Spoofchk in set while MAC is invalid, vport(%d)\n",
          VAR_5->vport);
 if (VAR_5->enabled && VAR_2->mode == VAR_1)
  VAR_7 = FUNC_3(VAR_2, VAR_5);
 if (VAR_7)
  VAR_5->info.spoofchk = VAR_6;
 FUNC_8(&VAR_2->state_lock);

 return VAR_7;
}
