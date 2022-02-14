
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_request {scalar_t__ actual; scalar_t__ length; int buf; scalar_t__ status; struct usb_function* context; } ;
struct usb_function {TYPE_1__* config; } ;
struct usb_ep {int dummy; } ;
struct usb_composite_dev {int dummy; } ;
struct TYPE_5__ {unsigned int fixed_in_len; } ;
struct f_ncm {TYPE_2__ port; } ;
struct TYPE_6__ {int dwNtbInMaxSize; } ;
struct TYPE_4__ {struct usb_composite_dev* cdev; } ;


 int FUNC_0 (struct usb_composite_dev*,char*,...) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct usb_composite_dev*,char*,unsigned int) ;
 struct f_ncm* FUNC_2 (struct usb_function*) ;
 unsigned int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 TYPE_3__ VAR_1 ;
 int FUNC_5 (struct usb_ep*) ;

__attribute__((used)) static void FUNC_6(struct usb_ep *VAR_2, struct usb_request *VAR_3)
{

 unsigned VAR_4;
 struct usb_function *VAR_5 = VAR_3->context;
 struct f_ncm *VAR_6 = FUNC_2(VAR_5);
 struct usb_composite_dev *VAR_7 = VAR_5->config->cdev;

 VAR_3->context = ((void*)0);
 if (VAR_3->status || VAR_3->actual != VAR_3->length) {
  FUNC_0(VAR_7, "Bad control-OUT transfer\n");
  goto invalid;
 }

 VAR_4 = FUNC_3(VAR_3->buf);
 if (VAR_4 < VAR_0 ||
     VAR_4 > FUNC_4(VAR_1.dwNtbInMaxSize)) {
  FUNC_0(VAR_7, "Got wrong INPUT SIZE (%d) from host\n", VAR_4);
  goto invalid;
 }

 VAR_6->port.fixed_in_len = VAR_4;
 FUNC_1(VAR_7, "Set NTB INPUT SIZE %d\n", VAR_4);
 return;

invalid:
 FUNC_5(VAR_2);
 return;
}
