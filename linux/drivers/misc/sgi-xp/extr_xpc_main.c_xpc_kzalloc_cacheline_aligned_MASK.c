
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int gfp_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 size_t VAR_0 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (size_t,int ) ;

void *
FUNC_3(size_t VAR_1, gfp_t VAR_2, void **VAR_3)
{

 *VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (*VAR_3 == ((void*)0))
  return ((void*)0);

 if ((u64)*VAR_3 == FUNC_0((u64)*VAR_3))
  return *VAR_3;

 FUNC_1(*VAR_3);


 *VAR_3 = FUNC_2(VAR_1 + VAR_0, VAR_2);
 if (*VAR_3 == ((void*)0))
  return ((void*)0);

 return (void *)FUNC_0((u64)*VAR_3);
}
