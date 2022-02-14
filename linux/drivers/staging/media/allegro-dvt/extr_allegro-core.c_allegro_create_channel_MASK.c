
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct allegro_dev {int v4l2_dev; int channel_user_ids; } ;
struct allegro_channel {scalar_t__ user_id; int level; int error; int mcu_channel_id; int completion; int mpeg_video_gop_size; int mpeg_video_cpb_size; int mpeg_video_bitrate_peak; int mpeg_video_bitrate; int mpeg_video_bitrate_mode; int mpeg_video_h264_level; int mpeg_video_h264_profile; int height; int width; int codec; struct allegro_dev* dev; } ;
typedef enum v4l2_mpeg_video_h264_level { ____Placeholder_v4l2_mpeg_video_h264_level } v4l2_mpeg_video_h264_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct allegro_channel*) ;
 int FUNC_1 (struct allegro_dev*,struct allegro_channel*) ;
 scalar_t__ FUNC_2 (struct allegro_dev*) ;
 scalar_t__ FUNC_3 (struct allegro_channel*) ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (scalar_t__,int *) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int,int ,int *,char*,scalar_t__,...) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *,char*,...) ;
 unsigned long FUNC_13 (int *,int ) ;

__attribute__((used)) static int FUNC_14(struct allegro_channel *VAR_4)
{
 struct allegro_dev *VAR_5 = VAR_4->dev;
 unsigned long VAR_6;
 enum v4l2_mpeg_video_h264_level VAR_7;

 if (FUNC_3(VAR_4)) {
  FUNC_12(&VAR_5->v4l2_dev,
     "channel already exists\n");
  return 0;
 }

 VAR_4->user_id = FUNC_2(VAR_5);
 if (VAR_4->user_id < 0) {
  FUNC_11(&VAR_5->v4l2_dev,
    "no free channels available\n");
  return -VAR_0;
 }
 FUNC_7(VAR_4->user_id, &VAR_5->channel_user_ids);

 FUNC_10(1, VAR_3, &VAR_5->v4l2_dev,
   "user %d: creating channel (%4.4s, %dx%d@%d)\n",
   VAR_4->user_id,
   (char *)&VAR_4->codec, VAR_4->width, VAR_4->height, 25);

 VAR_7 = FUNC_6(VAR_4->width, VAR_4->height);
 if (VAR_4->level < VAR_7) {
  FUNC_12(&VAR_5->v4l2_dev,
     "user %d: selected Level %s too low: increasing to Level %s\n",
     VAR_4->user_id,
     FUNC_8(VAR_2)[VAR_4->level],
     FUNC_8(VAR_2)[VAR_7]);
  VAR_4->level = VAR_7;
 }

 FUNC_9(VAR_4->mpeg_video_h264_profile, 1);
 FUNC_9(VAR_4->mpeg_video_h264_level, 1);
 FUNC_9(VAR_4->mpeg_video_bitrate_mode, 1);
 FUNC_9(VAR_4->mpeg_video_bitrate, 1);
 FUNC_9(VAR_4->mpeg_video_bitrate_peak, 1);
 FUNC_9(VAR_4->mpeg_video_cpb_size, 1);
 FUNC_9(VAR_4->mpeg_video_gop_size, 1);

 FUNC_5(&VAR_4->completion);
 FUNC_1(VAR_5, VAR_4);
 VAR_6 = FUNC_13(&VAR_4->completion,
           FUNC_4(5000));
 if (VAR_6 == 0)
  VAR_4->error = -VAR_1;
 if (VAR_4->error)
  goto err;

 FUNC_10(1, VAR_3, &VAR_5->v4l2_dev,
   "channel %d: accepting buffers\n",
   VAR_4->mcu_channel_id);

 return 0;

err:
 FUNC_0(VAR_4);

 return VAR_4->error;
}
