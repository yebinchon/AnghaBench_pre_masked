
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct media_entity {int * ops; } ;
struct v4l2_subdev {int grp_id; struct media_entity entity; int * ctrl_handler; int flags; int name; int * internal_ops; } ;
struct media_pad {int flags; } ;
struct TYPE_3__ {int capture_mem; int bpl_alignment; void* isp; int * ops; int type; } ;
struct isp_prev_device {struct v4l2_subdev subdev; TYPE_1__ video_in; TYPE_1__ video_out; int ctrls; int input; struct media_pad* pads; } ;


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
 int FUNC_0 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (struct media_entity*) ;
 int FUNC_2 (struct media_entity*,int ,struct media_pad*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int VAR_20 ;
 int FUNC_5 (struct v4l2_subdev*,int *) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_6 (int ,char*,int) ;
 void* FUNC_7 (struct isp_prev_device*) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,int ,int ,int ,int ,int ) ;
 int FUNC_11 (struct v4l2_subdev*,struct isp_prev_device*) ;
 int FUNC_12 (struct v4l2_subdev*,int *) ;

__attribute__((used)) static int FUNC_13(struct isp_prev_device *VAR_25)
{
 struct v4l2_subdev *VAR_26 = &VAR_25->subdev;
 struct media_pad *VAR_27 = VAR_25->pads;
 struct media_entity *VAR_28 = &VAR_26->entity;
 int VAR_29;

 VAR_25->input = VAR_11;

 FUNC_12(VAR_26, &VAR_23);
 VAR_26->internal_ops = &VAR_22;
 FUNC_6(VAR_26->name, "OMAP3 ISP preview", sizeof(VAR_26->name));
 VAR_26->grp_id = 1 << 16;
 FUNC_11(VAR_26, VAR_25);
 VAR_26->flags |= VAR_19;

 FUNC_8(&VAR_25->ctrls, 2);
 FUNC_10(&VAR_25->ctrls, &VAR_20, VAR_17,
     VAR_2, VAR_1,
     VAR_3, VAR_0);
 FUNC_10(&VAR_25->ctrls, &VAR_20, VAR_18,
     VAR_6, VAR_5,
     VAR_7, VAR_4);
 FUNC_9(&VAR_25->ctrls);
 VAR_26->ctrl_handler = &VAR_25->ctrls;

 VAR_27[VAR_13].flags = VAR_9
        | VAR_8;
 VAR_27[VAR_14].flags = VAR_10;

 VAR_28->ops = &VAR_21;
 VAR_29 = FUNC_2(VAR_28, VAR_12, VAR_27);
 if (VAR_29 < 0)
  return VAR_29;

 FUNC_5(VAR_26, ((void*)0));





 VAR_25->video_in.type = VAR_16;
 VAR_25->video_in.ops = &VAR_24;
 VAR_25->video_in.isp = FUNC_7(VAR_25);
 VAR_25->video_in.capture_mem = FUNC_0(4096 * 4096) * 2 * 3;
 VAR_25->video_in.bpl_alignment = 64;
 VAR_25->video_out.type = VAR_15;
 VAR_25->video_out.ops = &VAR_24;
 VAR_25->video_out.isp = FUNC_7(VAR_25);
 VAR_25->video_out.capture_mem = FUNC_0(4096 * 4096) * 2 * 3;
 VAR_25->video_out.bpl_alignment = 32;

 VAR_29 = FUNC_4(&VAR_25->video_in, "preview");
 if (VAR_29 < 0)
  goto error_video_in;

 VAR_29 = FUNC_4(&VAR_25->video_out, "preview");
 if (VAR_29 < 0)
  goto error_video_out;

 return 0;

error_video_out:
 FUNC_3(&VAR_25->video_in);
error_video_in:
 FUNC_1(&VAR_25->subdev.entity);
 return VAR_29;
}
