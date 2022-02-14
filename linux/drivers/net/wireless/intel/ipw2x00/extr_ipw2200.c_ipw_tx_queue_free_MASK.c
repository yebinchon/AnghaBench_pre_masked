
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_priv {int * txq; int txq_cmd; } ;


 int FUNC_0 (struct ipw_priv*,int *) ;

__attribute__((used)) static void FUNC_1(struct ipw_priv *VAR_0)
{

 FUNC_0(VAR_0, &VAR_0->txq_cmd);


 FUNC_0(VAR_0, &VAR_0->txq[0]);
 FUNC_0(VAR_0, &VAR_0->txq[1]);
 FUNC_0(VAR_0, &VAR_0->txq[2]);
 FUNC_0(VAR_0, &VAR_0->txq[3]);
}
