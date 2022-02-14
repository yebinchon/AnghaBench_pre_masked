
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bm2835_mmal_dev {int camera_use_count; int v4l2_dev; TYPE_1__** component; int instance; int camera_num; } ;
struct TYPE_2__ {int control; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int *,char*,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ,int *,int ,int *,int) ;

__attribute__((used)) static int FUNC_4(struct bm2835_mmal_dev *VAR_4)
{
 int VAR_5;

 if (!VAR_4->camera_use_count) {
  VAR_5 = FUNC_3(
   VAR_4->instance,
   &VAR_4->component[VAR_0]->control,
   VAR_2, &VAR_4->camera_num,
   sizeof(VAR_4->camera_num));
  if (VAR_5 < 0) {
   FUNC_1(&VAR_4->v4l2_dev,
     "Failed setting camera num, ret %d\n", VAR_5);
   return -VAR_1;
  }

  VAR_5 = FUNC_2(
    VAR_4->instance,
    VAR_4->component[VAR_0]);
  if (VAR_5 < 0) {
   FUNC_1(&VAR_4->v4l2_dev,
     "Failed enabling camera, ret %d\n", VAR_5);
   return -VAR_1;
  }
 }
 VAR_4->camera_use_count++;
 FUNC_0(1, VAR_3,
   &VAR_4->v4l2_dev, "enabled camera (refcount %d)\n",
   VAR_4->camera_use_count);
 return 0;
}
