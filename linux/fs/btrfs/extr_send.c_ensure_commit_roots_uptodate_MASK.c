
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct send_ctx {int clone_roots_cnt; int send_root; TYPE_2__* clone_roots; TYPE_3__* parent_root; } ;
struct btrfs_trans_handle {int dummy; } ;
struct TYPE_6__ {scalar_t__ node; scalar_t__ commit_root; } ;
struct TYPE_5__ {TYPE_1__* root; } ;
struct TYPE_4__ {scalar_t__ node; scalar_t__ commit_root; } ;


 scalar_t__ FUNC_0 (struct btrfs_trans_handle*) ;
 int FUNC_1 (struct btrfs_trans_handle*) ;
 int FUNC_2 (struct btrfs_trans_handle*) ;
 int FUNC_3 (struct btrfs_trans_handle*) ;
 struct btrfs_trans_handle* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct send_ctx *VAR_0)
{
 int VAR_1;
 struct btrfs_trans_handle *VAR_2 = ((void*)0);

again:
 if (VAR_0->parent_root &&
     VAR_0->parent_root->node != VAR_0->parent_root->commit_root)
  goto commit_trans;

 for (VAR_1 = 0; VAR_1 < VAR_0->clone_roots_cnt; VAR_1++)
  if (VAR_0->clone_roots[VAR_1].root->node !=
      VAR_0->clone_roots[VAR_1].root->commit_root)
   goto commit_trans;

 if (VAR_2)
  return FUNC_3(VAR_2);

 return 0;

commit_trans:

 if (!VAR_2) {
  VAR_2 = FUNC_4(VAR_0->send_root);
  if (FUNC_0(VAR_2))
   return FUNC_1(VAR_2);
  goto again;
 }

 return FUNC_2(VAR_2);
}
