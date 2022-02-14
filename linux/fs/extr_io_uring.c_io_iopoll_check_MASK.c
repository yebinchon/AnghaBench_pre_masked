
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_ring_ctx {int uring_lock; } ;


 int FUNC_0 (struct io_ring_ctx*,unsigned int*,long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct io_ring_ctx *VAR_0, unsigned *VAR_1,
      long VAR_2)
{
 int VAR_3;






 FUNC_1(&VAR_0->uring_lock);
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->uring_lock);
 return VAR_3;
}
