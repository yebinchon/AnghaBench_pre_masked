
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct page {TYPE_2__* mapping; } ;
struct inode {int i_sb; } ;
struct btrfs_io_geometry {int len; } ;
struct btrfs_fs_info {int dummy; } ;
struct TYPE_3__ {int bi_size; scalar_t__ bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;
struct TYPE_4__ {struct inode* host; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct btrfs_fs_info*,int ,int,int,struct btrfs_io_geometry*) ;
 int FUNC_1 (struct bio*) ;
 struct btrfs_fs_info* FUNC_2 (int ) ;

int FUNC_3(struct page *VAR_1, size_t VAR_2, struct bio *VAR_3,
        unsigned long VAR_4)
{
 struct inode *VAR_5 = VAR_1->mapping->host;
 struct btrfs_fs_info *VAR_6 = FUNC_2(VAR_5->i_sb);
 u64 VAR_7 = (u64)VAR_3->bi_iter.bi_sector << 9;
 u64 VAR_8 = 0;
 u64 VAR_9;
 int VAR_10;
 struct btrfs_io_geometry VAR_11;

 if (VAR_4 & VAR_0)
  return 0;

 VAR_8 = VAR_3->bi_iter.bi_size;
 VAR_9 = VAR_8;
 VAR_10 = FUNC_0(VAR_6, FUNC_1(VAR_3), VAR_7, VAR_9,
        &VAR_11);
 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_11.len < VAR_8 + VAR_2)
  return 1;
 return 0;
}
