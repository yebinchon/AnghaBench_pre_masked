
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_fs_info {int dummy; } ;


 int FUNC_0 (struct btrfs_fs_info*,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static inline u64 FUNC_2(struct btrfs_fs_info *VAR_0,
     u64 VAR_1)
{
 u64 VAR_2;
 u64 VAR_3;

 VAR_2 = FUNC_0(VAR_0, 1);
 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_3)
  VAR_3 = 1;
 return VAR_3;
}
