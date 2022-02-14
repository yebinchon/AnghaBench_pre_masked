
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netcp_intf {int tx_napi; int tx_compl_q; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct netcp_intf *VAR_1 = VAR_0;

 FUNC_0(VAR_1->tx_compl_q);
 FUNC_1(&VAR_1->tx_napi);
}
