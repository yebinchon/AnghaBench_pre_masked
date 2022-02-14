
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef void* u64 ;
struct btrfs_trans_handle {struct btrfs_fs_info* fs_info; TYPE_2__* transaction; } ;
struct TYPE_3__ {void* offset; void* ino; void* ref_root; } ;
struct btrfs_ref {int action; scalar_t__ type; void* real_root; int skip_qgroup; TYPE_1__ data_ref; void* parent; void* len; void* bytenr; } ;
struct btrfs_qgroup_extent_record {int dummy; } ;
struct btrfs_fs_info {int flags; } ;
struct btrfs_delayed_ref_root {int lock; } ;
struct btrfs_delayed_ref_head {int node; int * extent_op; void* offset; void* objectid; void* parent; void* root; } ;
struct btrfs_delayed_data_ref {int node; int * extent_op; void* offset; void* objectid; void* parent; void* root; } ;
struct TYPE_4__ {struct btrfs_delayed_ref_root delayed_refs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct btrfs_delayed_ref_head* FUNC_1 (struct btrfs_trans_handle*,struct btrfs_delayed_ref_head*,struct btrfs_qgroup_extent_record*,int,int*,int*,int*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct btrfs_fs_info*,struct btrfs_qgroup_extent_record*) ;
 int FUNC_3 (struct btrfs_trans_handle*) ;
 int FUNC_4 (struct btrfs_fs_info*,int *,void*,void*,void*,int,int ) ;
 int FUNC_5 (struct btrfs_delayed_ref_head*,struct btrfs_qgroup_extent_record*,void*,void*,void*,void*,int,int,int) ;
 int FUNC_6 (struct btrfs_trans_handle*,struct btrfs_delayed_ref_root*,struct btrfs_delayed_ref_head*,int *) ;
 scalar_t__ FUNC_7 (void*) ;
 struct btrfs_delayed_ref_head* FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,struct btrfs_delayed_ref_head*) ;
 struct btrfs_qgroup_extent_record* FUNC_10 (int,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int ,int *) ;
 int FUNC_14 (struct btrfs_fs_info*,int *,struct btrfs_delayed_ref_head*,int) ;

int FUNC_15(struct btrfs_trans_handle *VAR_10,
          struct btrfs_ref *VAR_11,
          u64 VAR_12, int *VAR_13,
          int *VAR_14)
{
 struct btrfs_fs_info *VAR_15 = VAR_10->fs_info;
 struct btrfs_delayed_data_ref *VAR_16;
 struct btrfs_delayed_ref_head *VAR_17;
 struct btrfs_delayed_ref_root *VAR_18;
 struct btrfs_qgroup_extent_record *VAR_19 = ((void*)0);
 int VAR_20;
 int VAR_21 = VAR_11->action;
 int VAR_22;
 u64 VAR_23 = VAR_11->bytenr;
 u64 VAR_24 = VAR_11->len;
 u64 VAR_25 = VAR_11->parent;
 u64 VAR_26 = VAR_11->data_ref.ref_root;
 u64 VAR_27 = VAR_11->data_ref.ino;
 u64 VAR_28 = VAR_11->data_ref.offset;
 u8 VAR_29;

 FUNC_0(VAR_11->type == VAR_4 && VAR_21);
 VAR_16 = FUNC_8(VAR_8, VAR_7);
 if (!VAR_16)
  return -VAR_6;

 if (VAR_25)
         VAR_29 = VAR_5;
 else
         VAR_29 = VAR_2;
 FUNC_4(VAR_15, &VAR_16->node, VAR_23, VAR_24,
    VAR_26, VAR_21, VAR_29);
 VAR_16->root = VAR_26;
 VAR_16->parent = VAR_25;
 VAR_16->objectid = VAR_27;
 VAR_16->offset = VAR_28;


 VAR_17 = FUNC_8(VAR_9, VAR_7);
 if (!VAR_17) {
  FUNC_9(VAR_8, VAR_16);
  return -VAR_6;
 }

 if (FUNC_13(VAR_3, &VAR_15->flags) &&
     FUNC_7(VAR_26) &&
     FUNC_7(VAR_11->real_root) &&
     !VAR_11->skip_qgroup) {
  VAR_19 = FUNC_10(sizeof(*VAR_19), VAR_7);
  if (!VAR_19) {
   FUNC_9(VAR_8, VAR_16);
   FUNC_9(VAR_9,
     VAR_17);
   return -VAR_6;
  }
 }

 FUNC_5(VAR_17, VAR_19, VAR_23, VAR_24, VAR_26,
         VAR_12, VAR_21, 1, 0);
 VAR_17->extent_op = ((void*)0);

 VAR_18 = &VAR_10->transaction->delayed_refs;
 FUNC_11(&VAR_18->lock);





 VAR_17 = FUNC_1(VAR_10, VAR_17, VAR_19,
     VAR_21, &VAR_20,
     VAR_13, VAR_14);

 VAR_22 = FUNC_6(VAR_10, VAR_18, VAR_17, &VAR_16->node);
 FUNC_12(&VAR_18->lock);





 FUNC_3(VAR_10);

 FUNC_14(VAR_10->fs_info, &VAR_16->node, VAR_16,
       VAR_21 == VAR_0 ?
       VAR_1 : VAR_21);
 if (VAR_22 > 0)
  FUNC_9(VAR_8, VAR_16);


 if (VAR_20)
  return FUNC_2(VAR_15, VAR_19);
 return 0;
}
