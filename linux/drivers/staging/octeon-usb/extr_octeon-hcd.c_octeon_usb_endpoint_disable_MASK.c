
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_host_endpoint {struct cvmx_usb_pipe* hcpriv; } ;
struct TYPE_2__ {struct device* controller; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct octeon_hcd {int lock; } ;
struct device {int dummy; } ;
struct cvmx_usb_pipe {int dummy; } ;


 int FUNC_0 (struct octeon_hcd*,struct cvmx_usb_pipe*) ;
 scalar_t__ FUNC_1 (struct octeon_hcd*,struct cvmx_usb_pipe*) ;
 int FUNC_2 (struct device*,char*,struct cvmx_usb_pipe*) ;
 struct octeon_hcd* FUNC_3 (struct usb_hcd*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct usb_hcd *VAR_0,
     struct usb_host_endpoint *VAR_1)
{
 struct device *VAR_2 = VAR_0->self.controller;

 if (VAR_1->hcpriv) {
  struct octeon_hcd *VAR_3 = FUNC_3(VAR_0);
  struct cvmx_usb_pipe *VAR_4 = VAR_1->hcpriv;
  unsigned long VAR_5;

  FUNC_4(&VAR_3->lock, VAR_5);
  FUNC_0(VAR_3, VAR_4);
  if (FUNC_1(VAR_3, VAR_4))
   FUNC_2(VAR_2, "Closing pipe %p failed\n", VAR_4);
  FUNC_5(&VAR_3->lock, VAR_5);
  VAR_1->hcpriv = ((void*)0);
 }
}
