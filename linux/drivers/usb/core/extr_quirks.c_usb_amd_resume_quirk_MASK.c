
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int amd_resume_bug; } ;
struct usb_device {int level; int bus; } ;


 struct usb_hcd* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct usb_device *VAR_0)
{
 struct usb_hcd *VAR_1;

 VAR_1 = FUNC_0(VAR_0->bus);

 if (VAR_0->level == 1 && VAR_1->amd_resume_bug == 1)
  return 1;

 return 0;
}
