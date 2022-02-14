
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {char* name; } ;
struct most_video_dev {TYPE_1__* vdev; TYPE_5__ v4l2_dev; int lock; int wait_data; } ;
struct TYPE_7__ {int name; int * lock; TYPE_5__* v4l2_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int,char*,char*) ;
 int FUNC_2 (TYPE_5__*,char*,int) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (TYPE_1__*,struct most_video_dev*) ;

__attribute__((used)) static int FUNC_7(struct most_video_dev *VAR_3)
{
 int VAR_4;

 FUNC_0(&VAR_3->wait_data);


 VAR_3->vdev = FUNC_3();
 if (!VAR_3->vdev)
  return -VAR_0;


 *VAR_3->vdev = VAR_2;
 VAR_3->vdev->v4l2_dev = &VAR_3->v4l2_dev;
 VAR_3->vdev->lock = &VAR_3->lock;
 FUNC_1(VAR_3->vdev->name, sizeof(VAR_3->vdev->name), "MOST: %s",
   VAR_3->v4l2_dev.name);


 FUNC_6(VAR_3->vdev, VAR_3);
 VAR_4 = FUNC_5(VAR_3->vdev, VAR_1, -1);
 if (VAR_4) {
  FUNC_2(&VAR_3->v4l2_dev, "video_register_device failed (%d)\n",
    VAR_4);
  FUNC_4(VAR_3->vdev);
 }

 return VAR_4;
}
