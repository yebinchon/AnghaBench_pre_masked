
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_input {scalar_t__ index; int std; scalar_t__ audioset; int type; int name; } ;
struct most_video_dev {TYPE_1__* vdev; } ;
struct file {int dummy; } ;
struct comp_fh {struct most_video_dev* mdev; } ;
struct TYPE_2__ {int tvnorms; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4,
        struct v4l2_input *VAR_5)
{
 struct comp_fh *VAR_6 = VAR_4;
 struct most_video_dev *VAR_7 = VAR_6->mdev;

 if (VAR_5->index >= VAR_1)
  return -VAR_0;

 FUNC_0(VAR_5->name, "MOST Video");
 VAR_5->type |= VAR_2;
 VAR_5->audioset = 0;

 VAR_5->std = VAR_7->vdev->tvnorms;

 return 0;
}
