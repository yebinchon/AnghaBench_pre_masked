
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_otg {int host; } ;
struct TYPE_6__ {int controller; } ;
struct usb_hcd {TYPE_3__ self; int irq; } ;
struct TYPE_4__ {struct usb_otg* otg; } ;
struct mv_otg {TYPE_2__* pdev; TYPE_1__ phy; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 struct usb_hcd* FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct usb_hcd*,int ,int ) ;
 int FUNC_4 (struct usb_hcd*) ;

__attribute__((used)) static void FUNC_5(struct mv_otg *VAR_1, int VAR_2)
{
}
