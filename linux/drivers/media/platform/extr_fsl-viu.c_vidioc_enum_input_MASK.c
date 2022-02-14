
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct viu_fh {TYPE_2__* dev; } ;
struct v4l2_input {scalar_t__ index; int name; int std; int type; } ;
struct file {int dummy; } ;
struct TYPE_4__ {TYPE_1__* vdev; } ;
struct TYPE_3__ {int tvnorms; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
     struct v4l2_input *VAR_4)
{
 struct viu_fh *VAR_5 = VAR_3;

 if (VAR_4->index != 0)
  return -VAR_0;

 VAR_4->type = VAR_1;
 VAR_4->std = VAR_5->dev->vdev->tvnorms;
 FUNC_0(VAR_4->name, "Camera", sizeof(VAR_4->name));
 return 0;
}
