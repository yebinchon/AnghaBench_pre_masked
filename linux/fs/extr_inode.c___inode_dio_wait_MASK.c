
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wait_queue_head_t ;
struct inode {int i_dio_count; int i_state; } ;
struct TYPE_3__ {int wq_entry; } ;


 int FUNC_0 (TYPE_1__,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct inode *VAR_3)
{
 wait_queue_head_t *VAR_4 = FUNC_2(&VAR_3->i_state, VAR_1);
 FUNC_0(VAR_2, &VAR_3->i_state, VAR_1);

 do {
  FUNC_4(VAR_4, &VAR_2.wq_entry, VAR_0);
  if (FUNC_1(&VAR_3->i_dio_count))
   FUNC_5();
 } while (FUNC_1(&VAR_3->i_dio_count));
 FUNC_3(VAR_4, &VAR_2.wq_entry);
}
