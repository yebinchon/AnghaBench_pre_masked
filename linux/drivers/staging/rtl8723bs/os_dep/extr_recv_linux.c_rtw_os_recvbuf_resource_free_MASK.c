
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct recv_buf {scalar_t__ pskb; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(struct adapter *VAR_0, struct recv_buf *VAR_1)
{
 if (VAR_1->pskb) {
  FUNC_0(VAR_1->pskb);
 }
}
