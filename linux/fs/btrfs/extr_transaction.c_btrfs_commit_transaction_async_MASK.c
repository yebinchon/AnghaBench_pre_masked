
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct btrfs_transaction {int use_count; } ;
struct btrfs_trans_handle {struct btrfs_transaction* transaction; int root; struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int sb; } ;
struct btrfs_async_commit {int work; TYPE_2__* newtrans; } ;
struct TYPE_6__ {int type; } ;
struct TYPE_5__ {struct btrfs_trans_handle* journal_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct btrfs_trans_handle*) ;
 TYPE_2__* FUNC_5 (int ) ;
 int FUNC_6 (struct btrfs_transaction*) ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (struct btrfs_async_commit*) ;
 struct btrfs_async_commit* FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct btrfs_fs_info*,struct btrfs_transaction*) ;
 int FUNC_12 (struct btrfs_fs_info*,struct btrfs_transaction*) ;

int FUNC_13(struct btrfs_trans_handle *VAR_6,
       int VAR_7)
{
 struct btrfs_fs_info *VAR_8 = VAR_6->fs_info;
 struct btrfs_async_commit *VAR_9;
 struct btrfs_transaction *VAR_10;

 VAR_9 = FUNC_8(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 FUNC_0(&VAR_9->work, VAR_5);
 VAR_9->newtrans = FUNC_5(VAR_6->root);
 if (FUNC_1(VAR_9->newtrans)) {
  int VAR_11 = FUNC_2(VAR_9->newtrans);
  FUNC_7(VAR_9);
  return VAR_11;
 }


 VAR_10 = VAR_6->transaction;
 FUNC_9(&VAR_10->use_count);

 FUNC_4(VAR_6);





 if (VAR_9->newtrans->type & VAR_3)
  FUNC_3(VAR_8->sb, VAR_2);

 FUNC_10(&VAR_9->work);


 if (VAR_7)
  FUNC_12(VAR_8, VAR_10);
 else
  FUNC_11(VAR_8, VAR_10);

 if (VAR_4->journal_info == VAR_6)
  VAR_4->journal_info = ((void*)0);

 FUNC_6(VAR_10);
 return 0;
}
