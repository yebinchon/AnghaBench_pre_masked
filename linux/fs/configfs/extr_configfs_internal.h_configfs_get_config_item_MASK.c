
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_lock; struct configfs_dirent* d_fsdata; } ;
struct configfs_dirent {int s_element; } ;
struct config_item {int dummy; } ;


 struct config_item* FUNC_0 (int ) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline struct config_item *FUNC_4(struct dentry *VAR_0)
{
 struct config_item * VAR_1 = ((void*)0);

 FUNC_2(&VAR_0->d_lock);
 if (!FUNC_1(VAR_0)) {
  struct configfs_dirent * VAR_2 = VAR_0->d_fsdata;
  VAR_1 = FUNC_0(VAR_2->s_element);
 }
 FUNC_3(&VAR_0->d_lock);

 return VAR_1;
}
