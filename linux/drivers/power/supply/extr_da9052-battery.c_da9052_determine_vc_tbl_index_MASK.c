
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char FUNC_0 (unsigned char,unsigned char) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 unsigned char* VAR_1 ;

__attribute__((used)) static unsigned char FUNC_2(unsigned char VAR_2)
{
 int VAR_3;

 if (VAR_2 <= VAR_1[0])
  return 0;

 if (VAR_2 > VAR_1[VAR_0 - 1])
  return VAR_0 - 1;

 for (VAR_3 = 0; VAR_3 < VAR_0 - 1; VAR_3++) {
  if ((VAR_2 > VAR_1[VAR_3]) &&
      (VAR_2 <= FUNC_0(VAR_1[VAR_3], VAR_1[VAR_3 + 1])))
    return VAR_3;
  if ((VAR_2 > FUNC_0(VAR_1[VAR_3], VAR_1[VAR_3 + 1]))
       && (VAR_2 <= VAR_1[VAR_3]))
    return VAR_3 + 1;
 }





 FUNC_1(1);
 return 0;
}
