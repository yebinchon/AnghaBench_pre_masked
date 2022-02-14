
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct media_entity {int * ops; } ;
struct v4l2_subdev {int grp_id; struct media_entity entity; int flags; int name; int * internal_ops; } ;
struct media_pad {int flags; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {TYPE_1__ entity; } ;
struct TYPE_7__ {int capture_mem; int bpl_alignment; TYPE_2__ video; void* isp; int * ops; int type; } ;
struct isp_res_device {struct v4l2_subdev subdev; TYPE_3__ video_in; TYPE_3__ video_out; int input; struct media_pad* pads; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct media_entity*) ;
 int FUNC_2 (struct media_entity*,int ,struct media_pad*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 int FUNC_5 (struct v4l2_subdev*,int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (int ,char*,int) ;
 void* FUNC_7 (struct isp_res_device*) ;
 int FUNC_8 (struct v4l2_subdev*,struct isp_res_device*) ;
 int FUNC_9 (struct v4l2_subdev*,int *) ;

__attribute__((used)) static int FUNC_10(struct isp_res_device *VAR_15)
{
 struct v4l2_subdev *VAR_16 = &VAR_15->subdev;
 struct media_pad *VAR_17 = VAR_15->pads;
 struct media_entity *VAR_18 = &VAR_16->entity;
 int VAR_19;

 VAR_15->input = VAR_4;

 FUNC_9(VAR_16, &VAR_13);
 VAR_16->internal_ops = &VAR_12;
 FUNC_6(VAR_16->name, "OMAP3 ISP resizer", sizeof(VAR_16->name));
 VAR_16->grp_id = 1 << 16;
 FUNC_8(VAR_16, VAR_15);
 VAR_16->flags |= VAR_10;

 VAR_17[VAR_6].flags = VAR_2
        | VAR_1;
 VAR_17[VAR_7].flags = VAR_3;

 VAR_18->ops = &VAR_11;
 VAR_19 = FUNC_2(VAR_18, VAR_5, VAR_17);
 if (VAR_19 < 0)
  return VAR_19;

 FUNC_5(VAR_16, ((void*)0));

 VAR_15->video_in.type = VAR_9;
 VAR_15->video_in.ops = &VAR_14;
 VAR_15->video_in.isp = FUNC_7(VAR_15);
 VAR_15->video_in.capture_mem = FUNC_0(4096 * 4096) * 2 * 3;
 VAR_15->video_in.bpl_alignment = 32;
 VAR_15->video_out.type = VAR_8;
 VAR_15->video_out.ops = &VAR_14;
 VAR_15->video_out.isp = FUNC_7(VAR_15);
 VAR_15->video_out.capture_mem = FUNC_0(4096 * 4096) * 2 * 3;
 VAR_15->video_out.bpl_alignment = 32;

 VAR_19 = FUNC_4(&VAR_15->video_in, "resizer");
 if (VAR_19 < 0)
  goto error_video_in;

 VAR_19 = FUNC_4(&VAR_15->video_out, "resizer");
 if (VAR_19 < 0)
  goto error_video_out;

 VAR_15->video_out.video.entity.flags |= VAR_0;

 return 0;

error_video_out:
 FUNC_3(&VAR_15->video_in);
error_video_in:
 FUNC_1(&VAR_15->subdev.entity);
 return VAR_19;
}
