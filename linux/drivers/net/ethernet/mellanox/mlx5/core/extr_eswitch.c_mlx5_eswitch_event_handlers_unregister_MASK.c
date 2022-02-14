
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nb; } ;
struct mlx5_eswitch {scalar_t__ mode; int work_queue; int nb; int dev; TYPE_1__ esw_funcs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mlx5_eswitch *VAR_1)
{
 if (VAR_1->mode == VAR_0 && FUNC_2(VAR_1->dev))
  FUNC_1(VAR_1->dev, &VAR_1->esw_funcs.nb);

 FUNC_1(VAR_1->dev, &VAR_1->nb);

 FUNC_0(VAR_1->work_queue);
}
