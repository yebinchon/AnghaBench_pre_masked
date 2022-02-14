
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 void* FUNC_0 (int,int ) ;
 int FUNC_1 (void*,int *,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void *FUNC_3(u8 *VAR_1, int VAR_2)
{
 int VAR_3;
 void *VAR_4;

 if (VAR_2 == 0)
  return ((void*)0);

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 VAR_4 = FUNC_0(VAR_3 + 1, VAR_0);
 if (!VAR_4)
  return ((void*)0);
 if (VAR_3 > 0)
  FUNC_1(VAR_4, VAR_1, VAR_3);
 return VAR_4;
}
