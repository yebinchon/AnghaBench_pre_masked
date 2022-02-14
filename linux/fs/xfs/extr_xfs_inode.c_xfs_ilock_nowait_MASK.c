
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,int,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int
FUNC_11(
 xfs_inode_t *VAR_9,
 uint VAR_10)
{
 FUNC_8(VAR_9, VAR_10, VAR_8);






 FUNC_0((VAR_10 & (VAR_3 | VAR_2)) !=
        (VAR_3 | VAR_2));
 FUNC_0((VAR_10 & (VAR_7 | VAR_6)) !=
        (VAR_7 | VAR_6));
 FUNC_0((VAR_10 & (VAR_1 | VAR_0)) !=
        (VAR_1 | VAR_0));
 FUNC_0((VAR_10 & ~(VAR_4 | VAR_5)) == 0);

 if (VAR_10 & VAR_2) {
  if (!FUNC_3(&FUNC_1(VAR_9)->i_rwsem))
   goto out;
 } else if (VAR_10 & VAR_3) {
  if (!FUNC_2(&FUNC_1(VAR_9)->i_rwsem))
   goto out;
 }

 if (VAR_10 & VAR_6) {
  if (!FUNC_5(&VAR_9->i_mmaplock))
   goto out_undo_iolock;
 } else if (VAR_10 & VAR_7) {
  if (!FUNC_4(&VAR_9->i_mmaplock))
   goto out_undo_iolock;
 }

 if (VAR_10 & VAR_0) {
  if (!FUNC_5(&VAR_9->i_lock))
   goto out_undo_mmaplock;
 } else if (VAR_10 & VAR_1) {
  if (!FUNC_4(&VAR_9->i_lock))
   goto out_undo_mmaplock;
 }
 return 1;

out_undo_mmaplock:
 if (VAR_10 & VAR_6)
  FUNC_6(&VAR_9->i_mmaplock);
 else if (VAR_10 & VAR_7)
  FUNC_7(&VAR_9->i_mmaplock);
out_undo_iolock:
 if (VAR_10 & VAR_2)
  FUNC_10(&FUNC_1(VAR_9)->i_rwsem);
 else if (VAR_10 & VAR_3)
  FUNC_9(&FUNC_1(VAR_9)->i_rwsem);
out:
 return 0;
}
