
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwifiex_private {int dummy; } ;
struct mwifiex_adapter {int priv_num; struct mwifiex_private** priv; } ;


 int FUNC_0 (struct mwifiex_private*,int *) ;

void FUNC_1(struct mwifiex_adapter *VAR_0)
{
 struct mwifiex_private *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->priv_num; VAR_2++) {
  VAR_1 = VAR_0->priv[VAR_2];
  if (VAR_1)
   FUNC_0(VAR_1, ((void*)0));
 }
}
