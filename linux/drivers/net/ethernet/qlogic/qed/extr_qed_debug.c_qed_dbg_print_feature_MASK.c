
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,scalar_t__,int *) ;

__attribute__((used)) static void FUNC_2(u8 *VAR_0, u32 VAR_1)
{
 u32 VAR_2, VAR_3 = 80;

 if (!VAR_0)
  return;

 FUNC_1("\n%.*s", VAR_3, VAR_0);
 for (VAR_2 = VAR_3; VAR_2 < VAR_1; VAR_2 += VAR_3)
  FUNC_0("%.*s", VAR_3, VAR_0 + VAR_2);
 FUNC_0("\n");
}
