
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct mmc_test_dbgfs_file {int link; struct dentry* file; struct mmc_card* card; } ;
struct mmc_card {scalar_t__ debugfs_root; } ;
struct file_operations {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int ,scalar_t__,struct mmc_card*,struct file_operations const*) ;
 int FUNC_1 (struct dentry*) ;
 struct mmc_test_dbgfs_file* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct mmc_card *VAR_3,
 const char *VAR_4, umode_t VAR_5, const struct file_operations *VAR_6)
{
 struct dentry *VAR_7 = ((void*)0);
 struct mmc_test_dbgfs_file *VAR_8;

 if (VAR_3->debugfs_root)
  FUNC_0(VAR_4, VAR_5, VAR_3->debugfs_root, VAR_3, VAR_6);

 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_1);
 if (!VAR_8) {
  FUNC_1(VAR_7);
  return -VAR_0;
 }

 VAR_8->card = VAR_3;
 VAR_8->file = VAR_7;

 FUNC_3(&VAR_8->link, &VAR_2);
 return 0;
}
