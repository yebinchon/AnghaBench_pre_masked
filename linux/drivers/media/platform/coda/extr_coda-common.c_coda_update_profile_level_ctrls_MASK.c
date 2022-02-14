
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct v4l2_ctrl {int dummy; } ;
struct coda_ctx {TYPE_2__* dev; struct v4l2_ctrl* mpeg4_level_ctrl; struct v4l2_ctrl* mpeg4_profile_ctrl; struct v4l2_ctrl* mpeg2_level_ctrl; struct v4l2_ctrl* mpeg2_profile_ctrl; struct v4l2_ctrl* h264_level_ctrl; struct v4l2_ctrl* h264_profile_ctrl; TYPE_1__* codec; } ;
struct TYPE_4__ {int v4l2_dev; } ;
struct TYPE_3__ {int src_fourcc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (int,struct coda_ctx*,char*,char const*,char const* const) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct v4l2_ctrl*,int) ;
 char** FUNC_8 (int ) ;
 int FUNC_9 (int *,char*,char const*,int ) ;

void FUNC_10(struct coda_ctx *VAR_6, u8 VAR_7,
         u8 VAR_8)
{
 const char * const *VAR_9;
 const char * const *VAR_10;
 struct v4l2_ctrl *VAR_11;
 struct v4l2_ctrl *VAR_12;
 const char *VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 int VAR_16;
 int VAR_17;

 switch (VAR_6->codec->src_fourcc) {
 case 130:
  VAR_13 = "H264";
  VAR_14 = VAR_1;
  VAR_15 = VAR_0;
  VAR_11 = VAR_6->h264_profile_ctrl;
  VAR_12 = VAR_6->h264_level_ctrl;
  VAR_16 = FUNC_2(VAR_7);
  VAR_17 = FUNC_1(VAR_8);
  break;
 case 129:
  VAR_13 = "MPEG-2";
  VAR_14 = VAR_3;
  VAR_15 = VAR_2;
  VAR_11 = VAR_6->mpeg2_profile_ctrl;
  VAR_12 = VAR_6->mpeg2_level_ctrl;
  VAR_16 = FUNC_4(VAR_7);
  VAR_17 = FUNC_3(VAR_8);
  break;
 case 128:
  VAR_13 = "MPEG-4";
  VAR_14 = VAR_5;
  VAR_15 = VAR_4;
  VAR_11 = VAR_6->mpeg4_profile_ctrl;
  VAR_12 = VAR_6->mpeg4_level_ctrl;
  VAR_16 = FUNC_6(VAR_7);
  VAR_17 = FUNC_5(VAR_8);
  break;
 default:
  return;
 }

 VAR_9 = FUNC_8(VAR_14);
 VAR_10 = FUNC_8(VAR_15);

 if (VAR_16 < 0) {
  FUNC_9(&VAR_6->dev->v4l2_dev, "Invalid %s profile: %u\n",
     VAR_13, VAR_7);
 } else {
  FUNC_0(1, VAR_6, "Parsed %s profile: %s\n", VAR_13,
    VAR_9[VAR_16]);
  FUNC_7(VAR_11, VAR_16);
 }

 if (VAR_17 < 0) {
  FUNC_9(&VAR_6->dev->v4l2_dev, "Invalid %s level: %u\n",
     VAR_13, VAR_8);
 } else {
  FUNC_0(1, VAR_6, "Parsed %s level: %s\n", VAR_13,
    VAR_10[VAR_17]);
  FUNC_7(VAR_12, VAR_17);
 }
}
