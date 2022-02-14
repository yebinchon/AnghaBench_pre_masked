
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct txrpt_ccx_88e {scalar_t__ pkt_ok; scalar_t__ int_ccx; } ;
struct adapter {int xmitpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;

void FUNC_1(struct adapter *VAR_2, u8 *VAR_3)
{
 struct txrpt_ccx_88e *VAR_4 = (struct txrpt_ccx_88e *)VAR_3;

 if (VAR_4->int_ccx) {
  if (VAR_4->pkt_ok)
   FUNC_0(&VAR_2->xmitpriv,
     VAR_1);
  else
   FUNC_0(&VAR_2->xmitpriv,
     VAR_0);
 }
}
