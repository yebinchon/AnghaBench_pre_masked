
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct v4l2_subdev_mbus_code_enum {int pad; int code; scalar_t__ index; int which; } ;
struct v4l2_subdev {int ctrl_handler; int name; } ;
struct TYPE_11__ {int error; } ;
struct TYPE_9__ {TYPE_4__* ctrl_handler; int tvnorms; } ;
struct rvin_dev {int mbus_code; TYPE_3__* parallel; TYPE_4__ ctrl_handler; TYPE_2__ vdev; int std; TYPE_1__* info; } ;
struct TYPE_10__ {int source_pad; int sink_pad; struct v4l2_subdev* subdev; } ;
struct TYPE_8__ {scalar_t__ use_mc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;
 int FUNC_1 (TYPE_4__*,int ,int *,int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (TYPE_4__*,int *,int ,int ,int,int,int) ;
 int FUNC_5 (struct v4l2_subdev*,int ,int ,int *,...) ;
 int VAR_13 ;
 int FUNC_6 (struct rvin_dev*,char*,int ,int) ;
 int FUNC_7 (struct rvin_dev*,char*,int ) ;

__attribute__((used)) static int FUNC_8(struct rvin_dev *VAR_14,
       struct v4l2_subdev *VAR_15)
{
 struct v4l2_subdev_mbus_code_enum VAR_16 = {
  .which = VAR_7,
 };
 int VAR_17;


 VAR_17 = FUNC_0(VAR_15, VAR_4);
 if (VAR_17 < 0)
  return VAR_17;
 VAR_14->parallel->source_pad = VAR_17;

 VAR_17 = FUNC_0(VAR_15, VAR_3);
 VAR_14->parallel->sink_pad = VAR_17 < 0 ? 0 : VAR_17;

 if (VAR_14->info->use_mc) {
  VAR_14->parallel->subdev = VAR_15;
  return 0;
 }


 VAR_14->mbus_code = 0;
 VAR_16.index = 0;
 VAR_16.pad = VAR_14->parallel->source_pad;
 while (!VAR_14->mbus_code &&
        !FUNC_5(VAR_15, VAR_11, VAR_8, ((void*)0), &VAR_16)) {
  VAR_16.index++;
  switch (VAR_16.code) {
  case 128:
  case 130:
  case 129:
  case 131:
  case 132:
   VAR_14->mbus_code = VAR_16.code;
   FUNC_6(VAR_14, "Found media bus format for %s: %d\n",
    VAR_15->name, VAR_14->mbus_code);
   break;
  default:
   break;
  }
 }

 if (!VAR_14->mbus_code) {
  FUNC_7(VAR_14, "Unsupported media bus format for %s\n",
   VAR_15->name);
  return -VAR_0;
 }


 VAR_17 = FUNC_5(VAR_15, VAR_13, VAR_10, &VAR_14->vdev.tvnorms);
 if (VAR_17 < 0 && VAR_17 != -VAR_2 && VAR_17 != -VAR_1)
  return VAR_17;


 VAR_14->std = VAR_6;
 VAR_17 = FUNC_5(VAR_15, VAR_13, VAR_9, &VAR_14->std);
 if (VAR_17 < 0 && VAR_17 != -VAR_2)
  return VAR_17;


 VAR_17 = FUNC_3(&VAR_14->ctrl_handler, 16);
 if (VAR_17 < 0)
  return VAR_17;

 FUNC_4(&VAR_14->ctrl_handler, &VAR_12,
     VAR_5, 0, 255, 1, 255);

 if (VAR_14->ctrl_handler.error) {
  VAR_17 = VAR_14->ctrl_handler.error;
  FUNC_2(&VAR_14->ctrl_handler);
  return VAR_17;
 }

 VAR_17 = FUNC_1(&VAR_14->ctrl_handler, VAR_15->ctrl_handler,
        ((void*)0), 1);
 if (VAR_17 < 0) {
  FUNC_2(&VAR_14->ctrl_handler);
  return VAR_17;
 }

 VAR_14->vdev.ctrl_handler = &VAR_14->ctrl_handler;

 VAR_14->parallel->subdev = VAR_15;

 return 0;
}
