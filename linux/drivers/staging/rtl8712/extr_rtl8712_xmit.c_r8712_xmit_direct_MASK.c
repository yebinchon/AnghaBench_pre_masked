
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xmit_frame {int * pkt; } ;
struct _adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct _adapter*,struct xmit_frame*) ;
 int FUNC_1 (struct _adapter*,int *,struct xmit_frame*) ;

void FUNC_2(struct _adapter *VAR_1, struct xmit_frame *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2->pkt, VAR_2);
 VAR_2->pkt = ((void*)0);
 if (VAR_3 == VAR_0)
  FUNC_0(VAR_1, VAR_2);
}
