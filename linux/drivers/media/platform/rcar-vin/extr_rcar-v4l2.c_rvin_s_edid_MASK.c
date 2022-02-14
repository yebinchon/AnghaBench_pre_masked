
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_edid {int pad; } ;
struct rvin_dev {TYPE_1__* parallel; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int sink_pad; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct v4l2_subdev*,int ,int ,struct v4l2_edid*) ;
 struct rvin_dev* FUNC_1 (struct file*) ;
 struct v4l2_subdev* FUNC_2 (struct rvin_dev*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4, struct v4l2_edid *VAR_5)
{
 struct rvin_dev *VAR_6 = FUNC_1(VAR_3);
 struct v4l2_subdev *VAR_7 = FUNC_2(VAR_6);
 int VAR_8;

 if (VAR_5->pad)
  return -VAR_0;

 VAR_5->pad = VAR_6->parallel->sink_pad;

 VAR_8 = FUNC_0(VAR_7, VAR_1, VAR_2, VAR_5);

 VAR_5->pad = 0;

 return VAR_8;
}
