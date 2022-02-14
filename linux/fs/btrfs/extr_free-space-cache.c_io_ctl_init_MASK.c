
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct page {int dummy; } ;
struct inode {int i_sb; } ;
struct btrfs_io_ctl {int num_pages; int check_crcs; struct inode* inode; int fs_info; int pages; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int,int,int ) ;
 int FUNC_6 (struct btrfs_io_ctl*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct btrfs_io_ctl *VAR_5, struct inode *VAR_6,
         int VAR_7)
{
 int VAR_8;
 int VAR_9 = 0;

 VAR_8 = FUNC_1(FUNC_4(VAR_6), VAR_4);

 if (FUNC_2(FUNC_0(VAR_6)) != VAR_0)
  VAR_9 = 1;


 if (VAR_7 && VAR_9 &&
     (VAR_8 * sizeof(u32) + sizeof(u64)) > VAR_4)
  return -VAR_2;

 FUNC_6(VAR_5, 0, sizeof(struct btrfs_io_ctl));

 VAR_5->pages = FUNC_5(VAR_8, sizeof(struct page *), VAR_3);
 if (!VAR_5->pages)
  return -VAR_1;

 VAR_5->num_pages = VAR_8;
 VAR_5->fs_info = FUNC_3(VAR_6->i_sb);
 VAR_5->check_crcs = VAR_9;
 VAR_5->inode = VAR_6;

 return 0;
}
