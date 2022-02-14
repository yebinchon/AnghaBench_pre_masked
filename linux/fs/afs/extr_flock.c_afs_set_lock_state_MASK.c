
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_vnode {int lock_state; } ;
typedef enum afs_lock_state { ____Placeholder_afs_lock_state } afs_lock_state ;


 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static inline void FUNC_1(struct afs_vnode *VAR_0, enum afs_lock_state VAR_1)
{
 FUNC_0("STATE %u -> %u", VAR_0->lock_state, VAR_1);
 VAR_0->lock_state = VAR_1;
}
