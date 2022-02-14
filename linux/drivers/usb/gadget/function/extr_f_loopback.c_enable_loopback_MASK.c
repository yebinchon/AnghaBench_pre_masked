
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_composite_dev {int dummy; } ;
struct TYPE_2__ {int name; } ;
struct f_loopback {int in_ep; int out_ep; TYPE_1__ function; } ;


 int FUNC_0 (struct usb_composite_dev*,char*,int ) ;
 int FUNC_1 (struct usb_composite_dev*,struct f_loopback*) ;
 int FUNC_2 (struct usb_composite_dev*,struct f_loopback*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct usb_composite_dev *VAR_0, struct f_loopback *VAR_1)
{
 int VAR_2 = 0;

 VAR_2 = FUNC_2(VAR_0, VAR_1, VAR_1->in_ep);
 if (VAR_2)
  goto out;

 VAR_2 = FUNC_2(VAR_0, VAR_1, VAR_1->out_ep);
 if (VAR_2)
  goto disable_in;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2)
  goto disable_out;

 FUNC_0(VAR_0, "%s enabled\n", VAR_1->function.name);
 return 0;

disable_out:
 FUNC_3(VAR_1->out_ep);
disable_in:
 FUNC_3(VAR_1->in_ep);
out:
 return VAR_2;
}
