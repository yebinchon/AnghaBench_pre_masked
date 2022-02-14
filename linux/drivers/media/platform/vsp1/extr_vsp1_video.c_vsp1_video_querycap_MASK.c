
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; } ;
struct vsp1_video {TYPE_2__* vsp1; TYPE_1__ video; } ;
struct v4l2_fh {int vdev; } ;
struct v4l2_capability {int capabilities; int bus_info; int card; int driver; } ;
struct file {struct v4l2_fh* private_data; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,int,char*,char*) ;
 int FUNC_2 (int ,char*,int) ;
 struct vsp1_video* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct file *VAR_4, void *VAR_5, struct v4l2_capability *VAR_6)
{
 struct v4l2_fh *VAR_7 = VAR_4->private_data;
 struct vsp1_video *VAR_8 = FUNC_3(VAR_7->vdev);

 VAR_6->capabilities = VAR_0 | VAR_1
     | VAR_2
     | VAR_3;


 FUNC_2(VAR_6->driver, "vsp1", sizeof(VAR_6->driver));
 FUNC_2(VAR_6->card, VAR_8->video.name, sizeof(VAR_6->card));
 FUNC_1(VAR_6->bus_info, sizeof(VAR_6->bus_info), "platform:%s",
   FUNC_0(VAR_8->vsp1->dev));

 return 0;
}
