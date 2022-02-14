
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct v4l2_capability {int bus_info; int card; int driver; } ;
struct file {int dummy; } ;
struct allegro_dev {TYPE_1__* plat_dev; } ;
struct TYPE_2__ {int dev; } ;


 char* VAR_0 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int ,int,char*,char*) ;
 int FUNC_2 (int ,char*,int) ;
 struct video_device* FUNC_3 (struct file*) ;
 struct allegro_dev* FUNC_4 (struct video_device*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_1, void *VAR_2,
       struct v4l2_capability *VAR_3)
{
 struct video_device *VAR_4 = FUNC_3(VAR_1);
 struct allegro_dev *VAR_5 = FUNC_4(VAR_4);

 FUNC_2(VAR_3->driver, VAR_0, sizeof(VAR_3->driver));
 FUNC_2(VAR_3->card, "Allegro DVT Video Encoder", sizeof(VAR_3->card));
 FUNC_1(VAR_3->bus_info, sizeof(VAR_3->bus_info), "platform:%s",
   FUNC_0(&VAR_5->plat_dev->dev));

 return 0;
}
