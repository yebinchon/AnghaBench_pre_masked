
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct v4l2_ctrl {int flags; } ;
struct TYPE_2__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct go7007 {TYPE_1__ v4l2_dev; void* modet_mode; void* mpeg_video_aspect_ratio; void* mpeg_video_rep_seqheader; void* mpeg_video_b_frames; void* mpeg_video_bitrate; void* mpeg_video_gop_closure; void* mpeg_video_gop_size; struct v4l2_ctrl_handler hdl; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_0 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_1 (struct v4l2_ctrl_handler*,int *,int *) ;
 void* FUNC_2 (struct v4l2_ctrl_handler*,int *,int ,int,int,int,int) ;
 void* FUNC_3 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int ) ;
 int FUNC_4 (TYPE_1__*,char*) ;

int FUNC_5(struct go7007 *VAR_29)
{
 struct v4l2_ctrl_handler *VAR_30 = &VAR_29->hdl;
 struct v4l2_ctrl *VAR_31;

 FUNC_0(VAR_30, 22);
 VAR_29->mpeg_video_gop_size = FUNC_2(VAR_30, ((void*)0),
   VAR_6, 0, 34, 1, 15);
 VAR_29->mpeg_video_gop_closure = FUNC_2(VAR_30, ((void*)0),
   VAR_5, 0, 1, 1, 1);
 VAR_29->mpeg_video_bitrate = FUNC_2(VAR_30, ((void*)0),
   VAR_3,
   64000, 10000000, 1, 9800000);
 VAR_29->mpeg_video_b_frames = FUNC_2(VAR_30, ((void*)0),
   VAR_4, 0, 2, 2, 0);
 VAR_29->mpeg_video_rep_seqheader = FUNC_2(VAR_30, ((void*)0),
   VAR_7, 0, 1, 1, 1);

 VAR_29->mpeg_video_aspect_ratio = FUNC_3(VAR_30, ((void*)0),
   VAR_2,
   VAR_14, 0,
   VAR_15);
 VAR_31 = FUNC_2(VAR_30, ((void*)0),
   VAR_1, 0,
   VAR_13 |
   VAR_12, 0,
   VAR_13 |
   VAR_12);
 if (VAR_31)
  VAR_31->flags |= VAR_8;
 FUNC_1(VAR_30, &VAR_25, ((void*)0));
 FUNC_1(VAR_30, &VAR_21, ((void*)0));
 FUNC_1(VAR_30, &VAR_17, ((void*)0));
 FUNC_1(VAR_30, &VAR_26, ((void*)0));
 FUNC_1(VAR_30, &VAR_22, ((void*)0));
 FUNC_1(VAR_30, &VAR_18, ((void*)0));
 FUNC_1(VAR_30, &VAR_27, ((void*)0));
 FUNC_1(VAR_30, &VAR_23, ((void*)0));
 FUNC_1(VAR_30, &VAR_19, ((void*)0));
 FUNC_1(VAR_30, &VAR_28, ((void*)0));
 FUNC_1(VAR_30, &VAR_24, ((void*)0));
 FUNC_1(VAR_30, &VAR_20, ((void*)0));
 FUNC_1(VAR_30, &VAR_16, ((void*)0));
 VAR_29->modet_mode = FUNC_3(VAR_30, ((void*)0),
   VAR_0,
   VAR_10,
   1 << VAR_11,
   VAR_9);
 if (VAR_30->error) {
  int VAR_32 = VAR_30->error;

  FUNC_4(&VAR_29->v4l2_dev, "Could not register controls\n");
  return VAR_32;
 }
 VAR_29->v4l2_dev.ctrl_handler = VAR_30;
 return 0;
}
