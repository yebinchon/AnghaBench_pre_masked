
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {int dummy; } ;
struct urb {int status; int hcpriv; TYPE_1__* ep; int dev; } ;
struct octeon_hcd {int lock; } ;
struct TYPE_2__ {int hcpriv; } ;


 int VAR_0 ;
 int FUNC_0 (struct octeon_hcd*,int ,int ) ;
 struct octeon_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct usb_hcd*,struct urb*,int) ;

__attribute__((used)) static int FUNC_5(struct usb_hcd *VAR_1,
      struct urb *VAR_2,
      int VAR_3)
{
 struct octeon_hcd *VAR_4 = FUNC_1(VAR_1);
 unsigned long VAR_5;
 int VAR_6;

 if (!VAR_2->dev)
  return -VAR_0;

 FUNC_2(&VAR_4->lock, VAR_5);

 VAR_6 = FUNC_4(VAR_1, VAR_2, VAR_3);
 if (VAR_6)
  goto out;

 VAR_2->status = VAR_3;
 FUNC_0(VAR_4, VAR_2->ep->hcpriv, VAR_2->hcpriv);

out:
 FUNC_3(&VAR_4->lock, VAR_5);

 return VAR_6;
}
