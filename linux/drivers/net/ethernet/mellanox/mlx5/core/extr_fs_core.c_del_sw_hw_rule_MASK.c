
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int action; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_2__* ft; } ;
struct TYPE_5__ {struct fs_node* parent; } ;
struct mlx5_flow_rule {scalar_t__ sw_action; int modify_mask; scalar_t__ dests_size; TYPE_4__ action; TYPE_3__ dest_attr; int next_ft; TYPE_1__ node; } ;
struct fs_node {int dummy; } ;
struct fs_fte {scalar_t__ sw_action; int modify_mask; scalar_t__ dests_size; TYPE_4__ action; TYPE_3__ dest_attr; int next_ft; TYPE_1__ node; } ;
struct TYPE_6__ {int lock; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct mlx5_flow_rule*,struct fs_node*) ;
 int FUNC_2 (struct mlx5_flow_rule*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct mlx5_flow_rule*) ;

__attribute__((used)) static void FUNC_7(struct fs_node *VAR_7)
{
 struct mlx5_flow_rule *VAR_8;
 struct fs_fte *VAR_9;

 FUNC_1(VAR_8, VAR_7);
 FUNC_1(VAR_9, VAR_8->node.parent);
 FUNC_6(VAR_8);
 if (VAR_8->sw_action == VAR_2) {
  FUNC_4(&VAR_8->dest_attr.ft->lock);
  FUNC_3(&VAR_8->next_ft);
  FUNC_5(&VAR_8->dest_attr.ft->lock);
 }

 if (VAR_8->dest_attr.type == VAR_3 &&
     --VAR_9->dests_size) {
  VAR_9->modify_mask |=
   FUNC_0(VAR_4) |
   FUNC_0(VAR_6);
  VAR_9->action.action &= ~VAR_0;
  goto out;
 }

 if ((VAR_9->action.action & VAR_1) &&
     --VAR_9->dests_size) {
  VAR_9->modify_mask |=
   FUNC_0(VAR_5);
 }
out:
 FUNC_2(VAR_8);
}
