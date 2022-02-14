
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_device {char* name; } ;
struct v4l2_capability {int bus_info; int card; int driver; } ;
struct hantro_dev {TYPE_1__* dev; } ;
struct file {int dummy; } ;
struct TYPE_4__ {char* name; } ;
struct TYPE_3__ {TYPE_2__* driver; } ;


 int FUNC_0 (int ,int,char*,char*) ;
 int FUNC_1 (int ,char*,int) ;
 struct video_device* FUNC_2 (struct file*) ;
 struct hantro_dev* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_0, void *VAR_1,
      struct v4l2_capability *VAR_2)
{
 struct hantro_dev *VAR_3 = FUNC_3(VAR_0);
 struct video_device *VAR_4 = FUNC_2(VAR_0);

 FUNC_1(VAR_2->driver, VAR_3->dev->driver->name, sizeof(VAR_2->driver));
 FUNC_1(VAR_2->card, VAR_4->name, sizeof(VAR_2->card));
 FUNC_0(VAR_2->bus_info, sizeof(VAR_2->bus_info), "platform: %s",
   VAR_3->dev->driver->name);
 return 0;
}
