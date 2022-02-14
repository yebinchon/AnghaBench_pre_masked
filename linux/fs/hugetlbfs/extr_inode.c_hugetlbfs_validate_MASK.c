
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hugetlbfs_fs_context {scalar_t__ max_hpages; scalar_t__ max_val_type; scalar_t__ min_hpages; scalar_t__ min_val_type; int min_size_opt; int hstate; int max_size_opt; } ;
struct fs_context {struct hugetlbfs_fs_context* fs_private; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct fs_context *VAR_2)
{
 struct hugetlbfs_fs_context *VAR_3 = VAR_2->fs_private;





 VAR_3->max_hpages = FUNC_0(VAR_3->hstate,
         VAR_3->max_size_opt,
         VAR_3->max_val_type);
 VAR_3->min_hpages = FUNC_0(VAR_3->hstate,
         VAR_3->min_size_opt,
         VAR_3->min_val_type);




 if (VAR_3->max_val_type > VAR_1 &&
     VAR_3->min_hpages > VAR_3->max_hpages) {
  FUNC_1("Minimum size can not be greater than maximum size\n");
  return -VAR_0;
 }

 return 0;
}
