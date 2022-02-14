
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_string {int id; scalar_t__ s; } ;
struct usb_gadget_strings {struct usb_string* strings; } ;
struct usb_composite_dev {TYPE_1__* gadget; } ;
struct ffs_data {scalar_t__ state; TYPE_1__* gadget; struct usb_gadget_strings** stringtabs; TYPE_2__* ep0req; int strings_count; int flags; } ;
struct TYPE_4__ {struct ffs_data* context; int complete; } ;
struct TYPE_3__ {int ep0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct ffs_data*) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int) ;
 TYPE_2__* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct usb_composite_dev*,int ) ;

__attribute__((used)) static int FUNC_7(struct ffs_data *VAR_6, struct usb_composite_dev *VAR_7)
{
 struct usb_gadget_strings **VAR_8;
 int VAR_9;

 FUNC_0();

 if (FUNC_1(VAR_6->state != VAR_2
   || FUNC_3(VAR_3, &VAR_6->flags)))
  return -VAR_0;

 VAR_9 = FUNC_6(VAR_7, VAR_6->strings_count);
 if (FUNC_4(VAR_9 < 0))
  return VAR_9;

 VAR_6->ep0req = FUNC_5(VAR_7->gadget->ep0, VAR_4);
 if (FUNC_4(!VAR_6->ep0req))
  return -VAR_1;
 VAR_6->ep0req->complete = VAR_5;
 VAR_6->ep0req->context = VAR_6;

 VAR_8 = VAR_6->stringtabs;
 if (VAR_8) {
  for (; *VAR_8; ++VAR_8) {
   struct usb_string *VAR_10 = (*VAR_8)->strings;
   int VAR_11 = VAR_9;
   for (; VAR_10->s; ++VAR_11, ++VAR_10)
    VAR_10->id = VAR_11;
  }
 }

 VAR_6->gadget = VAR_7->gadget;
 FUNC_2(VAR_6);
 return 0;
}
