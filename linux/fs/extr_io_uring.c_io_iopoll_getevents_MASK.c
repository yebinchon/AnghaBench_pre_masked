
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_ring_ctx {int poll_list; } ;


 int FUNC_0 (struct io_ring_ctx*,unsigned int*,long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct io_ring_ctx *VAR_0, unsigned int *VAR_1,
    long VAR_2)
{
 while (!FUNC_1(&VAR_0->poll_list) && !FUNC_2()) {
  int VAR_3;

  VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
  if (VAR_3 < 0)
   return VAR_3;
  if (!VAR_2 || *VAR_1 >= VAR_2)
   return 0;
 }

 return 1;
}
