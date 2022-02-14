
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_capability {int bus_info; int card; int driver; } ;
struct TYPE_8__ {char* name; } ;
struct sun6i_video {TYPE_3__* csi; TYPE_4__ vdev; } ;
struct file {int dummy; } ;
struct TYPE_7__ {TYPE_2__* dev; } ;
struct TYPE_6__ {TYPE_1__* of_node; } ;
struct TYPE_5__ {char* name; } ;


 int FUNC_0 (int ,int,char*,char*) ;
 int FUNC_1 (int ,char*,int) ;
 struct sun6i_video* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, void *VAR_1,
      struct v4l2_capability *VAR_2)
{
 struct sun6i_video *VAR_3 = FUNC_2(VAR_0);

 FUNC_1(VAR_2->driver, "sun6i-video", sizeof(VAR_2->driver));
 FUNC_1(VAR_2->card, VAR_3->vdev.name, sizeof(VAR_2->card));
 FUNC_0(VAR_2->bus_info, sizeof(VAR_2->bus_info), "platform:%s",
   VAR_3->csi->dev->of_node->name);

 return 0;
}
