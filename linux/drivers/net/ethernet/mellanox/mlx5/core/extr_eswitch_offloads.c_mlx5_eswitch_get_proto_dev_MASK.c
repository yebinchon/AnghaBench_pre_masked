
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct mlx5_eswitch_rep {TYPE_1__* rep_data; } ;
struct TYPE_5__ {TYPE_3__** rep_ops; } ;
struct mlx5_eswitch {TYPE_2__ offloads; } ;
struct TYPE_6__ {void* (* get_proto_dev ) (struct mlx5_eswitch_rep*) ;} ;
struct TYPE_4__ {int state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 struct mlx5_eswitch_rep* FUNC_1 (struct mlx5_eswitch*,int ) ;
 void* FUNC_2 (struct mlx5_eswitch_rep*) ;

void *FUNC_3(struct mlx5_eswitch *VAR_1,
     u16 VAR_2,
     u8 VAR_3)
{
 struct mlx5_eswitch_rep *VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_2);

 if (FUNC_0(&VAR_4->rep_data[VAR_3].state) == VAR_0 &&
     VAR_1->offloads.rep_ops[VAR_3]->get_proto_dev)
  return VAR_1->offloads.rep_ops[VAR_3]->get_proto_dev(VAR_4);
 return ((void*)0);
}
