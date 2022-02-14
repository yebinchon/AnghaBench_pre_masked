
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mlx5_eswitch_rep {int dummy; } ;
struct TYPE_2__ {struct mlx5_eswitch_rep* vport_reps; } ;
struct mlx5_eswitch {int total_vports; TYPE_1__ offloads; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mlx5_eswitch*,int ) ;

__attribute__((used)) static struct mlx5_eswitch_rep *FUNC_2(struct mlx5_eswitch *VAR_0,
           u16 VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0, VAR_1);

 FUNC_0(VAR_2 > VAR_0->total_vports - 1);
 return &VAR_0->offloads.vport_reps[VAR_2];
}
