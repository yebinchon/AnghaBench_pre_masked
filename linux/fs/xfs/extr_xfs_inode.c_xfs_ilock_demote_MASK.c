
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int i_mmaplock; int i_lock; } ;
typedef TYPE_1__ xfs_inode_t ;
typedef int uint ;
struct TYPE_7__ {int i_rwsem; } ;


 int FUNC_0 (int) ;
 TYPE_4__* FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int,int ) ;

void
FUNC_5(
 xfs_inode_t *VAR_4,
 uint VAR_5)
{
 FUNC_0(VAR_5 & (VAR_1|VAR_2|VAR_0));
 FUNC_0((VAR_5 &
  ~(VAR_1|VAR_2|VAR_0)) == 0);

 if (VAR_5 & VAR_0)
  FUNC_3(&VAR_4->i_lock);
 if (VAR_5 & VAR_2)
  FUNC_3(&VAR_4->i_mmaplock);
 if (VAR_5 & VAR_1)
  FUNC_2(&FUNC_1(VAR_4)->i_rwsem);

 FUNC_4(VAR_4, VAR_5, VAR_3);
}
