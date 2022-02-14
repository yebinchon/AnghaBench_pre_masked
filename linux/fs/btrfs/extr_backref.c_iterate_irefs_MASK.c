
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int dummy; } ;
typedef int iterate_irefs_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct btrfs_root*,struct btrfs_path*,int *,void*) ;
 int FUNC_1 (int ,struct btrfs_root*,struct btrfs_path*,int *,void*) ;

__attribute__((used)) static int FUNC_2(u64 VAR_1, struct btrfs_root *VAR_2,
    struct btrfs_path *VAR_3, iterate_irefs_t *VAR_4,
    void *VAR_5)
{
 int VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (!VAR_6)
  ++VAR_7;
 else if (VAR_6 != -VAR_0)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6 == -VAR_0 && VAR_7)
  return 0;

 return VAR_6;
}
