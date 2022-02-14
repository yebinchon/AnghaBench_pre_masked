
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_ring_ctx {int uring_lock; int rings; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct io_ring_ctx*,unsigned int*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct io_ring_ctx *VAR_0, unsigned *VAR_1,
       long VAR_2)
{
 int VAR_3 = 0, VAR_4 = 0;

 do {
  int VAR_5 = 0;






  if (FUNC_0(VAR_0->rings))
   break;
  if (!(++VAR_3 & 7)) {
   FUNC_3(&VAR_0->uring_lock);
   FUNC_2(&VAR_0->uring_lock);
  }

  if (*VAR_1 < VAR_2)
   VAR_5 = VAR_2 - *VAR_1;

  VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_5);
  if (VAR_4 <= 0)
   break;
  VAR_4 = 0;
 } while (VAR_2 && !*VAR_1 && !FUNC_4());

 return VAR_4;
}
