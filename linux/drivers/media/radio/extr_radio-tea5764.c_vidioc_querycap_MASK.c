
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* driver; } ;
struct video_device {TYPE_2__ dev; int name; } ;
struct v4l2_capability {int bus_info; int card; int driver; } ;
struct tea5764_device {struct video_device vdev; } ;
struct file {int dummy; } ;
struct TYPE_3__ {int name; } ;


 char* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int,char*,char*) ;
 int FUNC_2 (int ,int ,int) ;
 struct tea5764_device* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_0, void *VAR_1,
     struct v4l2_capability *VAR_2)
{
 struct tea5764_device *VAR_3 = FUNC_3(VAR_0);
 struct video_device *VAR_4 = &VAR_3->vdev;

 FUNC_2(VAR_2->driver, VAR_4->dev.driver->name, sizeof(VAR_2->driver));
 FUNC_2(VAR_2->card, VAR_4->name, sizeof(VAR_2->card));
 FUNC_1(VAR_2->bus_info, sizeof(VAR_2->bus_info),
   "I2C:%s", FUNC_0(&VAR_4->dev));
 return 0;
}
