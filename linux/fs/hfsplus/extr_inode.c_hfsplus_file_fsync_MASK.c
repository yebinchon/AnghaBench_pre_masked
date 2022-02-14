
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct inode {TYPE_9__* i_sb; } ;
struct hfsplus_sb_info {int flags; TYPE_8__* alloc_file; TYPE_7__* attr_tree; TYPE_5__* ext_tree; TYPE_3__* cat_tree; } ;
struct hfsplus_inode_info {int flags; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef int loff_t ;
struct TYPE_18__ {int s_bdev; } ;
struct TYPE_17__ {int i_mapping; } ;
struct TYPE_16__ {TYPE_6__* inode; } ;
struct TYPE_15__ {int i_mapping; } ;
struct TYPE_14__ {TYPE_4__* inode; } ;
struct TYPE_13__ {int i_mapping; } ;
struct TYPE_12__ {TYPE_2__* inode; } ;
struct TYPE_11__ {int i_mapping; } ;
struct TYPE_10__ {struct inode* host; } ;


 int VAR_0 ;
 struct hfsplus_inode_info* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct hfsplus_sb_info* FUNC_1 (TYPE_9__*) ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (struct file*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct inode*,int) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,int *) ;

int FUNC_11(struct file *VAR_6, loff_t VAR_7, loff_t VAR_8,
         int VAR_9)
{
 struct inode *VAR_10 = VAR_6->f_mapping->host;
 struct hfsplus_inode_info *VAR_11 = FUNC_0(VAR_10);
 struct hfsplus_sb_info *VAR_12 = FUNC_1(VAR_10->i_sb);
 int VAR_13 = 0, VAR_14;

 VAR_13 = FUNC_3(VAR_6, VAR_7, VAR_8);
 if (VAR_13)
  return VAR_13;
 FUNC_5(VAR_10);




 FUNC_8(VAR_10, 1);




 if (FUNC_9(VAR_3, &VAR_11->flags))
  VAR_13 = FUNC_4(VAR_12->cat_tree->inode->i_mapping);

 if (FUNC_9(VAR_4, &VAR_11->flags)) {
  VAR_14 =
   FUNC_4(VAR_12->ext_tree->inode->i_mapping);
  if (!VAR_13)
   VAR_13 = VAR_14;
 }

 if (FUNC_9(VAR_2, &VAR_11->flags)) {
  if (VAR_12->attr_tree) {
   VAR_14 =
    FUNC_4(
         VAR_12->attr_tree->inode->i_mapping);
   if (!VAR_13)
    VAR_13 = VAR_14;
  } else {
   FUNC_7("sync non-existent attributes tree\n");
  }
 }

 if (FUNC_9(VAR_1, &VAR_11->flags)) {
  VAR_14 = FUNC_4(VAR_12->alloc_file->i_mapping);
  if (!VAR_13)
   VAR_13 = VAR_14;
 }

 if (!FUNC_10(VAR_5, &VAR_12->flags))
  FUNC_2(VAR_10->i_sb->s_bdev, VAR_0, ((void*)0));

 FUNC_6(VAR_10);

 return VAR_13;
}
