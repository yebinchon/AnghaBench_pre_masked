
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nbu2ss_udc {TYPE_3__* p_regs; } ;
struct TYPE_4__ {int maxpacket; } ;
struct nbu2ss_ep {int epnum; int ep_type; int direct; TYPE_1__ ep; } ;
struct TYPE_6__ {TYPE_2__* EP_REGS; int USB_INT_ENA; } ;
struct TYPE_5__ {int EP_INT_ENA; int EP_CONTROL; int EP_PCKT_ADRS; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;



 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct nbu2ss_udc*,int) ;
 int FUNC_3 (struct nbu2ss_udc*) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(struct nbu2ss_udc *VAR_18, struct nbu2ss_ep *VAR_19)
{
 u32 VAR_20;
 u32 VAR_21;
 u32 VAR_22;

 if (VAR_19->epnum == 0)
  return -VAR_0;

 VAR_20 = VAR_19->epnum - 1;



 VAR_22 = FUNC_3(VAR_18);
 VAR_21 = (VAR_22 << 16) | VAR_19->ep.maxpacket;
 FUNC_4(&VAR_18->p_regs->EP_REGS[VAR_20].EP_PCKT_ADRS, VAR_21);



 VAR_21 = 1 << (VAR_19->epnum + 8);
 FUNC_1(&VAR_18->p_regs->USB_INT_ENA, VAR_21);




 switch (VAR_19->ep_type) {
 case 130:
  VAR_21 = VAR_4;
  break;

 case 129:
  VAR_21 = VAR_3 | VAR_7;
  break;

 case 128:
  VAR_21 = VAR_10;
  break;

 default:
  VAR_21 = 0;
  break;
 }

 FUNC_1(&VAR_18->p_regs->EP_REGS[VAR_20].EP_CONTROL, VAR_21);
 FUNC_2(VAR_18, (VAR_19->epnum | VAR_19->direct));

 if (VAR_19->direct == VAR_17) {


  VAR_21 = VAR_6 | VAR_2 | VAR_5;
  FUNC_1(&VAR_18->p_regs->EP_REGS[VAR_20].EP_CONTROL, VAR_21);

  VAR_21 = VAR_12 | VAR_14 | VAR_13;
  FUNC_0(&VAR_18->p_regs->EP_REGS[VAR_20].EP_CONTROL, VAR_21);

  VAR_21 = VAR_15 | VAR_16;
  FUNC_1(&VAR_18->p_regs->EP_REGS[VAR_20].EP_INT_ENA, VAR_21);
 } else {


  VAR_21 = VAR_6 | VAR_2 | VAR_1;
  FUNC_1(&VAR_18->p_regs->EP_REGS[VAR_20].EP_CONTROL, VAR_21);

  VAR_21 = VAR_11;
  FUNC_0(&VAR_18->p_regs->EP_REGS[VAR_20].EP_CONTROL, VAR_21);

  VAR_21 = VAR_8 | VAR_9;
  FUNC_1(&VAR_18->p_regs->EP_REGS[VAR_20].EP_INT_ENA, VAR_21);
 }

 return 0;
}
