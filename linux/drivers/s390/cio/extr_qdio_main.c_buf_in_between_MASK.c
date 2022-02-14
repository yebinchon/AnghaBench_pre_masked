
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static inline int FUNC_1(int VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4 = FUNC_0(VAR_2, VAR_3);

 if (VAR_4 > VAR_2) {
  if (VAR_1 >= VAR_2 && VAR_1 < VAR_4)
   return 1;
  else
   return 0;
 }


 if ((VAR_1 >= VAR_2 && VAR_1 <= VAR_0) ||
     (VAR_1 < VAR_4))
  return 1;
 else
  return 0;
}
