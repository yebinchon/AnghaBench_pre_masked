
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct rtsx_ucr {int dev_mutex; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_2(struct usb_interface *VAR_0)
{
 struct rtsx_ucr *VAR_1 = (struct rtsx_ucr *)FUNC_1(VAR_0);

 FUNC_0(&VAR_1->dev_mutex);
 return 0;
}
