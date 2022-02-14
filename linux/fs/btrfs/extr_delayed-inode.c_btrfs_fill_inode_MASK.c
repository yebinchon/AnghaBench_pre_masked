
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_10__ {void* tv_nsec; void* tv_sec; } ;
struct TYPE_9__ {void* tv_nsec; void* tv_sec; } ;
struct TYPE_8__ {void* tv_nsec; void* tv_sec; } ;
struct inode {int i_generation; TYPE_3__ i_ctime; TYPE_2__ i_mtime; TYPE_1__ i_atime; scalar_t__ i_rdev; int i_mode; } ;
struct btrfs_inode_item {int otime; int ctime; int mtime; int atime; } ;
struct btrfs_delayed_node {int mutex; struct btrfs_inode_item inode_item; int flags; } ;
struct TYPE_11__ {void* tv_nsec; void* tv_sec; } ;
struct TYPE_12__ {scalar_t__ index_cnt; int generation; TYPE_4__ i_otime; int flags; int last_trans; } ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 struct btrfs_delayed_node* FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (struct btrfs_delayed_node*) ;
 int FUNC_4 (struct btrfs_inode_item*) ;
 int FUNC_5 (struct btrfs_inode_item*) ;
 int FUNC_6 (struct btrfs_inode_item*) ;
 int FUNC_7 (struct btrfs_inode_item*) ;
 int FUNC_8 (struct btrfs_inode_item*) ;
 int FUNC_9 (struct btrfs_inode_item*) ;
 int FUNC_10 (struct btrfs_inode_item*) ;
 int FUNC_11 (struct btrfs_inode_item*) ;
 int FUNC_12 (struct btrfs_inode_item*) ;
 int FUNC_13 (struct btrfs_inode_item*) ;
 int FUNC_14 (struct btrfs_inode_item*) ;
 void* FUNC_15 (int *) ;
 void* FUNC_16 (int *) ;
 int FUNC_17 (struct inode*,int ) ;
 int FUNC_18 (struct inode*,int ) ;
 int FUNC_19 (struct inode*,int ) ;
 int FUNC_20 (struct inode*,int ) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (struct inode*,int ) ;
 int FUNC_24 (int ,int *) ;

int FUNC_25(struct inode *VAR_2, u32 *VAR_3)
{
 struct btrfs_delayed_node *VAR_4;
 struct btrfs_inode_item *VAR_5;

 VAR_4 = FUNC_1(FUNC_0(VAR_2));
 if (!VAR_4)
  return -VAR_1;

 FUNC_21(&VAR_4->mutex);
 if (!FUNC_24(VAR_0, &VAR_4->flags)) {
  FUNC_22(&VAR_4->mutex);
  FUNC_3(VAR_4);
  return -VAR_1;
 }

 VAR_5 = &VAR_4->inode_item;

 FUNC_18(VAR_2, FUNC_14(VAR_5));
 FUNC_17(VAR_2, FUNC_6(VAR_5));
 FUNC_2(FUNC_0(VAR_2), FUNC_12(VAR_5));
 VAR_2->i_mode = FUNC_7(VAR_5);
 FUNC_23(VAR_2, FUNC_9(VAR_5));
 FUNC_19(VAR_2, FUNC_8(VAR_5));
 FUNC_0(VAR_2)->generation = FUNC_5(VAR_5);
        FUNC_0(VAR_2)->last_trans = FUNC_13(VAR_5);

 FUNC_20(VAR_2,
       FUNC_11(VAR_5));
 VAR_2->i_rdev = 0;
 *VAR_3 = FUNC_10(VAR_5);
 FUNC_0(VAR_2)->flags = FUNC_4(VAR_5);

 VAR_2->i_atime.tv_sec = FUNC_16(&VAR_5->atime);
 VAR_2->i_atime.tv_nsec = FUNC_15(&VAR_5->atime);

 VAR_2->i_mtime.tv_sec = FUNC_16(&VAR_5->mtime);
 VAR_2->i_mtime.tv_nsec = FUNC_15(&VAR_5->mtime);

 VAR_2->i_ctime.tv_sec = FUNC_16(&VAR_5->ctime);
 VAR_2->i_ctime.tv_nsec = FUNC_15(&VAR_5->ctime);

 FUNC_0(VAR_2)->i_otime.tv_sec =
  FUNC_16(&VAR_5->otime);
 FUNC_0(VAR_2)->i_otime.tv_nsec =
  FUNC_15(&VAR_5->otime);

 VAR_2->i_generation = FUNC_0(VAR_2)->generation;
 FUNC_0(VAR_2)->index_cnt = (u64)-1;

 FUNC_22(&VAR_4->mutex);
 FUNC_3(VAR_4);
 return 0;
}
