
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_conn {int blocked_waitq; int connected; int num_waiting; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct fuse_conn *VAR_0)
{





 if (FUNC_1(&VAR_0->num_waiting) &&
     !FUNC_0(VAR_0->connected)) {

  FUNC_2(&VAR_0->blocked_waitq);
 }
}
