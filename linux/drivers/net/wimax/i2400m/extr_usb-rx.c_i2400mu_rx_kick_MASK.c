
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2400m {int dummy; } ;
struct i2400mu {int rx_wq; int rx_pending_count; TYPE_1__* usb_iface; struct i2400m i2400m; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,struct device*,char*,struct i2400m*) ;
 int FUNC_2 (int,struct device*,char*,struct i2400m*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct i2400mu *VAR_0)
{
 struct i2400m *VAR_1 = &VAR_0->i2400m;
 struct device *VAR_2 = &VAR_0->usb_iface->dev;

 FUNC_2(3, VAR_2, "(i2400mu %p)\n", VAR_1);
 FUNC_0(&VAR_0->rx_pending_count);
 FUNC_3(&VAR_0->rx_wq);
 FUNC_1(3, VAR_2, "(i2400m %p) = void\n", VAR_1);
}
