
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int children; } ;
struct mlx5_flow_namespace {TYPE_3__ node; } ;
struct TYPE_4__ {int type; int list; } ;
struct fs_prio {int num_levels; unsigned int prio; TYPE_1__ node; } ;
typedef enum fs_node_type { ____Placeholder_fs_node_type } fs_node_type ;


 int VAR_0 ;
 struct fs_prio* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct fs_prio* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_1__*,int *,int ) ;

__attribute__((used)) static struct fs_prio *FUNC_5(struct mlx5_flow_namespace *VAR_3,
           unsigned int VAR_4,
           int VAR_5,
           enum fs_node_type VAR_6)
{
 struct fs_prio *VAR_7;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_7->node.type = VAR_6;
 FUNC_4(&VAR_7->node, ((void*)0), VAR_2);
 FUNC_3(&VAR_7->node, &VAR_3->node);
 VAR_7->num_levels = VAR_5;
 VAR_7->prio = VAR_4;
 FUNC_2(&VAR_7->node.list, &VAR_3->node.children);

 return VAR_7;
}
