
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
 int VAR_2 ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 () ;
 TYPE_1__ VAR_3 ;
 int FUNC_5 (struct xfs_inode*,int ) ;

__attribute__((used)) static void
FUNC_6(
 struct xfs_inode *VAR_4)
{
 wait_queue_head_t *VAR_5 = FUNC_1(&VAR_4->i_flags, VAR_2);
 FUNC_0(VAR_3, &VAR_4->i_flags, VAR_2);

 do {
  FUNC_3(VAR_5, &VAR_3.wq_entry, VAR_0);
  if (!FUNC_5(VAR_4, VAR_1))
   break;
  FUNC_4();
 } while (1);
 FUNC_2(VAR_5, &VAR_3.wq_entry);
}
