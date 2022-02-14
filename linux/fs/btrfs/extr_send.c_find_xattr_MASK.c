
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct find_xattr_ctx {char const* name; int name_len; int found_idx; char* found_data; int found_data_len; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_key {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct btrfs_root*,struct btrfs_path*,int ,struct find_xattr_ctx*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct btrfs_root *VAR_2,
        struct btrfs_path *VAR_3,
        struct btrfs_key *VAR_4,
        const char *VAR_5, int VAR_6,
        char **VAR_7, int *VAR_8)
{
 int VAR_9;
 struct find_xattr_ctx VAR_10;

 VAR_10.name = VAR_5;
 VAR_10.name_len = VAR_6;
 VAR_10.found_idx = -1;
 VAR_10.found_data = ((void*)0);
 VAR_10.found_data_len = 0;

 VAR_9 = FUNC_0(VAR_2, VAR_3, VAR_1, &VAR_10);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_10.found_idx == -1)
  return -VAR_0;
 if (VAR_7) {
  *VAR_7 = VAR_10.found_data;
  *VAR_8 = VAR_10.found_data_len;
 } else {
  FUNC_1(VAR_10.found_data);
 }
 return VAR_10.found_idx;
}
