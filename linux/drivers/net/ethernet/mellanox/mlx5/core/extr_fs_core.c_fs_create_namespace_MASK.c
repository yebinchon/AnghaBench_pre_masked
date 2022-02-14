
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int list; } ;
struct mlx5_flow_namespace {int def_miss_action; TYPE_1__ node; } ;
struct TYPE_5__ {int children; } ;
struct fs_prio {TYPE_3__ node; } ;


 int VAR_0 ;
 struct mlx5_flow_namespace* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mlx5_flow_namespace*) ;
 struct mlx5_flow_namespace* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_1__*,int *,int ) ;

__attribute__((used)) static struct mlx5_flow_namespace *FUNC_6(struct fs_prio *VAR_3,
             int VAR_4)
{
 struct mlx5_flow_namespace *VAR_5;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 FUNC_1(VAR_5);
 VAR_5->def_miss_action = VAR_4;
 FUNC_5(&VAR_5->node, ((void*)0), VAR_2);
 FUNC_4(&VAR_5->node, &VAR_3->node);
 FUNC_3(&VAR_5->node.list, &VAR_3->node.children);

 return VAR_5;
}
