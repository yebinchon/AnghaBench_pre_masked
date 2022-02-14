
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_context {struct ffs_sb_fill_data* fs_private; } ;
struct ffs_sb_fill_data {scalar_t__ ffs_data; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ffs_sb_fill_data*) ;

__attribute__((used)) static void FUNC_3(struct fs_context *VAR_0)
{
 struct ffs_sb_fill_data *VAR_1 = VAR_0->fs_private;

 if (VAR_1) {
  if (VAR_1->ffs_data) {
   FUNC_1(VAR_1->ffs_data);
   FUNC_0(VAR_1->ffs_data);
  }

  FUNC_2(VAR_1);
 }
}
