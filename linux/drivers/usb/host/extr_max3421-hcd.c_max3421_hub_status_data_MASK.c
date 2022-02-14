
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int controller; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct max3421_hcd {int port_status; scalar_t__ rh_state; int lock; } ;


 int FUNC_0 (struct usb_hcd*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 struct max3421_hcd* FUNC_2 (struct usb_hcd*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct usb_hcd*) ;

__attribute__((used)) static int
FUNC_6(struct usb_hcd *VAR_2, char *VAR_3)
{
 struct max3421_hcd *VAR_4 = FUNC_2(VAR_2);
 unsigned long VAR_5;
 int VAR_6 = 0;

 FUNC_3(&VAR_4->lock, VAR_5);
 if (!FUNC_0(VAR_2))
  goto done;

 *VAR_3 = 0;
 if ((VAR_4->port_status & VAR_1) != 0) {
  *VAR_3 = (1 << 1);
  FUNC_1(VAR_2->self.controller,
   "port status 0x%08x has changes\n",
   VAR_4->port_status);
  VAR_6 = 1;
  if (VAR_4->rh_state == VAR_0)
   FUNC_5(VAR_2);
 }
done:
 FUNC_4(&VAR_4->lock, VAR_5);
 return VAR_6;
}
