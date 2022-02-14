
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_output {int std; int type; int name; scalar_t__ index; } ;
struct TYPE_2__ {int tvnorms; } ;
struct sh_vou_device {TYPE_1__ vdev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 struct sh_vou_device* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
         struct v4l2_output *VAR_4)
{
 struct sh_vou_device *VAR_5 = FUNC_1(VAR_2);

 if (VAR_4->index)
  return -VAR_0;
 FUNC_0(VAR_4->name, "Video Out", sizeof(VAR_4->name));
 VAR_4->type = VAR_1;
 VAR_4->std = VAR_5->vdev.tvnorms;
 return 0;
}
