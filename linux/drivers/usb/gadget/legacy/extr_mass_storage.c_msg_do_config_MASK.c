
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_configuration {int bmAttributes; int descriptors; TYPE_1__* cdev; } ;
struct fsg_opts {int dummy; } ;
struct TYPE_2__ {int gadget; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fsg_opts* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (struct usb_configuration*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct usb_configuration *VAR_4)
{
 struct fsg_opts *VAR_5;
 int VAR_6;

 if (FUNC_3(VAR_4->cdev->gadget)) {
  VAR_4->descriptors = VAR_3;
  VAR_4->bmAttributes |= VAR_0;
 }

 VAR_5 = FUNC_2(VAR_2);

 VAR_1 = FUNC_5(VAR_2);
 if (FUNC_0(VAR_1))
  return FUNC_1(VAR_1);

 VAR_6 = FUNC_4(VAR_4, VAR_1);
 if (VAR_6)
  goto put_func;

 return 0;

put_func:
 FUNC_6(VAR_1);
 return VAR_6;
}
