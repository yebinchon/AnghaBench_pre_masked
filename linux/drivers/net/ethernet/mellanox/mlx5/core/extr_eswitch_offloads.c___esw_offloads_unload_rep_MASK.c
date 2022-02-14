
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct mlx5_eswitch_rep {TYPE_1__* rep_data; } ;
struct TYPE_6__ {TYPE_2__** rep_ops; } ;
struct mlx5_eswitch {TYPE_3__ offloads; } ;
struct TYPE_5__ {int (* unload ) (struct mlx5_eswitch_rep*) ;} ;
struct TYPE_4__ {int state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,int ) ;
 int FUNC_1 (struct mlx5_eswitch_rep*) ;

__attribute__((used)) static void FUNC_2(struct mlx5_eswitch *VAR_2,
          struct mlx5_eswitch_rep *VAR_3, u8 VAR_4)
{
 if (FUNC_0(&VAR_3->rep_data[VAR_4].state,
      VAR_0, VAR_1) == VAR_0)
  VAR_2->offloads.rep_ops[VAR_4]->unload(VAR_3);
}
