
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct media_entity {int * ops; } ;
struct v4l2_subdev {char* name; struct media_entity entity; int flags; int grp_id; int * internal_ops; } ;
struct media_pad {int flags; } ;
struct TYPE_2__ {int bpl_alignment; int bpl_zero_padding; int bpl_max; int capture_mem; int iss; int * ops; int type; } ;
struct iss_csi2_device {struct v4l2_subdev subdev; TYPE_1__ video_out; int iss; struct media_pad* pads; } ;
typedef int name ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct v4l2_subdev*,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct media_entity*) ;
 int FUNC_4 (struct media_entity*,int ,struct media_pad*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (char*,int,char*,char const*) ;
 int FUNC_7 (struct v4l2_subdev*,struct iss_csi2_device*) ;
 int FUNC_8 (struct v4l2_subdev*,int *) ;

__attribute__((used)) static int FUNC_9(struct iss_csi2_device *VAR_12, const char *VAR_13)
{
 struct v4l2_subdev *VAR_14 = &VAR_12->subdev;
 struct media_pad *VAR_15 = VAR_12->pads;
 struct media_entity *VAR_16 = &VAR_14->entity;
 int VAR_17;
 char VAR_18[VAR_7];

 FUNC_8(VAR_14, &VAR_11);
 VAR_14->internal_ops = &VAR_8;
 FUNC_6(VAR_18, sizeof(VAR_18), "CSI2%s", VAR_13);
 FUNC_6(VAR_14->name, sizeof(VAR_14->name), "OMAP4 ISS %s", VAR_18);

 VAR_14->grp_id = FUNC_0(16);
 FUNC_7(VAR_14, VAR_12);
 VAR_14->flags |= VAR_6;

 VAR_15[VAR_2].flags = VAR_4;
 VAR_15[VAR_1].flags = VAR_3;

 VAR_16->ops = &VAR_10;
 VAR_17 = FUNC_4(VAR_16, VAR_0, VAR_15);
 if (VAR_17 < 0)
  return VAR_17;

 FUNC_2(VAR_14, ((void*)0));


 VAR_12->video_out.type = VAR_5;
 VAR_12->video_out.ops = &VAR_9;
 VAR_12->video_out.bpl_alignment = 32;
 VAR_12->video_out.bpl_zero_padding = 1;
 VAR_12->video_out.bpl_max = 0x1ffe0;
 VAR_12->video_out.iss = VAR_12->iss;
 VAR_12->video_out.capture_mem = FUNC_1(4096 * 4096) * 3;

 VAR_17 = FUNC_5(&VAR_12->video_out, VAR_18);
 if (VAR_17 < 0)
  goto error_video;

 return 0;

error_video:
 FUNC_3(&VAR_12->subdev.entity);
 return VAR_17;
}
