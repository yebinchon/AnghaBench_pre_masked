
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct nbu2ss_udc {TYPE_4__* p_regs; } ;
struct TYPE_5__ {int maxpacket; } ;
struct nbu2ss_ep {int epnum; scalar_t__ direct; TYPE_1__ ep; } ;
struct TYPE_8__ {TYPE_3__* EP_REGS; TYPE_2__* EP_DCR; int USBSSCONF; } ;
struct TYPE_7__ {int EP_DMA_CTRL; int EP_CONTROL; } ;
struct TYPE_6__ {int EP_DCR1; int EP_DCR2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(struct nbu2ss_udc *VAR_7, struct nbu2ss_ep *VAR_8)
{
 u32 VAR_9;
 u32 VAR_10;

 VAR_10 = FUNC_1(&VAR_7->p_regs->USBSSCONF);
 if (((VAR_8->epnum == 0) || (VAR_10 & (1 << VAR_8->epnum)) == 0))
  return;

 VAR_9 = VAR_8->epnum - 1;

 if (VAR_8->direct == VAR_6) {


  VAR_10 = VAR_8->ep.maxpacket;
  FUNC_2(&VAR_7->p_regs->EP_DCR[VAR_9].EP_DCR2, VAR_10);



  VAR_10 = VAR_0;
  FUNC_0(&VAR_7->p_regs->EP_DCR[VAR_9].EP_DCR1, VAR_10);



  VAR_10 = VAR_4 | VAR_5 | VAR_3;
  FUNC_2(&VAR_7->p_regs->EP_REGS[VAR_9].EP_DMA_CTRL, VAR_10);
 } else {


  FUNC_0(&VAR_7->p_regs->EP_REGS[VAR_9].EP_CONTROL, VAR_1);



  VAR_10 = VAR_2 | VAR_3;
  FUNC_2(&VAR_7->p_regs->EP_REGS[VAR_9].EP_DMA_CTRL, VAR_10);
 }
}
