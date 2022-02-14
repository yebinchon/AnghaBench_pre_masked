
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int controller; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct s3c2410_hcd_info {int dummy; } ;


 struct s3c2410_hcd_info* FUNC_0 (int ) ;

__attribute__((used)) static struct s3c2410_hcd_info *FUNC_1(struct usb_hcd *VAR_0)
{
 return FUNC_0(VAR_0->self.controller);
}
