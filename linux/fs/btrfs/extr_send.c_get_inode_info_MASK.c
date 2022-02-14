
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_root*,struct btrfs_path*,int ,int *,int *,int *,int *,int *,int *) ;
 struct btrfs_path* FUNC_1 () ;
 int FUNC_2 (struct btrfs_path*) ;

__attribute__((used)) static int FUNC_3(struct btrfs_root *VAR_1,
     u64 VAR_2, u64 *VAR_3, u64 *VAR_4,
     u64 *VAR_5, u64 *VAR_6, u64 *VAR_7,
     u64 *VAR_8)
{
 struct btrfs_path *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_1();
 if (!VAR_9)
  return -VAR_0;
 VAR_10 = FUNC_0(VAR_1, VAR_9, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
          VAR_8);
 FUNC_2(VAR_9);
 return VAR_10;
}
