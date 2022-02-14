
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enabled; int root_tsar_id; } ;
struct mlx5_eswitch {TYPE_1__ qos; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct mlx5_eswitch *VAR_1)
{
 int VAR_2;

 if (!VAR_1->qos.enabled)
  return;

 VAR_2 = FUNC_1(VAR_1->dev,
        VAR_0,
        VAR_1->qos.root_tsar_id);
 if (VAR_2)
  FUNC_0(VAR_1->dev, "E-Switch destroy TSAR failed (%d)\n", VAR_2);

 VAR_1->qos.enabled = 0;
}
