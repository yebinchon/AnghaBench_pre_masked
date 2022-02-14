
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct airq_iv {unsigned long bits; unsigned long end; int lock; int avail; } ;


 int FUNC_0 (unsigned long,int ) ;
 unsigned long FUNC_1 (int ,unsigned long) ;
 unsigned long FUNC_2 (int ,unsigned long,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (unsigned long,int ) ;

unsigned long FUNC_6(struct airq_iv *VAR_0, unsigned long VAR_1)
{
 unsigned long VAR_2, VAR_3, VAR_4;

 if (!VAR_0->avail || VAR_1 == 0)
  return -1UL;
 FUNC_3(&VAR_0->lock, VAR_4);
 VAR_2 = FUNC_1(VAR_0->avail, VAR_0->bits);
 while (VAR_2 + VAR_1 <= VAR_0->bits) {
  for (VAR_3 = 1; VAR_3 < VAR_1; VAR_3++)
   if (!FUNC_5(VAR_2 + VAR_3, VAR_0->avail))
    break;
  if (VAR_3 >= VAR_1) {

   for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
    FUNC_0(VAR_2 + VAR_3, VAR_0->avail);
   if (VAR_2 + VAR_1 >= VAR_0->end)
    VAR_0->end = VAR_2 + VAR_1 + 1;
   break;
  }
  VAR_2 = FUNC_2(VAR_0->avail, VAR_0->bits, VAR_2 + VAR_3 + 1);
 }
 if (VAR_2 + VAR_1 > VAR_0->bits)
  VAR_2 = -1UL;
 FUNC_4(&VAR_0->lock, VAR_4);
 return VAR_2;
}
