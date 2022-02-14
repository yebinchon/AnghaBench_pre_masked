
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int trusted; } ;
struct mlx5_vport {int enabled; TYPE_1__ info; int vport; } ;
struct mlx5_eswitch {int dev; } ;


 int FUNC_0 (struct mlx5_eswitch*,struct mlx5_vport*,int,int) ;
 int FUNC_1 (int ,char*,int ,int,int) ;
 int FUNC_2 (int ,int ,int*,int*,int*) ;

__attribute__((used)) static void FUNC_3(struct mlx5_eswitch *VAR_0,
         struct mlx5_vport *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3 = 0;
 int VAR_4 = 0;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_0->dev,
        VAR_1->vport,
        &VAR_3,
        &VAR_4,
        &VAR_2);
 if (VAR_5)
  return;
 FUNC_1(VAR_0->dev, "vport[%d] context update rx mode promisc_all=%d, all_multi=%d\n",
    VAR_1->vport, VAR_2, VAR_4);

 if (!VAR_1->info.trusted || !VAR_1->enabled) {
  VAR_3 = 0;
  VAR_4 = 0;
  VAR_2 = 0;
 }

 FUNC_0(VAR_0, VAR_1, VAR_2,
    (VAR_2 || VAR_4));
}
