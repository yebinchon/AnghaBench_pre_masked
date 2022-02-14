
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct visornic_devdata {int xmit_cmdrsp; int cmdrsp_rcv; int rcvbuf; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct visornic_devdata *VAR_0)
{
 FUNC_0(VAR_0->rcvbuf);
 FUNC_0(VAR_0->cmdrsp_rcv);
 FUNC_0(VAR_0->xmit_cmdrsp);
}
