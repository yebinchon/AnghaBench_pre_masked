
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bm2835_mmal_dev {int camera_use_count; int v4l2_dev; TYPE_1__** component; int instance; } ;
typedef int i ;
struct TYPE_2__ {int control; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int *,char*,...) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ,int *,int ,unsigned int*,int) ;

__attribute__((used)) static int FUNC_4(struct bm2835_mmal_dev *VAR_4)
{
 int VAR_5;

 if (!VAR_4->camera_use_count) {
  FUNC_1(&VAR_4->v4l2_dev,
    "Disabled the camera when already disabled\n");
  return -VAR_1;
 }
 VAR_4->camera_use_count--;
 if (!VAR_4->camera_use_count) {
  unsigned int VAR_6 = 0xFFFFFFFF;

  FUNC_0(1, VAR_3, &VAR_4->v4l2_dev,
    "Disabling camera\n");
  VAR_5 =
      FUNC_2(
    VAR_4->instance,
    VAR_4->component[VAR_0]);
  if (VAR_5 < 0) {
   FUNC_1(&VAR_4->v4l2_dev,
     "Failed disabling camera, ret %d\n", VAR_5);
   return -VAR_1;
  }
  FUNC_3(
   VAR_4->instance,
   &VAR_4->component[VAR_0]->control,
   VAR_2, &VAR_6,
   sizeof(VAR_6));
 }
 FUNC_0(1, VAR_3, &VAR_4->v4l2_dev,
   "Camera refcount now %d\n", VAR_4->camera_use_count);
 return 0;
}
