
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int name; } ;
struct TYPE_4__ {int name; } ;
struct video_i2c_data {TYPE_2__ vdev; TYPE_1__ v4l2_dev; int regmap; } ;
struct v4l2_capability {int bus_info; int card; int driver; } ;
struct i2c_client {int addr; TYPE_3__* adapter; } ;
struct file {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int nr; } ;


 struct device* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int ,int ,int) ;
 struct i2c_client* FUNC_3 (struct device*) ;
 struct video_i2c_data* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_0, void *VAR_1,
    struct v4l2_capability *VAR_2)
{
 struct video_i2c_data *VAR_3 = FUNC_4(VAR_0);
 struct device *VAR_4 = FUNC_0(VAR_3->regmap);
 struct i2c_client *VAR_5 = FUNC_3(VAR_4);

 FUNC_2(VAR_2->driver, VAR_3->v4l2_dev.name, sizeof(VAR_2->driver));
 FUNC_2(VAR_2->card, VAR_3->vdev.name, sizeof(VAR_2->card));

 FUNC_1(VAR_2->bus_info, "I2C:%d-%d", VAR_5->adapter->nr, VAR_5->addr);

 return 0;
}
