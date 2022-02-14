
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_input {scalar_t__ index; int name; int std; int capabilities; int type; int status; } ;
struct TYPE_2__ {int tvnorms; } ;
struct rvin_dev {TYPE_1__ vdev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int ,int *) ;
 scalar_t__ FUNC_2 (struct v4l2_subdev*,int ,int ) ;
 int VAR_9 ;
 struct rvin_dev* FUNC_3 (struct file*) ;
 struct v4l2_subdev* FUNC_4 (struct rvin_dev*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_10, void *VAR_11,
      struct v4l2_input *VAR_12)
{
 struct rvin_dev *VAR_13 = FUNC_3(VAR_10);
 struct v4l2_subdev *VAR_14 = FUNC_4(VAR_13);
 int VAR_15;

 if (VAR_12->index != 0)
  return -VAR_0;

 VAR_15 = FUNC_1(VAR_14, VAR_9, VAR_7, &VAR_12->status);
 if (VAR_15 < 0 && VAR_15 != -VAR_2 && VAR_15 != -VAR_1)
  return VAR_15;

 VAR_12->type = VAR_3;

 if (FUNC_2(VAR_14, VAR_8, VAR_6)) {
  VAR_12->capabilities = VAR_4;
  VAR_12->std = 0;
 } else {
  VAR_12->capabilities = VAR_5;
  VAR_12->std = VAR_13->vdev.tvnorms;
 }

 FUNC_0(VAR_12->name, "Camera", sizeof(VAR_12->name));

 return 0;
}
