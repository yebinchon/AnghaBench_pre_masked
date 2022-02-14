
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ encode_component; int camera_port; } ;
struct bm2835_mmal_dev {int v4l2_dev; int ctrl_handler; scalar_t__* component; int instance; TYPE_1__ capture; int vdev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bm2835_mmal_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int ,int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct bm2835_mmal_dev *VAR_5)
{
 if (!VAR_5)
  return;

 FUNC_4(&VAR_5->v4l2_dev, "unregistering %s\n",
    FUNC_8(&VAR_5->vdev));

 FUNC_9(&VAR_5->vdev);

 if (VAR_5->capture.encode_component) {
  FUNC_2(1, VAR_4, &VAR_5->v4l2_dev,
    "mmal_exit - disconnect tunnel\n");
  FUNC_7(VAR_5->instance,
            VAR_5->capture.camera_port, ((void*)0));
  FUNC_5(VAR_5->instance,
          VAR_5->capture.encode_component);
 }
 FUNC_5(VAR_5->instance,
         VAR_5->component[VAR_0]);

 FUNC_6(VAR_5->instance,
          VAR_5->component[VAR_3]);

 FUNC_6(VAR_5->instance,
          VAR_5->component[VAR_1]);

 FUNC_6(VAR_5->instance,
          VAR_5->component[VAR_2]);

 FUNC_6(VAR_5->instance,
          VAR_5->component[VAR_0]);

 FUNC_1(&VAR_5->ctrl_handler);

 FUNC_3(&VAR_5->v4l2_dev);

 FUNC_0(VAR_5);
}
