
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct usb_interface {struct device dev; } ;
struct i2400m {int dummy; } ;
struct i2400mu {struct i2400m i2400m; } ;


 int FUNC_0 (int,struct device*,char*,struct usb_interface*,int) ;
 int FUNC_1 (int,struct device*,char*,struct usb_interface*) ;
 int FUNC_2 (struct i2400m*,char*) ;
 struct i2400mu* FUNC_3 (struct usb_interface*) ;

__attribute__((used)) static
int FUNC_4(struct usb_interface *VAR_0)
{
 int VAR_1;
 struct device *VAR_2 = &VAR_0->dev;
 struct i2400mu *VAR_3 = FUNC_3(VAR_0);
 struct i2400m *VAR_4 = &VAR_3->i2400m;

 FUNC_1(3, VAR_2, "(iface %p)\n", VAR_0);
 VAR_1 = FUNC_2(VAR_4, "device reset on resume");
 FUNC_0(3, VAR_2, "(iface %p) = %d\n", VAR_0, VAR_1);
 return VAR_1 < 0 ? VAR_1 : 0;
}
