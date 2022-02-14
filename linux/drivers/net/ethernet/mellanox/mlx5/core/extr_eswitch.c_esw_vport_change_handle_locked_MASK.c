
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_vport {int enabled_events; int vport; scalar_t__ enabled; int allmulti_rule; struct mlx5_core_dev* dev; } ;
struct mlx5_eswitch {int dev; } ;
struct TYPE_2__ {struct mlx5_eswitch* eswitch; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct mlx5_core_dev*,int ,int) ;
 int FUNC_2 (struct mlx5_eswitch*,struct mlx5_vport*,int ) ;
 int FUNC_3 (struct mlx5_core_dev*,char*,int ,...) ;
 int FUNC_4 (struct mlx5_eswitch*,struct mlx5_vport*,int ) ;
 int FUNC_5 (struct mlx5_eswitch*,struct mlx5_vport*) ;
 int FUNC_6 (struct mlx5_eswitch*,struct mlx5_vport*) ;
 int FUNC_7 (struct mlx5_core_dev*,int ,int,int *) ;

__attribute__((used)) static void FUNC_8(struct mlx5_vport *VAR_6)
{
 struct mlx5_core_dev *VAR_7 = VAR_6->dev;
 struct mlx5_eswitch *VAR_8 = VAR_7->priv.eswitch;
 u8 VAR_9[VAR_0];

 FUNC_7(VAR_7, VAR_6->vport, 1, VAR_9);
 FUNC_3(VAR_7, "vport[%d] Context Changed: perm mac: %pM\n",
    VAR_6->vport, VAR_9);

 if (VAR_6->enabled_events & VAR_5) {
  FUNC_4(VAR_8, VAR_6, VAR_2);
  FUNC_2(VAR_8, VAR_6, VAR_2);
 }

 if (VAR_6->enabled_events & VAR_3)
  FUNC_4(VAR_8, VAR_6, VAR_1);

 if (VAR_6->enabled_events & VAR_4) {
  FUNC_6(VAR_8, VAR_6);
  if (!FUNC_0(VAR_6->allmulti_rule))
   FUNC_5(VAR_8, VAR_6);
 }

 if (VAR_6->enabled_events & (VAR_4 | VAR_3))
  FUNC_2(VAR_8, VAR_6, VAR_1);

 FUNC_3(VAR_8->dev, "vport[%d] Context Changed: Done\n", VAR_6->vport);
 if (VAR_6->enabled)
  FUNC_1(VAR_7, VAR_6->vport,
          VAR_6->enabled_events);
}
