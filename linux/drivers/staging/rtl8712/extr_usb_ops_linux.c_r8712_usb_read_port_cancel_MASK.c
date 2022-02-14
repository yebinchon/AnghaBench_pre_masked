
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct recv_buf {scalar_t__ purb; } ;
struct TYPE_2__ {scalar_t__ precv_buf; } ;
struct _adapter {TYPE_1__ recvpriv; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

void FUNC_1(struct _adapter *VAR_1)
{
 int VAR_2;
 struct recv_buf *VAR_3;

 VAR_3 = (struct recv_buf *)VAR_1->recvpriv.precv_buf;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_3->purb)
   FUNC_0(VAR_3->purb);
  VAR_3++;
 }
}
