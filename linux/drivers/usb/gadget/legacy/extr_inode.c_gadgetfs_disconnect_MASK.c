
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
struct dev_data {scalar_t__ state; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct dev_data*,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct dev_data*) ;
 struct dev_data* FUNC_2 (struct usb_gadget*) ;
 int FUNC_3 (struct dev_data*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_6 (struct usb_gadget *VAR_2)
{
 struct dev_data *VAR_3 = FUNC_2 (VAR_2);
 unsigned long VAR_4;

 FUNC_4 (&VAR_3->lock, VAR_4);
 if (VAR_3->state == VAR_1)
  goto exit;
 VAR_3->state = VAR_1;

 FUNC_0 (VAR_3, "disconnected\n");
 FUNC_3 (VAR_3, VAR_0);
 FUNC_1 (VAR_3);
exit:
 FUNC_5 (&VAR_3->lock, VAR_4);
}
