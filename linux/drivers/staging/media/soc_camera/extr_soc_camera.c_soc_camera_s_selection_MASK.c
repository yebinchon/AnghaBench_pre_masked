
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ width; scalar_t__ height; } ;
struct v4l2_selection {scalar_t__ type; scalar_t__ target; TYPE_2__ r; } ;
struct soc_camera_host {TYPE_1__* ops; } ;
struct soc_camera_device {scalar_t__ user_width; scalar_t__ user_height; struct file* streamer; int vb2_vidq; int parent; } ;
struct file {struct soc_camera_device* private_data; } ;
struct TYPE_3__ {int (* set_liveselection ) (struct soc_camera_device*,struct v4l2_selection*) ;int (* set_selection ) (struct soc_camera_device*,struct v4l2_selection*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct soc_camera_device*,struct v4l2_selection*) ;
 int FUNC_1 (struct soc_camera_device*,struct v4l2_selection*) ;
 struct soc_camera_host* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_5, void *VAR_6,
      struct v4l2_selection *VAR_7)
{
 struct soc_camera_device *VAR_8 = VAR_5->private_data;
 struct soc_camera_host *VAR_9 = FUNC_2(VAR_8->parent);
 int VAR_10;


 if (VAR_7->type != VAR_2 ||
     (VAR_7->target != VAR_3 &&
      VAR_7->target != VAR_4))
  return -VAR_1;

 if (VAR_7->target == VAR_3) {

  if (FUNC_3(&VAR_8->vb2_vidq) &&
      (VAR_8->user_width != VAR_7->r.width ||
       VAR_8->user_height != VAR_7->r.height))
   return -VAR_0;





  if (VAR_8->streamer && VAR_8->streamer != VAR_5)
   return -VAR_0;
 }

 if (VAR_7->target == VAR_4 &&
     FUNC_3(&VAR_8->vb2_vidq) &&
     VAR_9->ops->set_liveselection)
  VAR_10 = VAR_9->ops->set_liveselection(VAR_8, VAR_7);
 else
  VAR_10 = VAR_9->ops->set_selection(VAR_8, VAR_7);
 if (!VAR_10 &&
     VAR_7->target == VAR_3) {
  VAR_8->user_width = VAR_7->r.width;
  VAR_8->user_height = VAR_7->r.height;
  if (!VAR_8->streamer)
   VAR_8->streamer = VAR_5;
 }

 return VAR_10;
}
