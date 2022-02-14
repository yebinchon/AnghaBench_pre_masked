
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_output {int name; } ;
struct v4l2_input {int name; } ;
struct v4l2_audioout {int dummy; } ;
struct v4l2_audio {int name; } ;
struct tveeprom {int dummy; } ;
struct TYPE_9__ {int buffers; } ;
struct TYPE_8__ {int * v4l2_dev; } ;
struct ivtv_stream {int buffers; int buf_size; TYPE_4__ q_free; int s_flags; int name; TYPE_3__ vdev; } ;
struct TYPE_7__ {int name; } ;
struct TYPE_6__ {int hdl; } ;
struct ivtv {int v4l2_cap; long long card_name; int hw_flags; scalar_t__ dualwatch_stereo_mode; int output_mode; scalar_t__ vbi_data_inserted; scalar_t__ mpg_data_received; struct ivtv_stream* streams; int i_flags; TYPE_2__ v4l2_dev; TYPE_1__ cxhdl; int active_output; int audio_input; int active_input; } ;
struct file {int dummy; } ;
struct TYPE_10__ {struct ivtv* itv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int VAR_4 ;
 long long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 TYPE_5__* FUNC_1 (void*) ;
 int FUNC_2 (struct ivtv*,int ,int ) ;
 int FUNC_3 (struct ivtv*,int ,struct v4l2_audio*) ;
 int FUNC_4 (struct ivtv*,int ,struct v4l2_audioout*) ;
 int FUNC_5 (struct ivtv*,int ,struct v4l2_input*) ;
 int FUNC_6 (struct ivtv*,int ,struct v4l2_output*) ;
 int FUNC_7 (struct ivtv*,struct tveeprom*) ;
 int FUNC_8 (struct ivtv*,int*,int ,int ) ;
 int VAR_11 ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int FUNC_11 (int *,int ) ;

__attribute__((used)) static int FUNC_12(struct file *VAR_12, void *VAR_13)
{
 struct ivtv *VAR_14 = FUNC_1(VAR_13)->itv;
 u32 VAR_15[VAR_0];

 int VAR_16 = VAR_14->v4l2_cap & VAR_8;
 struct v4l2_input VAR_17;
 struct v4l2_audio VAR_18;
 int VAR_19;

 FUNC_0("Version: %s Card: %s\n", VAR_5, VAR_14->card_name);
 if (VAR_14->hw_flags & VAR_3) {
  struct tveeprom VAR_20;

  FUNC_7(VAR_14, &VAR_20);
 }
 FUNC_2(VAR_14, VAR_10, VAR_11);
 FUNC_5(VAR_14, VAR_14->active_input, &VAR_17);
 FUNC_3(VAR_14, VAR_14->audio_input, &VAR_18);
 FUNC_0("Video Input:  %s\n", VAR_17.name);
 FUNC_0("Audio Input:  %s%s\n", VAR_18.name,
  VAR_14->dualwatch_stereo_mode == VAR_9 ?
   " (Bilingual)" : "");
 if (VAR_16) {
  struct v4l2_output VAR_21;
  struct v4l2_audioout VAR_22;
  int VAR_23 = VAR_14->output_mode;
  static const char * const VAR_24[5] = {
   "None",
   "MPEG Streaming",
   "YUV Streaming",
   "YUV Frames",
   "Passthrough",
  };
  static const char * const VAR_25[4] = {
   "None",
   "Global",
   "Local",
   "Global and Local"
  };
  static const char * const VAR_26[16] = {
   "ARGB Indexed",
   "RGB 5:6:5",
   "ARGB 1:5:5:5",
   "ARGB 1:4:4:4",
   "ARGB 8:8:8:8",
   "5",
   "6",
   "7",
   "AYUV Indexed",
   "YUV 5:6:5",
   "AYUV 1:5:5:5",
   "AYUV 1:4:4:4",
   "AYUV 8:8:8:8",
   "13",
   "14",
   "15",
  };

  FUNC_6(VAR_14, VAR_14->active_output, &VAR_21);
  FUNC_4(VAR_14, 0, &VAR_22);
  FUNC_0("Video Output: %s\n", VAR_21.name);
  if (VAR_23 < 0 || VAR_23 > VAR_7)
   VAR_23 = VAR_6;
  FUNC_0("Output Mode:  %s\n", VAR_24[VAR_23]);
  FUNC_8(VAR_14, VAR_15, VAR_1, 0);
  VAR_15[0] |= (FUNC_9(0x2a00) >> 7) & 0x40;
  FUNC_0("Overlay:      %s, Alpha: %s, Pixel Format: %s\n",
   VAR_15[0] & 1 ? "On" : "Off",
   VAR_25[(VAR_15[0] >> 1) & 0x3],
   VAR_26[(VAR_15[0] >> 3) & 0xf]);
 }
 FUNC_0("Tuner:  %s\n",
  FUNC_10(VAR_2, &VAR_14->i_flags) ? "Radio" : "TV");
 FUNC_11(&VAR_14->cxhdl.hdl, VAR_14->v4l2_dev.name);
 FUNC_0("Status flags:    0x%08lx\n", VAR_14->i_flags);
 for (VAR_19 = 0; VAR_19 < VAR_4; VAR_19++) {
  struct ivtv_stream *VAR_27 = &VAR_14->streams[VAR_19];

  if (VAR_27->vdev.v4l2_dev == ((void*)0) || VAR_27->buffers == 0)
   continue;
  FUNC_0("Stream %s: status 0x%04lx, %d%% of %d KiB (%d buffers) in use\n", VAR_27->name, VAR_27->s_flags,
    (VAR_27->buffers - VAR_27->q_free.buffers) * 100 / VAR_27->buffers,
    (VAR_27->buffers * VAR_27->buf_size) / 1024, VAR_27->buffers);
 }

 FUNC_0("Read MPG/VBI: %lld/%lld bytes\n",
   (long long)VAR_14->mpg_data_received,
   (long long)VAR_14->vbi_data_inserted);
 return 0;
}
