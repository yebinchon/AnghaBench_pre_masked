
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int vlan; int qos; } ;
struct mlx5_vport {scalar_t__ enabled; TYPE_1__ info; } ;
struct mlx5_eswitch {scalar_t__ mode; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5_eswitch*) ;
 scalar_t__ FUNC_1 (struct mlx5_vport*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct mlx5_vport*) ;
 int FUNC_3 (struct mlx5_eswitch*,struct mlx5_vport*) ;
 int FUNC_4 (struct mlx5_eswitch*,struct mlx5_vport*) ;
 struct mlx5_vport* FUNC_5 (struct mlx5_eswitch*,int) ;
 int FUNC_6 (int ,int,int,int,int) ;

int FUNC_7(struct mlx5_eswitch *VAR_3,
      u16 VAR_4, u16 VAR_5, u8 VAR_6, u8 VAR_7)
{
 struct mlx5_vport *VAR_8 = FUNC_5(VAR_3, VAR_4);
 int VAR_9 = 0;

 if (!FUNC_0(VAR_3))
  return -VAR_1;
 if (FUNC_1(VAR_8))
  return FUNC_2(VAR_8);
 if (VAR_5 > 4095 || VAR_6 > 7)
  return -VAR_0;

 VAR_9 = FUNC_6(VAR_3->dev, VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_9)
  return VAR_9;

 VAR_8->info.vlan = VAR_5;
 VAR_8->info.qos = VAR_6;
 if (VAR_8->enabled && VAR_3->mode == VAR_2) {
  VAR_9 = FUNC_4(VAR_3, VAR_8);
  if (VAR_9)
   return VAR_9;
  VAR_9 = FUNC_3(VAR_3, VAR_8);
 }

 return VAR_9;
}
