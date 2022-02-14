
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_vnode {int lock; int permit_cache; } ;
struct afs_permits {int dummy; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct afs_permits*) ;
 int FUNC_2 (int *) ;
 struct afs_permits* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct afs_vnode *VAR_0)
{
 struct afs_permits *VAR_1;

 FUNC_4(&VAR_0->lock);
 VAR_1 = FUNC_3(VAR_0->permit_cache,
         FUNC_2(&VAR_0->lock));
 FUNC_0(VAR_0->permit_cache, ((void*)0));
 FUNC_5(&VAR_0->lock);

 FUNC_1(VAR_1);
}
