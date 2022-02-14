
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int const*,size_t,int ) ;

__attribute__((used)) static void
FUNC_2(u8 **VAR_1, size_t *VAR_2, const u8 *VAR_3, size_t VAR_4)
{
 FUNC_0(*VAR_1);
 *VAR_1 = ((void*)0);
 *VAR_2 = 0;
 if (VAR_4 > 0) {
  *VAR_1 = FUNC_1(VAR_3, VAR_4, VAR_0);
  if (*VAR_1)
   *VAR_2 = VAR_4;
 }
}
