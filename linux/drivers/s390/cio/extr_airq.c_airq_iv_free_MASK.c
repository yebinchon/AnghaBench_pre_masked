
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct airq_iv {unsigned long end; int lock; int avail; int vector; } ;


 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int,int ) ;

void FUNC_5(struct airq_iv *VAR_0, unsigned long VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3, VAR_4;

 if (!VAR_0->avail || VAR_2 == 0)
  return;
 FUNC_2(&VAR_0->lock, VAR_4);
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {

  FUNC_0(VAR_1 + VAR_3, VAR_0->vector);

  FUNC_1(VAR_1 + VAR_3, VAR_0->avail);
 }
 if (VAR_1 + VAR_2 >= VAR_0->end) {

  while (VAR_0->end > 0 && !FUNC_4(VAR_0->end - 1, VAR_0->avail))
   VAR_0->end--;
 }
 FUNC_3(&VAR_0->lock, VAR_4);
}
