
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_flow_steering {TYPE_1__** esw_ingress_root_ns; } ;
struct fs_prio {int dummy; } ;
struct TYPE_2__ {int ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fs_prio*) ;
 TYPE_1__* FUNC_1 (struct mlx5_flow_steering*,int ) ;
 struct fs_prio* FUNC_2 (int *,int ,int) ;

__attribute__((used)) static int FUNC_3(struct mlx5_flow_steering *VAR_2, int VAR_3)
{
 struct fs_prio *VAR_4;

 VAR_2->esw_ingress_root_ns[VAR_3] = FUNC_1(VAR_2, VAR_1);
 if (!VAR_2->esw_ingress_root_ns[VAR_3])
  return -VAR_0;


 VAR_4 = FUNC_2(&VAR_2->esw_ingress_root_ns[VAR_3]->ns, 0, 1);
 return FUNC_0(VAR_4);
}
