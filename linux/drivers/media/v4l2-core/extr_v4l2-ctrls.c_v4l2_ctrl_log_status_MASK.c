
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {TYPE_1__* v4l2_dev; int flags; } ;
struct v4l2_fh {int ctrl_handler; } ;
struct file {struct v4l2_fh* private_data; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ) ;
 struct video_device* FUNC_2 (struct file*) ;

int FUNC_3(struct file *VAR_1, void *VAR_2)
{
 struct video_device *VAR_3 = FUNC_2(VAR_1);
 struct v4l2_fh *VAR_4 = VAR_1->private_data;

 if (FUNC_0(VAR_0, &VAR_3->flags) && VAR_3->v4l2_dev)
  FUNC_1(VAR_4->ctrl_handler,
   VAR_3->v4l2_dev->name);
 return 0;
}
