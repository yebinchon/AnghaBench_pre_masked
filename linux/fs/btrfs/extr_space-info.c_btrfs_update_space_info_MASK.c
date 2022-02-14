
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_space_info {int total_bytes; int disk_total; int bytes_used; int disk_used; int lock; scalar_t__ full; int bytes_readonly; } ;
struct btrfs_fs_info {int dummy; } ;


 int FUNC_0 (struct btrfs_space_info*) ;
 int FUNC_1 (int) ;
 struct btrfs_space_info* FUNC_2 (struct btrfs_fs_info*,int) ;
 int FUNC_3 (struct btrfs_fs_info*,struct btrfs_space_info*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct btrfs_fs_info *VAR_0, u64 VAR_1,
        u64 VAR_2, u64 VAR_3,
        u64 VAR_4,
        struct btrfs_space_info **VAR_5)
{
 struct btrfs_space_info *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_1);

 VAR_6 = FUNC_2(VAR_0, VAR_1);
 FUNC_0(VAR_6);
 FUNC_4(&VAR_6->lock);
 VAR_6->total_bytes += VAR_2;
 VAR_6->disk_total += VAR_2 * VAR_7;
 VAR_6->bytes_used += VAR_3;
 VAR_6->disk_used += VAR_3 * VAR_7;
 VAR_6->bytes_readonly += VAR_4;
 if (VAR_2 > 0)
  VAR_6->full = 0;
 FUNC_3(VAR_0, VAR_6);
 FUNC_5(&VAR_6->lock);
 *VAR_5 = VAR_6;
}
