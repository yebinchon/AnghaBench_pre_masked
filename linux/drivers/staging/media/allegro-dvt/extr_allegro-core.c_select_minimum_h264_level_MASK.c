
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum v4l2_mpeg_video_h264_level { ____Placeholder_v4l2_mpeg_video_h264_level } v4l2_mpeg_video_h264_level ;


 unsigned int FUNC_0 (unsigned int,int ) ;
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

__attribute__((used)) static enum v4l2_mpeg_video_h264_level
FUNC_1(unsigned int VAR_11, unsigned int VAR_12)
{
 unsigned int VAR_13 = FUNC_0(VAR_11, VAR_0);
 unsigned int VAR_14 = FUNC_0(VAR_12, VAR_0);
 unsigned int VAR_15 = VAR_13 * VAR_14;
 enum v4l2_mpeg_video_h264_level VAR_16 = VAR_7;
 if (VAR_15 <= 99)
  VAR_16 = VAR_1;
 else if (VAR_15 <= 396)
  VAR_16 = VAR_2;
 else if (VAR_15 <= 792)
  VAR_16 = VAR_3;
 else if (VAR_15 <= 1620)
  VAR_16 = VAR_4;
 else if (VAR_15 <= 3600)
  VAR_16 = VAR_5;
 else if (VAR_15 <= 5120)
  VAR_16 = VAR_6;
 else if (VAR_15 <= 8192)
  VAR_16 = VAR_7;
 else if (VAR_15 <= 8704)
  VAR_16 = VAR_8;
 else if (VAR_15 <= 22080)
  VAR_16 = VAR_9;
 else
  VAR_16 = VAR_10;

 return VAR_16;
}
