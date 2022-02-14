
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int ** VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (unsigned long) ;

__attribute__((used)) static void FUNC_1(void)
{
 unsigned VAR_3;

 for (VAR_3 = VAR_2; VAR_3 < VAR_0; VAR_3++) {
  if (!VAR_1[VAR_3])
   break;
  FUNC_0((unsigned long)VAR_1[VAR_3]);
  VAR_1[VAR_3] = ((void*)0);
 }
}
