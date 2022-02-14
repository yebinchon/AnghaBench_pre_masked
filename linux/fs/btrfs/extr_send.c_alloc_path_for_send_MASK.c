
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_path {int search_commit_root; int skip_locking; int need_commit_sem; } ;


 struct btrfs_path* FUNC_0 () ;

__attribute__((used)) static struct btrfs_path *FUNC_1(void)
{
 struct btrfs_path *VAR_0;

 VAR_0 = FUNC_0();
 if (!VAR_0)
  return ((void*)0);
 VAR_0->search_commit_root = 1;
 VAR_0->skip_locking = 1;
 VAR_0->need_commit_sem = 1;
 return VAR_0;
}
