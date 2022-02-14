
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_subdev {TYPE_2__* ctrl_handler; int grp_id; int name; } ;
struct TYPE_6__ {int error; } ;
struct cx18_av_state {int rev; int audclk_freq; TYPE_2__ hdl; int volume; struct v4l2_subdev sd; scalar_t__ slicer_line_delay; scalar_t__ slicer_line_offset; int audmode; int aud_input; int vid_input; } ;
struct TYPE_5__ {char* name; } ;
struct cx18 {TYPE_1__ v4l2_dev; struct cx18_av_state av_state; } ;


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
 int FUNC_0 (struct cx18*) ;
 int VAR_16 ;
 int FUNC_1 (struct cx18*,int ) ;
 int FUNC_2 (int ,int,char*,char*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,int *,int ,int,int,int,int) ;
 int FUNC_6 (TYPE_1__*,struct v4l2_subdev*) ;
 int FUNC_7 (struct v4l2_subdev*,struct cx18*) ;
 int FUNC_8 (struct v4l2_subdev*,int *) ;

int FUNC_9(struct cx18 *VAR_17)
{
 struct cx18_av_state *VAR_18 = &VAR_17->av_state;
 struct v4l2_subdev *VAR_19;
 int VAR_20;

 VAR_18->rev = FUNC_1(VAR_17, VAR_3) & 0xffff;

 VAR_18->vid_input = VAR_1;
 VAR_18->aud_input = VAR_0;
 VAR_18->audclk_freq = 48000;
 VAR_18->audmode = VAR_13;
 VAR_18->slicer_line_delay = 0;
 VAR_18->slicer_line_offset = (10 + VAR_18->slicer_line_delay - 2);

 VAR_19 = &VAR_18->sd;
 FUNC_8(VAR_19, &VAR_16);
 FUNC_7(VAR_19, VAR_17);
 FUNC_2(VAR_19->name, sizeof(VAR_19->name),
   "%s %03x", VAR_17->v4l2_dev.name, (VAR_18->rev >> 4));
 VAR_19->grp_id = VAR_2;
 FUNC_4(&VAR_18->hdl, 9);
 FUNC_5(&VAR_18->hdl, &VAR_15,
   VAR_9, 0, 255, 1, 128);
 FUNC_5(&VAR_18->hdl, &VAR_15,
   VAR_10, 0, 127, 1, 64);
 FUNC_5(&VAR_18->hdl, &VAR_15,
   VAR_12, 0, 127, 1, 64);
 FUNC_5(&VAR_18->hdl, &VAR_15,
   VAR_11, -128, 127, 1, 0);

 VAR_18->volume = FUNC_5(&VAR_18->hdl,
   &VAR_14, VAR_8,
   0, 65535, 65535 / 100, 0);
 FUNC_5(&VAR_18->hdl,
   &VAR_14, VAR_6,
   0, 1, 1, 0);
 FUNC_5(&VAR_18->hdl, &VAR_14,
   VAR_4,
   0, 65535, 65535 / 100, 32768);
 FUNC_5(&VAR_18->hdl, &VAR_14,
   VAR_5,
   0, 65535, 65535 / 100, 32768);
 FUNC_5(&VAR_18->hdl, &VAR_14,
   VAR_7,
   0, 65535, 65535 / 100, 32768);
 VAR_19->ctrl_handler = &VAR_18->hdl;
 if (VAR_18->hdl.error) {
  int VAR_21 = VAR_18->hdl.error;

  FUNC_3(&VAR_18->hdl);
  return VAR_21;
 }
 VAR_20 = FUNC_6(&VAR_17->v4l2_dev, VAR_19);
 if (VAR_20)
  FUNC_3(&VAR_18->hdl);
 else
  FUNC_0(VAR_17);
 return VAR_20;
}
