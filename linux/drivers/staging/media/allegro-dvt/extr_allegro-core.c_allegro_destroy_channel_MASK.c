
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct allegro_dev {int channel_user_ids; int v4l2_dev; } ;
struct allegro_channel {int mcu_channel_id; int user_id; int mpeg_video_gop_size; int mpeg_video_cpb_size; int mpeg_video_bitrate_peak; int mpeg_video_bitrate; int mpeg_video_bitrate_mode; int mpeg_video_h264_level; int mpeg_video_h264_profile; int completion; struct allegro_dev* dev; } ;


 int FUNC_0 (struct allegro_dev*,struct allegro_channel*) ;
 scalar_t__ FUNC_1 (struct allegro_channel*) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (struct allegro_channel*) ;
 int FUNC_4 (struct allegro_channel*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int *,char*,int) ;
 unsigned long FUNC_9 (int *,int ) ;

__attribute__((used)) static void FUNC_10(struct allegro_channel *VAR_0)
{
 struct allegro_dev *VAR_1 = VAR_0->dev;
 unsigned long VAR_2;

 if (FUNC_1(VAR_0)) {
  FUNC_6(&VAR_0->completion);
  FUNC_0(VAR_1, VAR_0);
  VAR_2 = FUNC_9(&VAR_0->completion,
            FUNC_5(5000));
  if (VAR_2 == 0)
   FUNC_8(&VAR_1->v4l2_dev,
      "channel %d: timeout while destroying\n",
      VAR_0->mcu_channel_id);

  VAR_0->mcu_channel_id = -1;
 }

 FUNC_3(VAR_0);
 FUNC_4(VAR_0);

 FUNC_7(VAR_0->mpeg_video_h264_profile, 0);
 FUNC_7(VAR_0->mpeg_video_h264_level, 0);
 FUNC_7(VAR_0->mpeg_video_bitrate_mode, 0);
 FUNC_7(VAR_0->mpeg_video_bitrate, 0);
 FUNC_7(VAR_0->mpeg_video_bitrate_peak, 0);
 FUNC_7(VAR_0->mpeg_video_cpb_size, 0);
 FUNC_7(VAR_0->mpeg_video_gop_size, 0);

 if (VAR_0->user_id != -1) {
  FUNC_2(VAR_0->user_id, &VAR_1->channel_user_ids);
  VAR_0->user_id = -1;
 }
}
