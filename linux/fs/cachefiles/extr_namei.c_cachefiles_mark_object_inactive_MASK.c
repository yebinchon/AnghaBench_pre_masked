
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct cachefiles_object {int flags; int active_node; struct dentry* dentry; } ;
struct cachefiles_cache {int f_released; int b_released; int active_lock; int active_nodes; } ;
typedef int blkcnt_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct cachefiles_cache*) ;
 int FUNC_3 (int ,int *) ;
 struct inode* FUNC_4 (struct dentry*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct cachefiles_object*,struct dentry*,struct inode*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct cachefiles_cache *VAR_1,
         struct cachefiles_object *VAR_2,
         blkcnt_t VAR_3)
{
 struct dentry *VAR_4 = VAR_2->dentry;
 struct inode *VAR_5 = FUNC_4(VAR_4);

 FUNC_6(VAR_2, VAR_4, VAR_5);

 FUNC_8(&VAR_1->active_lock);
 FUNC_5(&VAR_2->active_node, &VAR_1->active_nodes);
 FUNC_3(VAR_0, &VAR_2->flags);
 FUNC_9(&VAR_1->active_lock);

 FUNC_7(&VAR_2->flags, VAR_0);




 FUNC_1(VAR_3, &VAR_1->b_released);
 if (FUNC_0(&VAR_1->f_released))
  FUNC_2(VAR_1);
}
