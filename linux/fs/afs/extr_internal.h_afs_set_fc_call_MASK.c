
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_fs_cursor {int flags; int type; } ;
struct afs_call {int intr; int type; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct afs_call *VAR_1, struct afs_fs_cursor *VAR_2)
{
 VAR_1->intr = VAR_2->flags & VAR_0;
 VAR_2->type = VAR_1->type;
}
