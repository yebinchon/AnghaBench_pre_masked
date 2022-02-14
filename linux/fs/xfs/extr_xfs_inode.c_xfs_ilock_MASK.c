
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int i_lock; int i_mmaplock; } ;
typedef TYPE_1__ xfs_inode_t ;
typedef int uint ;
struct TYPE_7__ {int i_rwsem; } ;


 int FUNC_0 (int) ;
 TYPE_4__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (TYPE_1__*,int,int ) ;

void
FUNC_10(
 xfs_inode_t *VAR_9,
 uint VAR_10)
{
 FUNC_9(VAR_9, VAR_10, VAR_8);






 FUNC_0((VAR_10 & (VAR_3 | VAR_2)) !=
        (VAR_3 | VAR_2));
 FUNC_0((VAR_10 & (VAR_7 | VAR_6)) !=
        (VAR_7 | VAR_6));
 FUNC_0((VAR_10 & (VAR_1 | VAR_0)) !=
        (VAR_1 | VAR_0));
 FUNC_0((VAR_10 & ~(VAR_4 | VAR_5)) == 0);

 if (VAR_10 & VAR_2) {
  FUNC_6(&FUNC_1(VAR_9)->i_rwsem,
      FUNC_3(VAR_10));
 } else if (VAR_10 & VAR_3) {
  FUNC_5(&FUNC_1(VAR_9)->i_rwsem,
     FUNC_3(VAR_10));
 }

 if (VAR_10 & VAR_6)
  FUNC_8(&VAR_9->i_mmaplock, FUNC_4(VAR_10));
 else if (VAR_10 & VAR_7)
  FUNC_7(&VAR_9->i_mmaplock, FUNC_4(VAR_10));

 if (VAR_10 & VAR_0)
  FUNC_8(&VAR_9->i_lock, FUNC_2(VAR_10));
 else if (VAR_10 & VAR_1)
  FUNC_7(&VAR_9->i_lock, FUNC_2(VAR_10));
}
