
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct recv_buf {scalar_t__ purb; scalar_t__ pskb; } ;
struct _adapter {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(struct _adapter *VAR_0,
        struct recv_buf *VAR_1)
{
 if (VAR_1->pskb)
  FUNC_0(VAR_1->pskb);
 if (VAR_1->purb) {
  FUNC_2(VAR_1->purb);
  FUNC_1(VAR_1->purb);
 }
}
