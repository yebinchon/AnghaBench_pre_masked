
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_mod_elem {int node; } ;
struct btrfs_fs_info {int tree_mod_log; } ;


 int FUNC_0 (struct btrfs_fs_info*,struct tree_mod_elem*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static inline int
FUNC_2(struct btrfs_fs_info *VAR_0,
         struct tree_mod_elem **VAR_1,
         int VAR_2)
{
 int VAR_3, VAR_4;
 int VAR_5;

 for (VAR_3 = VAR_2 - 1; VAR_3 >= 0; VAR_3--) {
  VAR_5 = FUNC_0(VAR_0, VAR_1[VAR_3]);
  if (VAR_5) {
   for (VAR_4 = VAR_2 - 1; VAR_4 > VAR_3; VAR_4--)
    FUNC_1(&VAR_1[VAR_4]->node,
      &VAR_0->tree_mod_log);
   return VAR_5;
  }
 }

 return 0;
}
