
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned short i_flags; int i_flags_lock; } ;
typedef TYPE_1__ xfs_inode_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void
FUNC_2(xfs_inode_t *VAR_0, unsigned short VAR_1)
{
 FUNC_0(&VAR_0->i_flags_lock);
 VAR_0->i_flags &= ~VAR_1;
 FUNC_1(&VAR_0->i_flags_lock);
}
