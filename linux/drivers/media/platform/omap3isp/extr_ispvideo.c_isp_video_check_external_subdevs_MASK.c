
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_21__ {int code; } ;
struct v4l2_subdev_format {TYPE_7__ format; int which; int pad; } ;
struct v4l2_ext_controls {int count; unsigned int value64; struct v4l2_ext_controls* controls; int id; } ;
struct v4l2_ext_control {int count; unsigned int value64; struct v4l2_ext_control* controls; int id; } ;
struct media_pad {int index; struct media_entity* entity; } ;
struct media_entity {int * pads; } ;
struct isp_video {int video; struct isp_device* isp; } ;
struct isp_pipeline {unsigned int external_rate; int ent_enum; TYPE_9__* external; int external_width; int * input; } ;
struct TYPE_22__ {struct media_entity entity; } ;
struct TYPE_14__ {TYPE_8__ subdev; } ;
struct TYPE_19__ {struct media_entity entity; } ;
struct TYPE_20__ {TYPE_5__ subdev; } ;
struct TYPE_17__ {struct media_entity entity; } ;
struct TYPE_18__ {TYPE_3__ subdev; } ;
struct TYPE_15__ {struct media_entity entity; } ;
struct TYPE_16__ {TYPE_1__ subdev; } ;
struct isp_device {TYPE_11__ isp_ccdc; int dev; TYPE_6__ isp_ccp2; TYPE_4__ isp_csi2c; TYPE_2__ isp_csi2a; } ;
typedef int ctrls ;
typedef int ctrl ;
struct TYPE_23__ {int name; int ctrl_handler; } ;
struct TYPE_13__ {int width; } ;


 unsigned int FUNC_0 (struct media_entity**) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_5 ;
 int FUNC_2 (struct media_entity*) ;
 scalar_t__ FUNC_3 (int *,struct media_entity*) ;
 struct media_pad* FUNC_4 (int *) ;
 TYPE_9__* FUNC_5 (struct media_entity*) ;
 int FUNC_6 (struct v4l2_ext_controls*,int ,int) ;
 int FUNC_7 (TYPE_11__*,unsigned int*) ;
 TYPE_10__* FUNC_8 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int ,int *,int *,struct v4l2_ext_controls*) ;
 int FUNC_11 (TYPE_9__*,int ,int ,int *,struct v4l2_subdev_format*) ;

__attribute__((used)) static int FUNC_12(struct isp_video *VAR_7,
         struct isp_pipeline *VAR_8)
{
 struct isp_device *VAR_9 = VAR_7->isp;
 struct media_entity *VAR_10[] = {
  &VAR_9->isp_csi2a.subdev.entity,
  &VAR_9->isp_csi2c.subdev.entity,
  &VAR_9->isp_ccp2.subdev.entity,
  &VAR_9->isp_ccdc.subdev.entity
 };
 struct media_pad *VAR_11;
 struct media_entity *VAR_12 = ((void*)0);
 struct media_entity *VAR_13;
 struct v4l2_subdev_format VAR_14;
 struct v4l2_ext_controls VAR_15;
 struct v4l2_ext_control VAR_16;
 unsigned int VAR_17;
 int VAR_18;


 if (VAR_8->input != ((void*)0))
  return 0;

 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_10); VAR_17++) {

  if (!FUNC_3(&VAR_8->ent_enum, VAR_10[VAR_17]))
   continue;


  VAR_11 = FUNC_4(&VAR_10[VAR_17]->pads[0]);
  if (VAR_11 == ((void*)0))
   continue;

  VAR_12 = VAR_11->entity;
  VAR_13 = VAR_10[VAR_17];
  break;
 }

 if (!VAR_12) {
  FUNC_1(VAR_9->dev, "can't find source, failing now\n");
  return -VAR_0;
 }

 if (!FUNC_2(VAR_12))
  return 0;

 VAR_8->external = FUNC_5(VAR_12);

 VAR_14.pad = VAR_11->index;
 VAR_14.which = VAR_4;
 VAR_18 = FUNC_11(FUNC_5(VAR_13),
          VAR_6, VAR_5, ((void*)0), &VAR_14);
 if (FUNC_9(VAR_18 < 0)) {
  FUNC_1(VAR_9->dev, "get_fmt returned null!\n");
  return VAR_18;
 }

 VAR_8->external_width =
  FUNC_8(VAR_14.format.code)->width;

 FUNC_6(&VAR_15, 0, sizeof(VAR_15));
 FUNC_6(&VAR_16, 0, sizeof(VAR_16));

 VAR_16.id = VAR_3;

 VAR_15.count = 1;
 VAR_15.controls = &VAR_16;
 VAR_18 = FUNC_10(VAR_8->external->ctrl_handler, &VAR_7->video,
          ((void*)0), &VAR_15);
 if (VAR_18 < 0) {
  FUNC_1(VAR_9->dev, "no pixel rate control in subdev %s\n",
    VAR_8->external->name);
  return VAR_18;
 }

 VAR_8->external_rate = VAR_16.value64;

 if (FUNC_3(&VAR_8->ent_enum,
       &VAR_9->isp_ccdc.subdev.entity)) {
  unsigned int VAR_19 = VAR_2;




  FUNC_7(&VAR_9->isp_ccdc, &VAR_19);
  if (VAR_8->external_rate > VAR_19)
   return -VAR_1;
 }

 return 0;
}
