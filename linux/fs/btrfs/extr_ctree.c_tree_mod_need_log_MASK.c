
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int dummy; } ;
struct btrfs_fs_info {int tree_mod_seq_list; } ;


 scalar_t__ FUNC_0 (struct extent_buffer*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 () ;

__attribute__((used)) static inline int FUNC_3(const struct btrfs_fs_info *VAR_0,
        struct extent_buffer *VAR_1)
{
 FUNC_2();
 if (FUNC_1(&(VAR_0)->tree_mod_seq_list))
  return 0;
 if (VAR_1 && FUNC_0(VAR_1) == 0)
  return 0;

 return 1;
}
