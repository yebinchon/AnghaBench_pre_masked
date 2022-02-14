
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int net_dev; } ;
struct i2400m {int (* bus_release ) (struct i2400m*) ;int init_mutex; TYPE_1__ wimax_dev; scalar_t__ updown; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct i2400m*) ;
 int FUNC_1 (int,struct device*,char*,struct i2400m*) ;
 int FUNC_2 (int,struct device*,char*,struct i2400m*) ;
 int FUNC_3 (int,struct device*,char*) ;
 struct device* FUNC_4 (struct i2400m*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct i2400m*) ;

int FUNC_9(struct i2400m *VAR_0)
{
 struct device *VAR_1 = FUNC_4(VAR_0);

 FUNC_2(3, VAR_1, "(i2400m %p)\n", VAR_0);
 FUNC_3(1, VAR_1, "pre-reset shut down\n");

 FUNC_5(&VAR_0->init_mutex);
 if (VAR_0->updown) {
  FUNC_7(VAR_0->wimax_dev.net_dev);
  FUNC_0(VAR_0);


 }
 FUNC_6(&VAR_0->init_mutex);
 if (VAR_0->bus_release)
  VAR_0->bus_release(VAR_0);
 FUNC_1(3, VAR_1, "(i2400m %p) = 0\n", VAR_0);
 return 0;
}
