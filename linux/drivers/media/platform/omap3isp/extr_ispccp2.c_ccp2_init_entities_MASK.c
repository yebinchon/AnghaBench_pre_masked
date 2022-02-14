
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct media_entity {int * ops; } ;
struct v4l2_subdev {int grp_id; struct media_entity entity; int flags; int name; int * internal_ops; } ;
struct media_pad {int flags; } ;
struct TYPE_2__ {int bpl_alignment; int bpl_max; int capture_mem; int * ops; int isp; int type; } ;
struct isp_ccp2_device {struct v4l2_subdev subdev; TYPE_1__ video_in; int output; int input; struct media_pad* pads; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct v4l2_subdev*,int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct media_entity*) ;
 int FUNC_3 (struct media_entity*,int ,struct media_pad*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (struct isp_ccp2_device*) ;
 int FUNC_7 (struct v4l2_subdev*,struct isp_ccp2_device*) ;
 int FUNC_8 (struct v4l2_subdev*,int *) ;

__attribute__((used)) static int FUNC_9(struct isp_ccp2_device *VAR_14)
{
 struct v4l2_subdev *VAR_15 = &VAR_14->subdev;
 struct media_pad *VAR_16 = VAR_14->pads;
 struct media_entity *VAR_17 = &VAR_15->entity;
 int VAR_18;

 VAR_14->input = VAR_0;
 VAR_14->output = VAR_1;

 FUNC_8(VAR_15, &VAR_12);
 VAR_15->internal_ops = &VAR_11;
 FUNC_5(VAR_15->name, "OMAP3 ISP CCP2", sizeof(VAR_15->name));
 VAR_15->grp_id = 1 << 16;
 FUNC_7(VAR_15, VAR_14);
 VAR_15->flags |= VAR_9;

 VAR_16[VAR_3].flags = VAR_6
        | VAR_5;
 VAR_16[VAR_4].flags = VAR_7;

 VAR_17->ops = &VAR_10;
 VAR_18 = FUNC_3(VAR_17, VAR_2, VAR_16);
 if (VAR_18 < 0)
  return VAR_18;

 FUNC_1(VAR_15, ((void*)0));
 VAR_14->video_in.type = VAR_8;
 VAR_14->video_in.bpl_alignment = 32;
 VAR_14->video_in.bpl_max = 0xffffffe0;
 VAR_14->video_in.isp = FUNC_6(VAR_14);
 VAR_14->video_in.ops = &VAR_13;
 VAR_14->video_in.capture_mem = FUNC_0(4096 * 4096) * 3;

 VAR_18 = FUNC_4(&VAR_14->video_in, "CCP2");
 if (VAR_18 < 0)
  goto error;

 return 0;

error:
 FUNC_2(&VAR_14->subdev.entity);
 return VAR_18;
}
