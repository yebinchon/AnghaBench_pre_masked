
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wait_queue_head_t ;
struct xfs_inode {int i_flags; } ;
struct TYPE_3__ {int wq_entry; } ;


 int FUNC_0 (TYPE_1__,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int *,int ) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_5 (struct xfs_inode*) ;
 int FUNC_6 (struct xfs_inode*) ;

__attribute__((used)) static void
FUNC_7(
 struct xfs_inode *VAR_3)
{
 wait_queue_head_t *VAR_4 = FUNC_1(&VAR_3->i_flags, VAR_1);
 FUNC_0(VAR_2, &VAR_3->i_flags, VAR_1);

 FUNC_6(VAR_3);

 do {
  FUNC_4(VAR_4, &VAR_2.wq_entry, VAR_0);
  if (FUNC_5(VAR_3))
   FUNC_3();
 } while (FUNC_5(VAR_3));
 FUNC_2(VAR_4, &VAR_2.wq_entry);
}
