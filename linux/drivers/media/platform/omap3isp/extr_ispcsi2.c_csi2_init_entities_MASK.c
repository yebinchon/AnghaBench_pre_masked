
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct media_entity {int * ops; } ;
struct v4l2_subdev {int grp_id; struct media_entity entity; int flags; int name; int * internal_ops; } ;
struct media_pad {int flags; } ;
struct TYPE_2__ {int bpl_alignment; int bpl_zero_padding; int bpl_max; int capture_mem; int isp; int * ops; int type; } ;
struct isp_csi2_device {struct v4l2_subdev subdev; TYPE_1__ video_out; int isp; struct media_pad* pads; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct v4l2_subdev*,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct media_entity*) ;
 int FUNC_3 (struct media_entity*,int ,struct media_pad*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (struct v4l2_subdev*,struct isp_csi2_device*) ;
 int FUNC_7 (struct v4l2_subdev*,int *) ;

__attribute__((used)) static int FUNC_8(struct isp_csi2_device *VAR_12)
{
 struct v4l2_subdev *VAR_13 = &VAR_12->subdev;
 struct media_pad *VAR_14 = VAR_12->pads;
 struct media_entity *VAR_15 = &VAR_13->entity;
 int VAR_16;

 FUNC_7(VAR_13, &VAR_11);
 VAR_13->internal_ops = &VAR_8;
 FUNC_5(VAR_13->name, "OMAP3 ISP CSI2a", sizeof(VAR_13->name));

 VAR_13->grp_id = 1 << 16;
 FUNC_6(VAR_13, VAR_12);
 VAR_13->flags |= VAR_7;

 VAR_14[VAR_2].flags = VAR_5;
 VAR_14[VAR_1].flags = VAR_4
        | VAR_3;

 VAR_15->ops = &VAR_10;
 VAR_16 = FUNC_3(VAR_15, VAR_0, VAR_14);
 if (VAR_16 < 0)
  return VAR_16;

 FUNC_1(VAR_13, ((void*)0));


 VAR_12->video_out.type = VAR_6;
 VAR_12->video_out.ops = &VAR_9;
 VAR_12->video_out.bpl_alignment = 32;
 VAR_12->video_out.bpl_zero_padding = 1;
 VAR_12->video_out.bpl_max = 0x1ffe0;
 VAR_12->video_out.isp = VAR_12->isp;
 VAR_12->video_out.capture_mem = FUNC_0(4096 * 4096) * 3;

 VAR_16 = FUNC_4(&VAR_12->video_out, "CSI2a");
 if (VAR_16 < 0)
  goto error_video;

 return 0;

error_video:
 FUNC_2(&VAR_12->subdev.entity);
 return VAR_16;
}
