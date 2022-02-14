
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct et131x_adapter {int packet_filter; TYPE_2__* regs; } ;
struct TYPE_3__ {int ctrl; int pf_ctrl; } ;
struct TYPE_4__ {TYPE_1__ rxmac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct et131x_adapter*) ;
 int FUNC_1 (struct et131x_adapter*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static int FUNC_4(struct et131x_adapter *VAR_4)
{
 int VAR_5 = VAR_4->packet_filter;
 u32 VAR_6;
 u32 VAR_7;

 VAR_6 = FUNC_2(&VAR_4->regs->rxmac.ctrl);
 VAR_7 = FUNC_2(&VAR_4->regs->rxmac.pf_ctrl);


 VAR_6 |= 0x04;




 if ((VAR_5 & VAR_3) || VAR_5 == 0)
  VAR_7 &= ~7;
 else {




  if (VAR_5 & VAR_0)
   VAR_7 &= ~2;
  else {
   FUNC_0(VAR_4);
   VAR_7 |= 2;
   VAR_6 &= ~0x04;
  }


  if (VAR_5 & VAR_2) {
   FUNC_1(VAR_4);
   VAR_7 |= 4;
   VAR_6 &= ~0x04;
  }


  if (VAR_5 & VAR_1) {
   VAR_7 |= 1;
   VAR_6 &= ~0x04;
  } else {
   VAR_7 &= ~1;
  }





  FUNC_3(VAR_7, &VAR_4->regs->rxmac.pf_ctrl);
  FUNC_3(VAR_6, &VAR_4->regs->rxmac.ctrl);
 }
 return 0;
}
