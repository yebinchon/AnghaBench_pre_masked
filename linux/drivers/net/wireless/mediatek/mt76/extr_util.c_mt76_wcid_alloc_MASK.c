
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned long) ;

int FUNC_2(unsigned long *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4 = 0, VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_2 / VAR_0; VAR_3++) {
  VAR_4 = FUNC_1(~VAR_1[VAR_3]);
  if (!VAR_4)
   continue;

  VAR_4--;
  VAR_5 = VAR_3 * VAR_0 + VAR_4;
  if (VAR_5 >= VAR_2)
   break;

  VAR_1[VAR_3] |= FUNC_0(VAR_4);
  return VAR_5;
 }

 return -1;
}
