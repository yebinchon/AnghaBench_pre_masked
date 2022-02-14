
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct video_device {int dummy; } ;
struct v4l2_ctrl_handler {int dummy; } ;
struct file {TYPE_1__* private_data; } ;
struct allegro_dev {int m2m_dev; int channels; } ;
struct TYPE_3__ {int m2m_ctx; struct v4l2_ctrl_handler* ctrl_handler; } ;
struct allegro_channel {int bitrate; int bitrate_peak; int cpb_size; int gop_size; int mcu_channel_id; int user_id; TYPE_1__ fh; int list; int buffers_intermediate; int buffers_reference; void* mpeg_video_gop_size; void* mpeg_video_cpb_size; void* mpeg_video_bitrate_peak; void* mpeg_video_bitrate; int bitrate_mode; void* mpeg_video_bitrate_mode; void* mpeg_video_h264_level; void* mpeg_video_h264_profile; struct v4l2_ctrl_handler ctrl_handler; struct allegro_dev* dev; int completion; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
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
 int FUNC_1 (struct allegro_channel*) ;
 int FUNC_2 (int *) ;
 struct allegro_channel* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct v4l2_ctrl_handler*,int ) ;
 void* FUNC_8 (struct v4l2_ctrl_handler*,int *,int ,int,int,int,int) ;
 void* FUNC_9 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,struct video_device*) ;
 int FUNC_12 (int ,struct allegro_channel*,int ) ;
 struct video_device* FUNC_13 (struct file*) ;
 struct allegro_dev* FUNC_14 (struct video_device*) ;

__attribute__((used)) static int FUNC_15(struct file *VAR_17)
{
 struct video_device *VAR_18 = FUNC_13(VAR_17);
 struct allegro_dev *VAR_19 = FUNC_14(VAR_18);
 struct allegro_channel *VAR_20 = ((void*)0);
 struct v4l2_ctrl_handler *VAR_21;
 u64 VAR_22;

 VAR_20 = FUNC_3(sizeof(*VAR_20), VAR_2);
 if (!VAR_20)
  return -VAR_1;

 FUNC_11(&VAR_20->fh, VAR_18);
 VAR_17->private_data = &VAR_20->fh;
 FUNC_10(&VAR_20->fh);

 FUNC_2(&VAR_20->completion);

 VAR_20->dev = VAR_19;

 FUNC_1(VAR_20);

 VAR_21 = &VAR_20->ctrl_handler;
 FUNC_7(VAR_21, 0);
 VAR_20->mpeg_video_h264_profile = FUNC_9(VAR_21,
   &VAR_15,
   VAR_10,
   VAR_14, 0x0,
   VAR_14);
 VAR_22 = 1 << VAR_12;
 VAR_20->mpeg_video_h264_level = FUNC_9(VAR_21,
   &VAR_15,
   VAR_9,
   VAR_13, VAR_22,
   VAR_13);
 VAR_20->mpeg_video_bitrate_mode = FUNC_9(VAR_21,
   &VAR_15,
   VAR_5,
   VAR_11, 0,
   VAR_20->bitrate_mode);
 VAR_20->mpeg_video_bitrate = FUNC_8(VAR_21,
   &VAR_15,
   VAR_4,
   0, FUNC_5(VAR_13),
   1, VAR_20->bitrate);
 VAR_20->mpeg_video_bitrate_peak = FUNC_8(VAR_21,
   &VAR_15,
   VAR_6,
   0, FUNC_5(VAR_13),
   1, VAR_20->bitrate_peak);
 VAR_20->mpeg_video_cpb_size = FUNC_8(VAR_21,
   &VAR_15,
   VAR_8,
   0, FUNC_6(VAR_13),
   1, VAR_20->cpb_size);
 VAR_20->mpeg_video_gop_size = FUNC_8(VAR_21,
   &VAR_15,
   VAR_7,
   0, VAR_0,
   1, VAR_20->gop_size);
 FUNC_8(VAR_21,
   &VAR_15,
   VAR_3,
   1, 32,
   1, 1);
 VAR_20->fh.ctrl_handler = VAR_21;

 VAR_20->mcu_channel_id = -1;
 VAR_20->user_id = -1;

 FUNC_0(&VAR_20->buffers_reference);
 FUNC_0(&VAR_20->buffers_intermediate);

 FUNC_4(&VAR_20->list, &VAR_19->channels);

 VAR_20->fh.m2m_ctx = FUNC_12(VAR_19->m2m_dev, VAR_20,
      VAR_16);

 return 0;
}
