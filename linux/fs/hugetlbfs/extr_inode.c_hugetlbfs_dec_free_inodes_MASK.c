
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hugetlbfs_sb_info {scalar_t__ free_inodes; int stat_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline int FUNC_3(struct hugetlbfs_sb_info *VAR_0)
{
 if (VAR_0->free_inodes >= 0) {
  FUNC_0(&VAR_0->stat_lock);
  if (FUNC_2(!VAR_0->free_inodes)) {
   FUNC_1(&VAR_0->stat_lock);
   return 0;
  }
  VAR_0->free_inodes--;
  FUNC_1(&VAR_0->stat_lock);
 }

 return 1;
}
