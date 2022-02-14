
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_space_info {scalar_t__ bytes_used; scalar_t__ bytes_reserved; int total_bytes; } ;
struct btrfs_fs_info {int fs_state; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_fs_info*,struct btrfs_space_info*,int) ;
 int FUNC_1 (struct btrfs_fs_info*) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static inline int FUNC_4(struct btrfs_fs_info *VAR_1,
     struct btrfs_space_info *VAR_2,
     u64 VAR_3, bool VAR_4)
{
 u64 VAR_5 = FUNC_2(VAR_2->total_bytes, 98);


 if ((VAR_2->bytes_used + VAR_2->bytes_reserved) >= VAR_5)
  return 0;

 if (!FUNC_0(VAR_1, VAR_2,
           VAR_4))
  return 0;

 return (VAR_3 >= VAR_5 && !FUNC_1(VAR_1) &&
  !FUNC_3(VAR_0, &VAR_1->fs_state));
}
