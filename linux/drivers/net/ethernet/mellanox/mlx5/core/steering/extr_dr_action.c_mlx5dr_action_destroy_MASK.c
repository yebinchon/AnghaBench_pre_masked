
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {TYPE_5__* dmn; struct mlx5dr_action* data; int chunk; } ;
struct TYPE_10__ {TYPE_3__* dmn; int reformat_id; } ;
struct TYPE_8__ {TYPE_1__* tbl; int is_fw_tbl; } ;
struct mlx5dr_action {int action_type; TYPE_6__ rewrite; TYPE_4__ reformat; TYPE_2__ dest_tbl; int refcount; } ;
struct TYPE_11__ {int refcount; } ;
struct TYPE_9__ {int refcount; int mdev; } ;
struct TYPE_7__ {int refcount; } ;
 int VAR_0 ;
 int FUNC_0 (struct mlx5dr_action*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct mlx5dr_action *VAR_1)
{
 if (FUNC_4(&VAR_1->refcount) > 1)
  return -VAR_0;

 switch (VAR_1->action_type) {
 case 133:
  if (!VAR_1->dest_tbl.is_fw_tbl)
   FUNC_3(&VAR_1->dest_tbl.tbl->refcount);
  break;
 case 129:
  FUNC_3(&VAR_1->reformat.dmn->refcount);
  break;
 case 128:
  FUNC_2(VAR_1->rewrite.chunk);
  FUNC_3(&VAR_1->reformat.dmn->refcount);
  break;
 case 132:
 case 131:
  FUNC_1((VAR_1->reformat.dmn)->mdev,
      VAR_1->reformat.reformat_id);
  FUNC_3(&VAR_1->reformat.dmn->refcount);
  break;
 case 130:
  FUNC_2(VAR_1->rewrite.chunk);
  FUNC_0(VAR_1->rewrite.data);
  FUNC_3(&VAR_1->rewrite.dmn->refcount);
  break;
 default:
  break;
 }

 FUNC_0(VAR_1);
 return 0;
}
