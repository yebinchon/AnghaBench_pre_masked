
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int device_caps; int * v4l2_dev; int * lock; } ;
struct stk_camera {TYPE_1__ vdev; int v4l2_dev; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 TYPE_1__ VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (TYPE_1__*,struct stk_camera*) ;

__attribute__((used)) static int FUNC_5(struct stk_camera *VAR_5)
{
 int VAR_6;

 VAR_5->vdev = VAR_4;
 VAR_5->vdev.lock = &VAR_5->lock;
 VAR_5->vdev.v4l2_dev = &VAR_5->v4l2_dev;
 VAR_5->vdev.device_caps = VAR_2 | VAR_0 |
    VAR_1;
 FUNC_4(&VAR_5->vdev, VAR_5);
 VAR_6 = FUNC_3(&VAR_5->vdev, VAR_3, -1);
 if (VAR_6)
  FUNC_0("v4l registration failed\n");
 else
  FUNC_1("Syntek USB2.0 Camera is now controlling device %s\n",
   FUNC_2(&VAR_5->vdev));
 return VAR_6;
}
