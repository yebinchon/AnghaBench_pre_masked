
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_fs_info {int nodesize; } ;


 int FUNC_0 (struct btrfs_fs_info*,int) ;
 int FUNC_1 (struct btrfs_fs_info*,int) ;
 int FUNC_2 (struct btrfs_fs_info*,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct btrfs_fs_info *VAR_0,
        u64 VAR_1, u64 *VAR_2,
        u64 *VAR_3)
{
 u64 VAR_4 = FUNC_3(VAR_1);
 u64 VAR_5 = FUNC_2(VAR_0, VAR_1);
 u64 VAR_6 = FUNC_1(VAR_0, 1);

 *VAR_2 = FUNC_0(VAR_0,
      VAR_4 + VAR_5);





 *VAR_2 += VAR_6;
 *VAR_3 = VAR_4 * VAR_0->nodesize;
}
