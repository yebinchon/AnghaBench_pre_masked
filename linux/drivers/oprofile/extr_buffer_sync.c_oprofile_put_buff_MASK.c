
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(unsigned long *VAR_1, unsigned int VAR_2,
         unsigned int VAR_3, unsigned int VAR_4)
{
 int VAR_5;

 VAR_5 = VAR_2;

 FUNC_1(&VAR_0);
 while (VAR_5 != VAR_3) {
  FUNC_0(VAR_1[VAR_5++]);

  if (VAR_5 >= VAR_4)
   VAR_5 = 0;
 }

 FUNC_2(&VAR_0);
}
