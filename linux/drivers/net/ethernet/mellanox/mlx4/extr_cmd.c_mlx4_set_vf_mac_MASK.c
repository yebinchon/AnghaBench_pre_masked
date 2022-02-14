
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct mlx4_vport_state {int mac; scalar_t__ spoofchk; } ;
struct TYPE_5__ {TYPE_1__* vf_admin; } ;
struct TYPE_6__ {TYPE_2__ master; } ;
struct mlx4_priv {TYPE_3__ mfunc; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_4__ {struct mlx4_vport_state* vport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct mlx4_dev*,int) ;
 int FUNC_3 (struct mlx4_dev*,char*,...) ;
 int FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (int *) ;
 struct mlx4_priv* FUNC_6 (struct mlx4_dev*) ;
 int FUNC_7 (struct mlx4_dev*,int,int) ;

int FUNC_8(struct mlx4_dev *VAR_3, int VAR_4, int VAR_5, u8 *VAR_6)
{
 struct mlx4_priv *VAR_7 = FUNC_6(VAR_3);
 struct mlx4_vport_state *VAR_8;
 int VAR_9;

 if (!FUNC_4(VAR_3))
  return -VAR_2;

 if (FUNC_0(VAR_6))
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_3, VAR_5);
 if (VAR_9 < 0)
  return -VAR_0;

 VAR_4 = FUNC_7(VAR_3, VAR_9, VAR_4);
 VAR_8 = &VAR_7->mfunc.master.vf_admin[VAR_9].vport[VAR_4];

 if (VAR_8->spoofchk && FUNC_1(VAR_6)) {
  FUNC_3(VAR_3, "MAC invalidation is not allowed when spoofchk is on\n");
  return -VAR_1;
 }

 VAR_8->mac = FUNC_5(VAR_6);
 FUNC_3(VAR_3, "default mac on vf %d port %d to %llX will take effect only after vf restart\n",
    VAR_5, VAR_4, VAR_8->mac);
 return 0;
}
