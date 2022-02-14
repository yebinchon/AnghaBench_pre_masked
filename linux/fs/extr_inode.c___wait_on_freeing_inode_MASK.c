
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wait_queue_head_t ;
struct inode {int i_lock; int i_state; } ;
struct TYPE_3__ {int wq_entry; } ;


 int FUNC_0 (TYPE_1__,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_2 ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static void FUNC_7(struct inode *VAR_4)
{
 wait_queue_head_t *VAR_5;
 FUNC_0(VAR_3, &VAR_4->i_state, VAR_1);
 VAR_5 = FUNC_1(&VAR_4->i_state, VAR_1);
 FUNC_3(VAR_5, &VAR_3.wq_entry, VAR_0);
 FUNC_6(&VAR_4->i_lock);
 FUNC_6(&VAR_2);
 FUNC_4();
 FUNC_2(VAR_5, &VAR_3.wq_entry);
 FUNC_5(&VAR_2);
}
