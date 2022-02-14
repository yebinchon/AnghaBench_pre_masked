
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct afs_vnode {int flags; } ;
struct TYPE_2__ {int error; } ;
struct afs_fs_cursor {TYPE_1__ ac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct afs_vnode*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static inline void FUNC_2(struct afs_fs_cursor *VAR_3,
       struct afs_vnode *VAR_4)
{
 if (VAR_3->ac.error == -VAR_1) {
  FUNC_1(VAR_0, &VAR_4->flags);
  FUNC_0(VAR_4, VAR_2);
 }
}
