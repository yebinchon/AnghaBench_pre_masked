
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct i2400mu {int i2400m; } ;


 int FUNC_0 (int *) ;
 struct i2400mu* FUNC_1 (struct usb_interface*) ;

__attribute__((used)) static
int FUNC_2(struct usb_interface *VAR_0)
{
 struct i2400mu *VAR_1 = FUNC_1(VAR_0);
 return FUNC_0(&VAR_1->i2400m);
}
