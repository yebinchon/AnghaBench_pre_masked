
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct fs_path {int dummy; } ;
struct btrfs_root {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct fs_path*) ;
 int FUNC_1 (struct btrfs_root*,scalar_t__,scalar_t__*,scalar_t__*,struct fs_path*) ;

__attribute__((used)) static int FUNC_2(struct btrfs_root *VAR_1,
        const u64 VAR_2,
        const u64 VAR_3,
        const u64 VAR_4,
        const u64 VAR_5,
        struct fs_path *VAR_6)
{
 u64 VAR_7 = VAR_4;

 if (VAR_2 == VAR_4)
  return VAR_3 == VAR_5;

 while (VAR_7 > VAR_0) {
  u64 VAR_8;
  u64 VAR_9;
  int VAR_10;

  FUNC_0(VAR_6);
  VAR_10 = FUNC_1(VAR_1, VAR_7, &VAR_8, &VAR_9, VAR_6);
  if (VAR_10 < 0)
   return VAR_10;
  if (VAR_8 == VAR_2)
   return VAR_9 == VAR_3;
  VAR_7 = VAR_8;
 }
 return 0;
}
