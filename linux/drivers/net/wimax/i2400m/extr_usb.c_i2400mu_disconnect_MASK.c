
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct usb_interface {struct device dev; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct net_device* net_dev; } ;
struct i2400m {TYPE_1__ wimax_dev; } ;
struct i2400mu {int usb_dev; int debugfs_dentry; struct i2400m i2400m; } ;


 int FUNC_0 (int,struct device*,char*,struct usb_interface*,struct i2400m*) ;
 int FUNC_1 (int,struct device*,char*,struct usb_interface*,struct i2400m*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct i2400m*) ;
 struct i2400mu* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct usb_interface*,int *) ;

__attribute__((used)) static
void FUNC_8(struct usb_interface *VAR_0)
{
 struct i2400mu *VAR_1 = FUNC_5(VAR_0);
 struct i2400m *VAR_2 = &VAR_1->i2400m;
 struct net_device *VAR_3 = VAR_2->wimax_dev.net_dev;
 struct device *VAR_4 = &VAR_0->dev;

 FUNC_1(3, VAR_4, "(iface %p i2400m %p)\n", VAR_0, VAR_2);

 FUNC_2(VAR_1->debugfs_dentry);
 FUNC_4(VAR_2);
 FUNC_7(VAR_0, ((void*)0));
 FUNC_6(VAR_1->usb_dev);
 FUNC_3(VAR_3);
 FUNC_0(3, VAR_4, "(iface %p i2400m %p) = void\n", VAR_0, VAR_2);
}
