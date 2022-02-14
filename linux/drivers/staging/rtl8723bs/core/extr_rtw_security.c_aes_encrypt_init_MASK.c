
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void u32 ;


 int VAR_0 ;
 int FUNC_0 (void*,int *) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void *FUNC_2(u8 *VAR_1, size_t VAR_2)
{
 u32 *VAR_3;
 if (VAR_2 != 16)
  return ((void*)0);
 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3 == ((void*)0))
  return ((void*)0);
 FUNC_0(VAR_3, VAR_1);
 return VAR_3;
}
