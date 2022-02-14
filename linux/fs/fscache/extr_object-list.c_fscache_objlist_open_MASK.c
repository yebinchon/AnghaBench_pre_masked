
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct fscache_objlist_data {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct fscache_objlist_data* FUNC_0 (struct file*,int *,int) ;
 int FUNC_1 (struct fscache_objlist_data*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_2, struct file *VAR_3)
{
 struct fscache_objlist_data *VAR_4;

 VAR_4 = FUNC_0(VAR_3, &VAR_1, sizeof(*VAR_4));
 if (!VAR_4)
  return -VAR_0;


 FUNC_1(VAR_4);

 return 0;
}
