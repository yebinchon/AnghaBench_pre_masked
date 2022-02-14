
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_tx_buf_cb {int * oal; } ;
struct ql3_adapter {struct ql_tx_buf_cb* tx_buf; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ql3_adapter *VAR_1)
{
 struct ql_tx_buf_cb *VAR_2;
 int VAR_3;

 VAR_2 = &VAR_1->tx_buf[0];
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_0(VAR_2->oal);
  VAR_2->oal = ((void*)0);
  VAR_2++;
 }
}
