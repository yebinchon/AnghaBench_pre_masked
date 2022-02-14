
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw2100_priv {int ** snapshot; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ipw2100_priv *VAR_0)
{
 int VAR_1;
 if (!VAR_0->snapshot[0])
  return;
 for (VAR_1 = 0; VAR_1 < 0x30; VAR_1++)
  FUNC_0(VAR_0->snapshot[VAR_1]);
 VAR_0->snapshot[0] = ((void*)0);
}
