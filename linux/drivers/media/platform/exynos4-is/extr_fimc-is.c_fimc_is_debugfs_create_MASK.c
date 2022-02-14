
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fimc_is {int * debugfs_entry; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char*,int *) ;
 struct dentry* FUNC_1 (char*,int ,int *,struct fimc_is*,int *) ;
 int FUNC_2 (struct fimc_is*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct fimc_is *VAR_3)
{
 struct dentry *VAR_4;

 VAR_3->debugfs_entry = FUNC_0("fimc_is", ((void*)0));

 VAR_4 = FUNC_1("fw_log", VAR_1, VAR_3->debugfs_entry,
         VAR_3, &VAR_2);
 if (!VAR_4)
  FUNC_2(VAR_3);

 return VAR_3->debugfs_entry == ((void*)0) ? -VAR_0 : 0;
}
