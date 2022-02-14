
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_flow_steering {int dev; } ;
struct fs_node {int dummy; } ;
struct mlx5_flow_namespace {struct fs_node node; } ;
struct init_tree_node {scalar_t__ type; int min_ft_level; int ar_size; scalar_t__ num_leaf_prios; struct init_tree_node* children; int def_miss_action; int num_levels; int caps; } ;
struct fs_prio {struct fs_node node; } ;
struct TYPE_2__ {int max_ft_level; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct mlx5_flow_namespace*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct mlx5_flow_namespace*) ;
 int FUNC_3 (struct mlx5_flow_namespace*,int,struct init_tree_node*) ;
 TYPE_1__ VAR_3 ;
 struct mlx5_flow_namespace* FUNC_4 (struct mlx5_flow_namespace*,int ) ;
 struct mlx5_flow_namespace* FUNC_5 (struct mlx5_flow_namespace*,int,int ) ;
 int FUNC_6 (struct mlx5_flow_namespace*,struct fs_node*) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct mlx5_flow_steering *VAR_4,
        struct init_tree_node *VAR_5,
        struct fs_node *VAR_6,
        struct init_tree_node *VAR_7,
        int VAR_8)
{
 int VAR_9 = FUNC_1(VAR_4->dev,
           VAR_3.
           max_ft_level);
 struct mlx5_flow_namespace *VAR_10;
 struct fs_prio *VAR_11;
 struct fs_node *VAR_12;
 int VAR_13;
 int VAR_14;

 if (VAR_5->type == VAR_2) {
  if ((VAR_5->min_ft_level > VAR_9) ||
      !FUNC_7(VAR_4->dev, &VAR_5->caps))
   return 0;

  FUNC_6(VAR_10, VAR_6);
  if (VAR_5->num_leaf_prios)
   return FUNC_3(VAR_10, VAR_8, VAR_5);
  VAR_11 = FUNC_5(VAR_10, VAR_8, VAR_5->num_levels);
  if (FUNC_0(VAR_11))
   return FUNC_2(VAR_11);
  VAR_12 = &VAR_11->node;
 } else if (VAR_5->type == VAR_1) {
  FUNC_6(VAR_11, VAR_6);
  VAR_10 = FUNC_4(VAR_11, VAR_5->def_miss_action);
  if (FUNC_0(VAR_10))
   return FUNC_2(VAR_10);
  VAR_12 = &VAR_10->node;
 } else {
  return -VAR_0;
 }
 VAR_8 = 0;
 for (VAR_13 = 0; VAR_13 < VAR_5->ar_size; VAR_13++) {
  VAR_14 = FUNC_8(VAR_4, &VAR_5->children[VAR_13],
            VAR_12, VAR_5, VAR_8);
  if (VAR_14)
   return VAR_14;
  if (VAR_5->children[VAR_13].type == VAR_2 &&
      VAR_5->children[VAR_13].num_leaf_prios) {
   VAR_8 += VAR_5->children[VAR_13].num_leaf_prios;
  }
 }

 return 0;
}
