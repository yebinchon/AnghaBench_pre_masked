
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_space_info {int flags; int total_bytes; } ;
struct btrfs_fs_info {int free_chunk_space; } ;
typedef enum btrfs_reserve_flush_enum { ____Placeholder_btrfs_reserve_flush_enum } btrfs_reserve_flush_enum ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct btrfs_fs_info*) ;
 int FUNC_3 (struct btrfs_space_info*,int) ;
 int FUNC_4 (struct btrfs_fs_info*) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct btrfs_fs_info *VAR_2,
     struct btrfs_space_info *VAR_3, u64 VAR_4,
     enum btrfs_reserve_flush_enum VAR_5,
     bool VAR_6)
{
 u64 VAR_7;
 u64 VAR_8;
 u64 VAR_9;
 int VAR_10;


 if (VAR_3->flags & VAR_0)
  return 0;

 if (VAR_6)
  VAR_7 = FUNC_4(VAR_2);
 else
  VAR_7 = FUNC_2(VAR_2);

 VAR_9 = FUNC_3(VAR_3, 1);
 VAR_8 = FUNC_0(&VAR_2->free_chunk_space);







 VAR_10 = FUNC_1(VAR_7);
 VAR_8 = FUNC_5(VAR_8, VAR_10);






 if (VAR_5 == VAR_1)
  VAR_8 >>= 3;
 else
  VAR_8 >>= 1;

 if (VAR_9 + VAR_4 < VAR_3->total_bytes + VAR_8)
  return 1;
 return 0;
}
