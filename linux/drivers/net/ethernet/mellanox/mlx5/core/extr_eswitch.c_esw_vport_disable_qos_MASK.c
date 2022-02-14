
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enabled; int esw_tsar_ix; } ;
struct mlx5_vport {TYPE_1__ qos; int vport; } ;
struct mlx5_eswitch {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct mlx5_eswitch *VAR_1,
      struct mlx5_vport *VAR_2)
{
 int VAR_3;

 if (!VAR_2->qos.enabled)
  return;

 VAR_3 = FUNC_1(VAR_1->dev,
        VAR_0,
        VAR_2->qos.esw_tsar_ix);
 if (VAR_3)
  FUNC_0(VAR_1->dev, "E-Switch destroy TSAR vport element failed (vport=%d,err=%d)\n",
    VAR_2->vport, VAR_3);

 VAR_2->qos.enabled = 0;
}
