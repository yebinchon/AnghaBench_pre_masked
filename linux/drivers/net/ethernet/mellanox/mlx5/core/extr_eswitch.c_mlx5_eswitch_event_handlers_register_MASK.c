
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nb; } ;
struct mlx5_eswitch {scalar_t__ mode; TYPE_1__ esw_funcs; int dev; int nb; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mlx5_eswitch *VAR_5)
{
 FUNC_0(&VAR_5->nb, VAR_3, VAR_2);
 FUNC_1(VAR_5->dev, &VAR_5->nb);

 if (VAR_5->mode == VAR_1 && FUNC_2(VAR_5->dev)) {
  FUNC_0(&VAR_5->esw_funcs.nb, VAR_4,
        VAR_0);
  FUNC_1(VAR_5->dev, &VAR_5->esw_funcs.nb);
 }
}
