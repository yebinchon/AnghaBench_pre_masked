
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_input {size_t index; int name; scalar_t__ std; int type; } ;
struct file {int dummy; } ;
struct ceu_subdev {TYPE_1__* v4l2_sd; } ;
struct ceu_device {size_t num_sd; struct ceu_subdev* subdevs; } ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char*,size_t,char*) ;
 struct ceu_device* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
     struct v4l2_input *VAR_4)
{
 struct ceu_device *VAR_5 = FUNC_1(VAR_2);
 struct ceu_subdev *VAR_6;

 if (VAR_4->index >= VAR_5->num_sd)
  return -VAR_0;

 VAR_6 = &VAR_5->subdevs[VAR_4->index];

 VAR_4->type = VAR_1;
 VAR_4->std = 0;
 FUNC_0(VAR_4->name, sizeof(VAR_4->name), "Camera%u: %s",
   VAR_4->index, VAR_6->v4l2_sd->name);

 return 0;
}
