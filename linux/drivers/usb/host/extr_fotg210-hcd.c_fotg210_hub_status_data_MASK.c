
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usb_hcd {int dummy; } ;
struct fotg210_hcd {int resuming_ports; int lock; scalar_t__* reset_done; int port_c_suspend; TYPE_1__* regs; } ;
struct TYPE_2__ {int port_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fotg210_hcd*,int *) ;
 struct fotg210_hcd* FUNC_1 (struct usb_hcd*) ;
 int VAR_3 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct usb_hcd *VAR_4, char *VAR_5)
{
 struct fotg210_hcd *VAR_6 = FUNC_1(VAR_4);
 u32 VAR_7, VAR_8;
 u32 VAR_9;
 int VAR_10 = 1;
 unsigned long VAR_11;


 VAR_5[0] = 0;




 VAR_8 = VAR_6->resuming_ports;

 VAR_9 = VAR_0 | VAR_1;





 FUNC_2(&VAR_6->lock, VAR_11);

 VAR_7 = FUNC_0(VAR_6, &VAR_6->regs->port_status);
 if ((VAR_7 & VAR_9) != 0 || FUNC_4(0, &VAR_6->port_c_suspend) ||
   (VAR_6->reset_done[0] &&
   FUNC_5(VAR_3, VAR_6->reset_done[0]))) {
  VAR_5[0] |= 1 << 1;
  VAR_8 = VAR_2;
 }

 FUNC_3(&VAR_6->lock, VAR_11);
 return VAR_8 ? VAR_10 : 0;
}
