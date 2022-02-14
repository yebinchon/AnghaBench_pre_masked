
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct media_entity {int * ops; } ;
struct v4l2_subdev {int flags; int grp_id; int name; int * internal_ops; struct media_entity entity; } ;
struct media_pad {int flags; } ;
struct TYPE_2__ {int capture_mem; int bpl_alignment; int bpl_zero_padding; int bpl_max; int iss; int * ops; int type; } ;
struct iss_resizer_device {TYPE_1__ video_out; int input; struct media_pad* pads; struct v4l2_subdev subdev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct media_entity*,int ,struct media_pad*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (struct v4l2_subdev*,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (struct iss_resizer_device*) ;
 int FUNC_7 (struct v4l2_subdev*,struct iss_resizer_device*) ;
 int FUNC_8 (struct v4l2_subdev*,int *) ;

__attribute__((used)) static int FUNC_9(struct iss_resizer_device *VAR_12)
{
 struct v4l2_subdev *VAR_13 = &VAR_12->subdev;
 struct media_pad *VAR_14 = VAR_12->pads;
 struct media_entity *VAR_15 = &VAR_13->entity;
 int VAR_16;

 VAR_12->input = VAR_2;

 FUNC_8(VAR_13, &VAR_10);
 VAR_13->internal_ops = &VAR_9;
 FUNC_5(VAR_13->name, "OMAP4 ISS ISP resizer", sizeof(VAR_13->name));
 VAR_13->grp_id = FUNC_0(16);
 FUNC_7(VAR_13, VAR_12);
 VAR_13->flags |= VAR_7;

 VAR_14[VAR_4].flags = VAR_0;
 VAR_14[VAR_5].flags = VAR_1;

 VAR_15->ops = &VAR_8;
 VAR_16 = FUNC_2(VAR_15, VAR_3, VAR_14);
 if (VAR_16 < 0)
  return VAR_16;

 FUNC_4(VAR_13, ((void*)0));

 VAR_12->video_out.type = VAR_6;
 VAR_12->video_out.ops = &VAR_11;
 VAR_12->video_out.iss = FUNC_6(VAR_12);
 VAR_12->video_out.capture_mem = FUNC_1(4096 * 4096) * 3;
 VAR_12->video_out.bpl_alignment = 32;
 VAR_12->video_out.bpl_zero_padding = 1;
 VAR_12->video_out.bpl_max = 0x1ffe0;

 return FUNC_3(&VAR_12->video_out, "ISP resizer a");
}
