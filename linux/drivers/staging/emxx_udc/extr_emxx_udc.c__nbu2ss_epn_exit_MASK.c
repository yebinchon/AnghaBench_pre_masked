
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct nbu2ss_udc {scalar_t__ vbus_active; TYPE_2__* p_regs; } ;
struct nbu2ss_ep {int epnum; scalar_t__ direct; } ;
struct TYPE_4__ {TYPE_1__* EP_REGS; int USB_INT_ENA; } ;
struct TYPE_3__ {int EP_INT_ENA; int EP_CONTROL; int EP_PCKT_ADRS; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int *,size_t) ;
 int FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(struct nbu2ss_udc *VAR_11, struct nbu2ss_ep *VAR_12)
{
 u32 VAR_13;
 u32 VAR_14;

 if ((VAR_12->epnum == 0) || (VAR_11->vbus_active == 0))
  return -VAR_0;

 VAR_13 = VAR_12->epnum - 1;



 FUNC_2(&VAR_11->p_regs->EP_REGS[VAR_13].EP_PCKT_ADRS, 0);



 VAR_14 = 1 << (VAR_12->epnum + 8);
 FUNC_0(&VAR_11->p_regs->USB_INT_ENA, VAR_14);

 if (VAR_12->direct == VAR_10) {


  VAR_14 = VAR_7 | VAR_2;
  FUNC_1(&VAR_11->p_regs->EP_REGS[VAR_13].EP_CONTROL, VAR_14);

  VAR_14 = VAR_4 | VAR_3;
  FUNC_0(&VAR_11->p_regs->EP_REGS[VAR_13].EP_CONTROL, VAR_14);

  VAR_14 = VAR_8 | VAR_9;
  FUNC_0(&VAR_11->p_regs->EP_REGS[VAR_13].EP_INT_ENA, VAR_14);
 } else {


  VAR_14 = VAR_2;
  FUNC_1(&VAR_11->p_regs->EP_REGS[VAR_13].EP_CONTROL, VAR_14);

  VAR_14 = VAR_4 | VAR_1;
  FUNC_0(&VAR_11->p_regs->EP_REGS[VAR_13].EP_CONTROL, VAR_14);

  VAR_14 = VAR_5 | VAR_6;
  FUNC_0(&VAR_11->p_regs->EP_REGS[VAR_13].EP_INT_ENA, VAR_14);
 }

 return 0;
}
