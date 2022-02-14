
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct ulist_node {int aux; int val; } ;
struct ulist_iterator {int dummy; } ;
struct inode {int i_ino; } ;
struct extent_changeset {int bytes_changed; int range_changed; } ;
struct TYPE_6__ {TYPE_2__* root; int io_tree; } ;
struct TYPE_4__ {int objectid; } ;
struct TYPE_5__ {TYPE_1__ root_key; int fs_info; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ulist_iterator*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (int ,char*,int ,int ,int ) ;
 int FUNC_5 (int *,int ,int ,int ,struct extent_changeset*) ;
 int FUNC_6 (struct extent_changeset*) ;
 int FUNC_7 (struct extent_changeset*) ;
 struct ulist_node* FUNC_8 (int *,struct ulist_iterator*) ;

void FUNC_9(struct inode *VAR_2)
{
 struct extent_changeset VAR_3;
 struct ulist_node *VAR_4;
 struct ulist_iterator VAR_5;
 int VAR_6;

 FUNC_6(&VAR_3);
 VAR_6 = FUNC_5(&FUNC_0(VAR_2)->io_tree, 0, (u64)-1,
   VAR_1, &VAR_3);

 FUNC_2(VAR_6 < 0);
 if (FUNC_2(VAR_3.bytes_changed)) {
  FUNC_1(&VAR_5);
  while ((VAR_4 = FUNC_8(&VAR_3.range_changed, &VAR_5))) {
   FUNC_4(FUNC_0(VAR_2)->root->fs_info,
    "leaking qgroup reserved space, ino: %lu, start: %llu, end: %llu",
    VAR_2->i_ino, VAR_4->val, VAR_4->aux);
  }
  FUNC_3(FUNC_0(VAR_2)->root->fs_info,
    FUNC_0(VAR_2)->root->root_key.objectid,
    VAR_3.bytes_changed, VAR_0);

 }
 FUNC_7(&VAR_3);
}
