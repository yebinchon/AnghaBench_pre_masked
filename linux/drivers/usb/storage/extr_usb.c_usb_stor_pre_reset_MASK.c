
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct us_data {int dev_mutex; } ;


 int FUNC_0 (int *) ;
 struct us_data* FUNC_1 (struct usb_interface*) ;

int FUNC_2(struct usb_interface *VAR_0)
{
 struct us_data *VAR_1 = FUNC_1(VAR_0);


 FUNC_0(&VAR_1->dev_mutex);
 return 0;
}
