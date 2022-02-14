
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {scalar_t__ context; } ;
struct brcmf_usbdev_info {int ctl_completed; } ;


 int FUNC_0 (struct brcmf_usbdev_info*) ;

__attribute__((used)) static void
FUNC_1(struct urb *VAR_0)
{
 struct brcmf_usbdev_info *VAR_1 =
   (struct brcmf_usbdev_info *)VAR_0->context;

 VAR_1->ctl_completed = 1;
 FUNC_0(VAR_1);
}
