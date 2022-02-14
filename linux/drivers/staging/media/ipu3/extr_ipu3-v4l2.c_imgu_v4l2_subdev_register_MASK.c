
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct TYPE_12__ {int function; int * ops; } ;
struct TYPE_11__ {int flags; TYPE_6__ entity; struct v4l2_ctrl_handler* ctrl_handler; int name; int * internal_ops; } ;
struct imgu_v4l2_subdev {unsigned int pipe; TYPE_3__ subdev; int ctrl; int running_mode; TYPE_7__* subdev_pads; struct v4l2_ctrl_handler ctrl_handler; } ;
struct imgu_media_pipe {TYPE_1__* nodes; } ;
struct imgu_device {TYPE_2__* pci_dev; int v4l2_dev; struct imgu_media_pipe* imgu_pipe; } ;
struct TYPE_13__ {int flags; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_9__ {scalar_t__ output; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*,int,TYPE_7__*) ;
 int FUNC_4 (int ,int,char*,char*,unsigned int) ;
 int FUNC_5 (struct v4l2_ctrl_handler*) ;
 int FUNC_6 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_7 (struct v4l2_ctrl_handler*,int *,int *) ;
 int FUNC_8 (int *,TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,struct imgu_device*) ;
 int FUNC_10 (TYPE_3__*,int *) ;

__attribute__((used)) static int FUNC_11(struct imgu_device *VAR_12,
         struct imgu_v4l2_subdev *VAR_13,
         unsigned int VAR_14)
{
 int VAR_15, VAR_16;
 struct v4l2_ctrl_handler *VAR_17 = &VAR_13->ctrl_handler;
 struct imgu_media_pipe *VAR_18 = &VAR_12->imgu_pipe[VAR_14];


 VAR_16 = FUNC_3(&VAR_13->subdev.entity, VAR_1,
       VAR_13->subdev_pads);
 if (VAR_16) {
  FUNC_1(&VAR_12->pci_dev->dev,
   "failed initialize subdev media entity (%d)\n", VAR_16);
  return VAR_16;
 }
 VAR_13->subdev.entity.ops = &VAR_8;
 for (VAR_15 = 0; VAR_15 < VAR_1; VAR_15++) {
  VAR_13->subdev_pads[VAR_15].flags = VAR_18->nodes[VAR_15].output ?
   VAR_4 : VAR_5;
 }


 FUNC_10(&VAR_13->subdev, &VAR_11);
 VAR_13->subdev.entity.function = VAR_3;
 VAR_13->subdev.internal_ops = &VAR_10;
 VAR_13->subdev.flags = VAR_6 |
    VAR_7;
 FUNC_4(VAR_13->subdev.name, sizeof(VAR_13->subdev.name),
   "%s %u", VAR_0, VAR_14);
 FUNC_9(&VAR_13->subdev, VAR_12);
 FUNC_0(&VAR_13->running_mode, VAR_2);
 FUNC_6(VAR_17, 1);
 VAR_13->subdev.ctrl_handler = VAR_17;
 VAR_13->ctrl = FUNC_7(VAR_17, &VAR_9, ((void*)0));
 if (VAR_17->error) {
  VAR_16 = VAR_17->error;
  FUNC_1(&VAR_12->pci_dev->dev,
   "failed to create subdev v4l2 ctrl with err %d", VAR_16);
  goto fail_subdev;
 }
 VAR_16 = FUNC_8(&VAR_12->v4l2_dev, &VAR_13->subdev);
 if (VAR_16) {
  FUNC_1(&VAR_12->pci_dev->dev,
   "failed initialize subdev (%d)\n", VAR_16);
  goto fail_subdev;
 }

 VAR_13->pipe = VAR_14;
 return 0;

fail_subdev:
 FUNC_5(VAR_13->subdev.ctrl_handler);
 FUNC_2(&VAR_13->subdev.entity);

 return VAR_16;
}
