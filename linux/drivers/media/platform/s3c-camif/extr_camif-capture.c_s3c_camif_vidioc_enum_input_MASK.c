
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int name; } ;
struct v4l2_input {int name; int type; scalar_t__ index; } ;
struct file {int dummy; } ;
struct camif_vp {TYPE_2__* camif; } ;
struct TYPE_3__ {struct v4l2_subdev* sd; } ;
struct TYPE_4__ {TYPE_1__ sensor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 struct camif_vp* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
           struct v4l2_input *VAR_4)
{
 struct camif_vp *VAR_5 = FUNC_1(VAR_2);
 struct v4l2_subdev *VAR_6 = VAR_5->camif->sensor.sd;

 if (VAR_4->index || VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_4->type = VAR_1;
 FUNC_0(VAR_4->name, VAR_6->name, sizeof(VAR_4->name));
 return 0;
}
