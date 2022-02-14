
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hugetlbfs_fs_context {int max_hpages; int nr_inodes; int mode; int min_hpages; void* min_val_type; void* max_val_type; int * hstate; int gid; int uid; } ;
struct fs_context {int * ops; struct hugetlbfs_fs_context* fs_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 struct hugetlbfs_fs_context* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct fs_context *VAR_5)
{
 struct hugetlbfs_fs_context *VAR_6;

 VAR_6 = FUNC_2(sizeof(struct hugetlbfs_fs_context), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->max_hpages = -1;
 VAR_6->nr_inodes = -1;
 VAR_6->uid = FUNC_1();
 VAR_6->gid = FUNC_0();
 VAR_6->mode = 0755;
 VAR_6->hstate = &VAR_3;
 VAR_6->min_hpages = -1;
 VAR_6->max_val_type = VAR_2;
 VAR_6->min_val_type = VAR_2;
 VAR_5->fs_private = VAR_6;
 VAR_5->ops = &VAR_4;
 return 0;
}
