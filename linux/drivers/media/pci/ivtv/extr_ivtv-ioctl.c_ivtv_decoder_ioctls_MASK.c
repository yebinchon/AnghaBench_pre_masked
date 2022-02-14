
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned char vsync_field; } ;
struct video_event {int flags; int type; TYPE_3__ u; int cmd; } ;
struct v4l2_decoder_cmd {int flags; int type; TYPE_3__ u; int cmd; } ;
struct ivtv_stream {int type; int dma_pts; } ;
struct ivtv_open_id {size_t type; int yuv_frames; struct ivtv* itv; } ;
struct ivtv_dma_frame {int * y_source; int type; } ;
struct TYPE_4__ {int lace_mode; } ;
struct ivtv {int v4l2_cap; unsigned long speed_mute_audio; int ctrl_audio_multilingual_playback; int ctrl_audio_playback; int serialize_lock; int event_waitq; int i_flags; TYPE_1__ yuv_info; int output_mode; struct ivtv_stream* streams; } ;
struct file {int f_flags; int private_data; } ;
struct TYPE_5__ {unsigned char vsync_field; } ;
struct compat_video_event {TYPE_2__ u; } ;
typedef int s64 ;
typedef int dc ;





 unsigned long VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
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







 unsigned long VAR_25 ;


 unsigned char VAR_26 ;
 unsigned char VAR_27 ;
 unsigned char VAR_28 ;
 int VAR_29 ;
 struct ivtv_open_id* FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct ivtv*,int *,int *) ;
 int FUNC_6 (struct ivtv*,int) ;
 int FUNC_7 (struct ivtv_stream*) ;
 int FUNC_8 (struct ivtv*,int ) ;
 int FUNC_9 (struct ivtv_open_id*,size_t) ;
 int FUNC_10 (struct ivtv*,struct ivtv_open_id*,struct video_event*,int) ;
 int FUNC_11 (struct ivtv*,struct ivtv_dma_frame*) ;
 int FUNC_12 (struct video_event*,int ,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int *,int ) ;
 int FUNC_16 () ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,int *) ;
 int FUNC_20 (int ,int *) ;
 int FUNC_21 (int ,unsigned long) ;
 int VAR_30 ;
 int FUNC_22 (char*) ;

__attribute__((used)) static int FUNC_23(struct file *VAR_31, unsigned int VAR_32, void *VAR_33)
{
 struct ivtv_open_id *VAR_34 = FUNC_3(VAR_31->private_data);
 struct ivtv *VAR_35 = VAR_34->itv;
 struct ivtv_stream *VAR_36 = &VAR_35->streams[VAR_34->type];





 switch (VAR_32) {
 case 140: {
  struct ivtv_dma_frame *VAR_37 = VAR_33;

  FUNC_2("IVTV_IOC_DMA_FRAME\n");
  if (!(VAR_35->v4l2_cap & VAR_16))
   return -VAR_4;
  if (VAR_37->type != VAR_15)
   return -VAR_4;
  if (VAR_35->output_mode == VAR_12 && VAR_37->y_source == ((void*)0))
   return 0;
  if (FUNC_9(VAR_34, VAR_34->type)) {
   return -VAR_2;
  }
  if (FUNC_8(VAR_35, VAR_12) != VAR_12) {
   FUNC_7(VAR_36);
   return -VAR_2;
  }

  VAR_34->yuv_frames = 1;
  if (VAR_37->y_source == ((void*)0))
   return 0;
  return FUNC_11(VAR_35, VAR_37);
 }

 case 139:
  FUNC_2("IVTV_IOC_PASSTHROUGH_MODE\n");
  if (!(VAR_35->v4l2_cap & VAR_16))
   return -VAR_4;
  return FUNC_6(VAR_35, *(int *)VAR_33 != 0);
 default:
  return -VAR_4;
 }
 return 0;
}
