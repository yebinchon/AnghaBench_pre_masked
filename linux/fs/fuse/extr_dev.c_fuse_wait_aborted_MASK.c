
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_conn {int num_waiting; int blocked_waitq; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;

void FUNC_3(struct fuse_conn *VAR_0)
{

 FUNC_1();
 FUNC_2(VAR_0->blocked_waitq, FUNC_0(&VAR_0->num_waiting) == 0);
}
