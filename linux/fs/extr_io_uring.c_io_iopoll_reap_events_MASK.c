
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_ring_ctx {int flags; int uring_lock; int poll_list; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct io_ring_ctx*,unsigned int*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct io_ring_ctx *VAR_1)
{
 if (!(VAR_1->flags & VAR_0))
  return;

 FUNC_3(&VAR_1->uring_lock);
 while (!FUNC_2(&VAR_1->poll_list)) {
  unsigned int VAR_2 = 0;

  FUNC_1(VAR_1, &VAR_2, 1);





  FUNC_0();
 }
 FUNC_4(&VAR_1->uring_lock);
}
