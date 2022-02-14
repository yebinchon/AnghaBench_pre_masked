
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t s32 ;
typedef int atomic_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 char** VAR_2 ;

char *FUNC_1(atomic_t *VAR_3)
{
 s32 VAR_4 = (s32)FUNC_0(VAR_3);

 if (VAR_4 > VAR_0 || VAR_4 < 0)
  return VAR_2[VAR_1];
 return VAR_2[VAR_4];
}
