
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hugetlbfs_sb_info {scalar_t__ free_inodes; int stat_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct hugetlbfs_sb_info *VAR_0)
{
 if (VAR_0->free_inodes >= 0) {
  FUNC_0(&VAR_0->stat_lock);
  VAR_0->free_inodes++;
  FUNC_1(&VAR_0->stat_lock);
 }
}
