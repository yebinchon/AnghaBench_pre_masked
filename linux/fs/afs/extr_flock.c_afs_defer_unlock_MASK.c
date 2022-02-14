
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_vnode {scalar_t__ lock_state; int lock_work; int granted_locks; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct afs_vnode*,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (struct afs_vnode*,int *,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct afs_vnode *VAR_5)
{
 FUNC_0("%u", VAR_5->lock_state);

 if (FUNC_3(&VAR_5->granted_locks) &&
     (VAR_5->lock_state == VAR_1 ||
      VAR_5->lock_state == VAR_0)) {
  FUNC_2(&VAR_5->lock_work);

  FUNC_1(VAR_5, VAR_2);
  FUNC_5(VAR_5, ((void*)0), VAR_3, 0);
  FUNC_4(VAR_4, &VAR_5->lock_work, 0);
 }
}
