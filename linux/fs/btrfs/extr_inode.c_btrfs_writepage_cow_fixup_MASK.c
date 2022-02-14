
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct page {TYPE_1__* mapping; } ;
struct inode {int i_sb; } ;
struct btrfs_writepage_fixup {int work; struct page* page; } ;
struct btrfs_fs_info {int fixup_workers; } ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int VAR_3 ;
 int FUNC_3 (int *,int ,int ,int *,int *) ;
 int FUNC_4 (int ,int *) ;
 struct btrfs_fs_info* FUNC_5 (int ) ;
 int VAR_4 ;
 int FUNC_6 (struct page*) ;
 struct btrfs_writepage_fixup* FUNC_7 (int,int ) ;

int FUNC_8(struct page *VAR_5, u64 VAR_6, u64 VAR_7)
{
 struct inode *VAR_8 = VAR_5->mapping->host;
 struct btrfs_fs_info *VAR_9 = FUNC_5(VAR_8->i_sb);
 struct btrfs_writepage_fixup *VAR_10;


 if (FUNC_2(VAR_5))
  return 0;

 if (FUNC_0(VAR_5))
  return -VAR_0;

 VAR_10 = FUNC_7(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_0;

 FUNC_1(VAR_5);
 FUNC_6(VAR_5);
 FUNC_3(&VAR_10->work, VAR_3,
   VAR_4, ((void*)0), ((void*)0));
 VAR_10->page = VAR_5;
 FUNC_4(VAR_9->fixup_workers, &VAR_10->work);
 return -VAR_1;
}
