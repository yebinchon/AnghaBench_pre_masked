
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct octeon_hcd {int lock; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct octeon_hcd*) ;
 struct octeon_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_4(struct usb_hcd *VAR_1)
{
 struct octeon_hcd *VAR_2 = FUNC_1(VAR_1);
 unsigned long VAR_3;

 FUNC_2(&VAR_2->lock, VAR_3);
 FUNC_0(VAR_2);
 FUNC_3(&VAR_2->lock, VAR_3);
 return VAR_0;
}
