
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int * ops; int function; } ;
struct v4l2_subdev {TYPE_2__ entity; int name; int flags; } ;
struct vsp1_entity {scalar_t__ type; scalar_t__ index; unsigned int source_pad; struct v4l2_subdev subdev; int * config; TYPE_3__* pads; int * sources; struct vsp1_device* vsp1; int lock; TYPE_1__* route; } ;
struct vsp1_device {int dev; int media_ops; } ;
struct v4l2_subdev_ops {int dummy; } ;
struct TYPE_8__ {void* flags; } ;
struct TYPE_6__ {scalar_t__ type; scalar_t__ index; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 char* FUNC_1 (int ) ;
 void* FUNC_2 (int ,unsigned int,int,int ) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,unsigned int,TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int,char*,char*,char const*) ;
 int * FUNC_8 (struct v4l2_subdev*) ;
 int FUNC_9 (struct v4l2_subdev*,struct v4l2_subdev_ops const*) ;
 int FUNC_10 (struct v4l2_subdev*,int *) ;
 TYPE_1__* VAR_6 ;

int FUNC_11(struct vsp1_device *VAR_7, struct vsp1_entity *VAR_8,
       const char *VAR_9, unsigned int VAR_10,
       const struct v4l2_subdev_ops *VAR_11, u32 VAR_12)
{
 struct v4l2_subdev *VAR_13;
 unsigned int VAR_14;
 int VAR_15;

 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_6); ++VAR_14) {
  if (VAR_6[VAR_14].type == VAR_8->type &&
      VAR_6[VAR_14].index == VAR_8->index) {
   VAR_8->route = &VAR_6[VAR_14];
   break;
  }
 }

 if (VAR_14 == FUNC_0(VAR_6))
  return -VAR_0;

 FUNC_6(&VAR_8->lock);

 VAR_8->vsp1 = VAR_7;
 VAR_8->source_pad = VAR_10 - 1;


 VAR_8->pads = FUNC_2(VAR_7->dev,
        VAR_10, sizeof(*VAR_8->pads),
        VAR_2);
 if (VAR_8->pads == ((void*)0))
  return -VAR_1;

 for (VAR_14 = 0; VAR_14 < VAR_10 - 1; ++VAR_14)
  VAR_8->pads[VAR_14].flags = VAR_3;

 VAR_8->sources = FUNC_2(VAR_7->dev, FUNC_3(VAR_10 - 1, 1U),
           sizeof(*VAR_8->sources), VAR_2);
 if (VAR_8->sources == ((void*)0))
  return -VAR_1;


 VAR_8->pads[VAR_10 - 1].flags = VAR_10 > 1 ? VAR_4
      : VAR_3;


 VAR_15 = FUNC_5(&VAR_8->subdev.entity, VAR_10,
         VAR_8->pads);
 if (VAR_15 < 0)
  return VAR_15;


 VAR_13 = &VAR_8->subdev;
 FUNC_9(VAR_13, VAR_11);

 VAR_13->entity.function = VAR_12;
 VAR_13->entity.ops = &VAR_7->media_ops;
 VAR_13->flags |= VAR_5;

 FUNC_7(VAR_13->name, sizeof(VAR_13->name), "%s %s",
   FUNC_1(VAR_7->dev), VAR_9);

 FUNC_10(VAR_13, ((void*)0));





 VAR_8->config = FUNC_8(&VAR_8->subdev);
 if (VAR_8->config == ((void*)0)) {
  FUNC_4(&VAR_8->subdev.entity);
  return -VAR_1;
 }

 return 0;
}
