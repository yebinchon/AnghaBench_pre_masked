
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct btrfs_root_backup {int dummy; } ;
struct btrfs_fs_info {int backup_root_index; TYPE_7__* super_for_commit; TYPE_8__* super_copy; TYPE_6__* csum_root; TYPE_5__* dev_root; TYPE_4__* fs_root; TYPE_3__* extent_root; TYPE_2__* chunk_root; TYPE_1__* tree_root; } ;
struct TYPE_21__ {int super_roots; } ;
struct TYPE_20__ {struct btrfs_root_backup* super_roots; } ;
struct TYPE_19__ {TYPE_11__* node; } ;
struct TYPE_18__ {TYPE_11__* node; } ;
struct TYPE_17__ {TYPE_11__* node; } ;
struct TYPE_16__ {TYPE_11__* node; } ;
struct TYPE_15__ {TYPE_11__* node; } ;
struct TYPE_14__ {TYPE_11__* node; } ;
struct TYPE_13__ {int start; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct btrfs_root_backup*) ;
 scalar_t__ FUNC_1 (TYPE_11__*) ;
 int FUNC_2 (TYPE_11__*) ;
 int FUNC_3 (struct btrfs_root_backup*,int ) ;
 int FUNC_4 (struct btrfs_root_backup*,int ) ;
 int FUNC_5 (struct btrfs_root_backup*,scalar_t__) ;
 int FUNC_6 (struct btrfs_root_backup*,int ) ;
 int FUNC_7 (struct btrfs_root_backup*,int ) ;
 int FUNC_8 (struct btrfs_root_backup*,scalar_t__) ;
 int FUNC_9 (struct btrfs_root_backup*,int ) ;
 int FUNC_10 (struct btrfs_root_backup*,int ) ;
 int FUNC_11 (struct btrfs_root_backup*,scalar_t__) ;
 int FUNC_12 (struct btrfs_root_backup*,int ) ;
 int FUNC_13 (struct btrfs_root_backup*,int ) ;
 int FUNC_14 (struct btrfs_root_backup*,scalar_t__) ;
 int FUNC_15 (struct btrfs_root_backup*,int ) ;
 int FUNC_16 (struct btrfs_root_backup*,int ) ;
 int FUNC_17 (struct btrfs_root_backup*,scalar_t__) ;
 int FUNC_18 (struct btrfs_root_backup*,int ) ;
 int FUNC_19 (struct btrfs_root_backup*,int ) ;
 int FUNC_20 (struct btrfs_root_backup*,int ) ;
 int FUNC_21 (struct btrfs_root_backup*,int ) ;
 int FUNC_22 (struct btrfs_root_backup*,scalar_t__) ;
 int FUNC_23 (struct btrfs_root_backup*,int ) ;
 int FUNC_24 (TYPE_8__*) ;
 int FUNC_25 (TYPE_8__*) ;
 int FUNC_26 (TYPE_8__*) ;
 int FUNC_27 (int *,struct btrfs_root_backup**,int) ;
 int FUNC_28 (struct btrfs_root_backup*,int ,int) ;

__attribute__((used)) static void FUNC_29(struct btrfs_fs_info *VAR_1)
{
 int VAR_2;
 struct btrfs_root_backup *VAR_3;
 int VAR_4;

 VAR_2 = VAR_1->backup_root_index;
 VAR_4 = (VAR_2 + VAR_0 - 1) %
  VAR_0;





 VAR_3 = VAR_1->super_for_commit->super_roots + VAR_4;
 if (FUNC_0(VAR_3) ==
     FUNC_1(VAR_1->tree_root->node))
  VAR_2 = VAR_4;

 VAR_3 = VAR_1->super_for_commit->super_roots + VAR_2;





 FUNC_28(VAR_3, 0, sizeof(*VAR_3));

 VAR_1->backup_root_index = (VAR_2 + 1) % VAR_0;

 FUNC_21(VAR_3, VAR_1->tree_root->node->start);
 FUNC_22(VAR_3,
          FUNC_1(VAR_1->tree_root->node));

 FUNC_23(VAR_3,
          FUNC_2(VAR_1->tree_root->node));

 FUNC_4(VAR_3, VAR_1->chunk_root->node->start);
 FUNC_5(VAR_3,
          FUNC_1(VAR_1->chunk_root->node));
 FUNC_6(VAR_3,
          FUNC_2(VAR_1->chunk_root->node));

 FUNC_13(VAR_3, VAR_1->extent_root->node->start);
 FUNC_14(VAR_3,
          FUNC_1(VAR_1->extent_root->node));
 FUNC_15(VAR_3,
          FUNC_2(VAR_1->extent_root->node));





 if (VAR_1->fs_root && VAR_1->fs_root->node) {
  FUNC_16(VAR_3,
      VAR_1->fs_root->node->start);
  FUNC_17(VAR_3,
          FUNC_1(VAR_1->fs_root->node));
  FUNC_18(VAR_3,
          FUNC_2(VAR_1->fs_root->node));
 }

 FUNC_10(VAR_3, VAR_1->dev_root->node->start);
 FUNC_11(VAR_3,
          FUNC_1(VAR_1->dev_root->node));
 FUNC_12(VAR_3,
           FUNC_2(VAR_1->dev_root->node));

 FUNC_7(VAR_3, VAR_1->csum_root->node->start);
 FUNC_8(VAR_3,
          FUNC_1(VAR_1->csum_root->node));
 FUNC_9(VAR_3,
          FUNC_2(VAR_1->csum_root->node));

 FUNC_20(VAR_3,
        FUNC_26(VAR_1->super_copy));
 FUNC_3(VAR_3,
        FUNC_24(VAR_1->super_copy));
 FUNC_19(VAR_3,
        FUNC_25(VAR_1->super_copy));





 FUNC_27(&VAR_1->super_copy->super_roots,
        &VAR_1->super_for_commit->super_roots,
        sizeof(*VAR_3) * VAR_0);
}
