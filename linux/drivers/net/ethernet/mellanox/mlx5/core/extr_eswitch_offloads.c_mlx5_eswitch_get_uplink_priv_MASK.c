
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct mlx5_eswitch_rep {TYPE_1__* rep_data; } ;
struct mlx5_eswitch {int dummy; } ;
struct TYPE_2__ {void* priv; } ;


 int VAR_0 ;
 struct mlx5_eswitch_rep* FUNC_0 (struct mlx5_eswitch*,int ) ;

void *FUNC_1(struct mlx5_eswitch *VAR_1, u8 VAR_2)
{
 struct mlx5_eswitch_rep *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_0);
 return VAR_3->rep_data[VAR_2].priv;
}
