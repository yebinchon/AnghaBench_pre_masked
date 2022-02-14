
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xmit_frame {int * pkt; } ;
struct _adapter {int dummy; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct _adapter *VAR_0, struct xmit_frame *VAR_1)
{
 if (VAR_1->pkt)
  FUNC_0(VAR_1->pkt);
 VAR_1->pkt = ((void*)0);
}
