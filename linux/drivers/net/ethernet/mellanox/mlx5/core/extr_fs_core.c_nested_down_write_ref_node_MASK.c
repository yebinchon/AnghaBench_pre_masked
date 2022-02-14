
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_node {int refcount; int lock; } ;
typedef enum fs_i_lock_class { ____Placeholder_fs_i_lock_class } fs_i_lock_class ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct fs_node *VAR_0,
           enum fs_i_lock_class VAR_1)
{
 if (VAR_0) {
  FUNC_0(&VAR_0->lock, VAR_1);
  FUNC_1(&VAR_0->refcount);
 }
}
