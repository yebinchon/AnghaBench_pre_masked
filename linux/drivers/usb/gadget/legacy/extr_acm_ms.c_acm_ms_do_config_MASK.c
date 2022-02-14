
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
 int VAR_3 ;
 int VAR_4 ;
 struct fsg_opts* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (struct usb_configuration*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct usb_configuration*,int ) ;

__attribute__((used)) static int FUNC_8(struct usb_configuration *VAR_6)
{
 struct fsg_opts *VAR_7;
 int VAR_8;

 if (FUNC_3(VAR_6->cdev->gadget)) {
  VAR_6->descriptors = VAR_5;
  VAR_6->bmAttributes |= VAR_0;
 }

 VAR_7 = FUNC_2(VAR_4);

 VAR_1 = FUNC_5(VAR_2);
 if (FUNC_0(VAR_1))
  return FUNC_1(VAR_1);

 VAR_3 = FUNC_5(VAR_4);
 if (FUNC_0(VAR_3)) {
  VAR_8 = FUNC_1(VAR_3);
  goto put_acm;
 }

 VAR_8 = FUNC_4(VAR_6, VAR_1);
 if (VAR_8 < 0)
  goto put_msg;

 VAR_8 = FUNC_4(VAR_6, VAR_3);
 if (VAR_8)
  goto remove_acm;

 return 0;
remove_acm:
 FUNC_7(VAR_6, VAR_1);
put_msg:
 FUNC_6(VAR_3);
put_acm:
 FUNC_6(VAR_1);
 return VAR_8;
}
