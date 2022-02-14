
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {struct media_pipeline* pipe; } ;
struct v4l2_subdev {TYPE_4__ entity; } ;
struct TYPE_10__ {struct media_device* mdev; } ;
struct TYPE_13__ {TYPE_3__ graph_obj; } ;
struct media_pipeline {int dummy; } ;
struct TYPE_12__ {TYPE_6__ entity; struct media_pipeline pipe; } ;
struct rvin_dev {TYPE_5__ vdev; int pad; TYPE_2__* parallel; TYPE_1__* info; } ;
struct media_pad {int entity; } ;
struct media_device {int graph_mutex; } ;
struct TYPE_9__ {struct v4l2_subdev* subdev; } ;
struct TYPE_8__ {int use_mc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_6__*,struct media_pipeline*) ;
 struct media_pad* FUNC_1 (int *) ;
 struct v4l2_subdev* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct rvin_dev*,struct v4l2_subdev*,struct media_pad*) ;
 int VAR_2 ;
 int FUNC_7 (struct v4l2_subdev*,int ,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8(struct rvin_dev *VAR_4, int VAR_5)
{
 struct media_pipeline *VAR_6;
 struct media_device *VAR_7;
 struct v4l2_subdev *VAR_8;
 struct media_pad *VAR_9;
 int VAR_10;


 if (!VAR_4->info->use_mc) {
  VAR_10 = FUNC_7(VAR_4->parallel->subdev, VAR_3, VAR_2,
           VAR_5);

  return VAR_10 == -VAR_0 ? 0 : VAR_10;
 }

 VAR_9 = FUNC_1(&VAR_4->pad);
 if (!VAR_9)
  return -VAR_1;

 VAR_8 = FUNC_2(VAR_9->entity);

 if (!VAR_5) {
  FUNC_3(&VAR_4->vdev.entity);
  return FUNC_7(VAR_8, VAR_3, VAR_2, 0);
 }

 VAR_10 = FUNC_6(VAR_4, VAR_8, VAR_9);
 if (VAR_10)
  return VAR_10;







 VAR_7 = VAR_4->vdev.entity.graph_obj.mdev;
 FUNC_4(&VAR_7->graph_mutex);
 VAR_6 = VAR_8->entity.pipe ? VAR_8->entity.pipe : &VAR_4->vdev.pipe;
 VAR_10 = FUNC_0(&VAR_4->vdev.entity, VAR_6);
 FUNC_5(&VAR_7->graph_mutex);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_7(VAR_8, VAR_3, VAR_2, 1);
 if (VAR_10 == -VAR_0)
  VAR_10 = 0;
 if (VAR_10)
  FUNC_3(&VAR_4->vdev.entity);

 return VAR_10;
}
