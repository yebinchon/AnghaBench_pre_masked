
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpbe_layer {TYPE_1__* disp_dev; } ;
struct vpbe_device {unsigned int current_out_index; int v4l2_dev; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct vpbe_device* vpbe_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int *,char*) ;
 struct vpbe_layer* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2,
    unsigned int *VAR_3)
{
 struct vpbe_layer *VAR_4 = FUNC_1(VAR_1);
 struct vpbe_device *VAR_5 = VAR_4->disp_dev->vpbe_dev;

 FUNC_0(1, VAR_0, &VAR_5->v4l2_dev, "VIDIOC_G_OUTPUT\n");

 *VAR_3 = VAR_5->current_out_index;

 return 0;
}
