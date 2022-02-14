
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct vpbe_layer {TYPE_1__* disp_dev; } ;
struct TYPE_4__ {int timings_type; int std_id; } ;
struct vpbe_device {TYPE_2__ current_timings; int v4l2_dev; } ;
struct file {int dummy; } ;
struct TYPE_3__ {struct vpbe_device* vpbe_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int *,char*) ;
 struct vpbe_layer* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
    v4l2_std_id *VAR_5)
{
 struct vpbe_layer *VAR_6 = FUNC_1(VAR_3);
 struct vpbe_device *VAR_7 = VAR_6->disp_dev->vpbe_dev;

 FUNC_0(1, VAR_2, &VAR_7->v4l2_dev, "VIDIOC_G_STD\n");


 if (VAR_7->current_timings.timings_type & VAR_1) {
  *VAR_5 = VAR_7->current_timings.std_id;
  return 0;
 }

 return -VAR_0;
}
