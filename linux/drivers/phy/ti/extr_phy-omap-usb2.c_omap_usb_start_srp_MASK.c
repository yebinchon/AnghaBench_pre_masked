
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_otg {int usb_phy; } ;
struct omap_usb {TYPE_1__* comparator; } ;
struct TYPE_2__ {int (* start_srp ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 struct omap_usb* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct usb_otg *VAR_1)
{
 struct omap_usb *VAR_2 = FUNC_0(VAR_1->usb_phy);

 if (!VAR_2->comparator)
  return -VAR_0;

 return VAR_2->comparator->start_srp(VAR_2->comparator);
}
