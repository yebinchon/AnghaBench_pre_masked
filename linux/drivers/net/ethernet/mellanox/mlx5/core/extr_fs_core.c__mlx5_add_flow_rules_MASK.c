
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int version; } ;
struct mlx5_flow_table {TYPE_1__ node; } ;
struct mlx5_flow_steering {int ftes_cache; } ;
struct mlx5_flow_spec {int dummy; } ;
struct mlx5_flow_handle {TYPE_1__ node; } ;
struct mlx5_flow_group {TYPE_1__ node; } ;
struct mlx5_flow_destination {int dummy; } ;
struct mlx5_flow_act {int action; } ;
struct match_list_head {int list; } ;
struct fs_fte {TYPE_1__ node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mlx5_flow_handle* FUNC_0 (struct mlx5_flow_handle*) ;
 struct mlx5_flow_handle* FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct mlx5_flow_handle*) ;
 int FUNC_3 (struct mlx5_flow_handle*) ;
 struct mlx5_flow_handle* FUNC_4 (struct mlx5_flow_handle*,struct mlx5_flow_spec const*,struct mlx5_flow_act*,struct mlx5_flow_destination*,int,struct mlx5_flow_handle*) ;
 struct mlx5_flow_handle* FUNC_5 (struct mlx5_flow_table*,struct mlx5_flow_spec const*) ;
 struct mlx5_flow_handle* FUNC_6 (struct mlx5_flow_table*,struct mlx5_flow_spec const*,struct mlx5_flow_act*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct match_list_head*,struct mlx5_flow_table*,struct mlx5_flow_spec const*) ;
 int FUNC_9 (struct mlx5_flow_spec const*) ;
 int FUNC_10 (struct mlx5_flow_table*,struct mlx5_flow_handle*) ;
 int FUNC_11 (struct mlx5_flow_destination*,int ,struct mlx5_flow_table*) ;
 int FUNC_12 (struct match_list_head*) ;
 struct mlx5_flow_steering* FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (struct mlx5_flow_handle*,struct mlx5_flow_handle*) ;
 int FUNC_15 (int ,struct mlx5_flow_handle*) ;
 int FUNC_16 (TYPE_1__*,int ) ;
 int FUNC_17 (TYPE_1__*,int ) ;
 int FUNC_18 (TYPE_1__*,int) ;
 struct mlx5_flow_handle* FUNC_19 (struct mlx5_flow_table*,int *,struct mlx5_flow_spec const*,struct mlx5_flow_act*,struct mlx5_flow_destination*,int,int) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (TYPE_1__*,int) ;

__attribute__((used)) static struct mlx5_flow_handle *
FUNC_22(struct mlx5_flow_table *VAR_6,
       const struct mlx5_flow_spec *VAR_7,
       struct mlx5_flow_act *VAR_8,
       struct mlx5_flow_destination *VAR_9,
       int VAR_10)

{
 struct mlx5_flow_steering *VAR_11 = FUNC_13(&VAR_6->node);
 struct mlx5_flow_group *VAR_12;
 struct mlx5_flow_handle *VAR_13;
 struct match_list_head VAR_14;
 bool VAR_15 = 0;
 struct fs_fte *VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;

 if (!FUNC_9(VAR_7))
  return FUNC_1(-VAR_1);

 for (VAR_19 = 0; VAR_19 < VAR_10; VAR_19++) {
  if (!FUNC_11(&VAR_9[VAR_19], VAR_8->action, VAR_6))
   return FUNC_1(-VAR_1);
 }
 FUNC_16(&VAR_6->node, VAR_4);
search_again_locked:
 VAR_17 = FUNC_7(&VAR_6->node.version);


 VAR_18 = FUNC_8(&VAR_14, VAR_6, VAR_7);
 if (VAR_18) {
  if (VAR_15)
   FUNC_21(&VAR_6->node, 0);
  else
   FUNC_20(&VAR_6->node);
  return FUNC_1(VAR_18);
 }

 if (!VAR_15)
  FUNC_20(&VAR_6->node);

 VAR_13 = FUNC_19(VAR_6, &VAR_14.list, VAR_7, VAR_8, VAR_9,
          VAR_10, VAR_17);
 FUNC_12(&VAR_14);
 if (!FUNC_2(VAR_13) ||
     (FUNC_3(VAR_13) != -VAR_2 && FUNC_3(VAR_13) != -VAR_0)) {
  if (VAR_15)
   FUNC_21(&VAR_6->node, 0);
  return VAR_13;
 }

 if (!VAR_15) {
  FUNC_17(&VAR_6->node, VAR_4);
  VAR_15 = 1;
 }

 if (FUNC_3(VAR_13) == -VAR_0 ||
     VAR_17 != FUNC_7(&VAR_6->node.version))
  goto search_again_locked;

 VAR_12 = FUNC_5(VAR_6, VAR_7);
 if (FUNC_2(VAR_12)) {
  VAR_13 = FUNC_0(VAR_12);
  FUNC_21(&VAR_6->node, 0);
  return VAR_13;
 }

 FUNC_17(&VAR_12->node, VAR_5);
 FUNC_21(&VAR_6->node, 0);

 VAR_18 = FUNC_10(VAR_6, VAR_12);
 if (VAR_18)
  goto err_release_fg;

 VAR_16 = FUNC_6(VAR_6, VAR_7, VAR_8);
 if (FUNC_2(VAR_16)) {
  VAR_18 = FUNC_3(VAR_16);
  goto err_release_fg;
 }

 VAR_18 = FUNC_14(VAR_12, VAR_16);
 if (VAR_18) {
  FUNC_15(VAR_11->ftes_cache, VAR_16);
  goto err_release_fg;
 }

 FUNC_17(&VAR_16->node, VAR_3);
 FUNC_21(&VAR_12->node, 0);
 VAR_13 = FUNC_4(VAR_12, VAR_7, VAR_8, VAR_9, VAR_10, VAR_16);
 FUNC_21(&VAR_16->node, 0);
 FUNC_18(&VAR_16->node, 0);
 FUNC_18(&VAR_12->node, 0);
 return VAR_13;

err_release_fg:
 FUNC_21(&VAR_12->node, 0);
 FUNC_18(&VAR_12->node, 0);
 return FUNC_1(VAR_18);
}
