
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int * v4l2_dev; } ;
struct ivtv_stream {int type; TYPE_1__ vdev; struct ivtv* itv; } ;
struct TYPE_6__ {int width; int height; int audio_properties; } ;
struct TYPE_5__ {int dec_start; } ;
struct ivtv {TYPE_3__ cxhdl; int is_out_50hz; int output_mode; TYPE_2__ vbi; int audio_stereo_mode; int audio_bilingual_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;


 int VAR_7 ;
 int FUNC_2 (struct ivtv*,char*) ;
 int FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (struct ivtv*,int ,int,int,...) ;
 int FUNC_5 (struct ivtv*,int *,int ,int,int) ;

__attribute__((used)) static int FUNC_6(struct ivtv_stream *VAR_8)
{
 u32 VAR_9[VAR_5];
 struct ivtv *VAR_10 = VAR_8->itv;
 int VAR_11;
 u16 VAR_12;
 u16 VAR_13;

 if (VAR_8->vdev.v4l2_dev == ((void*)0))
  return -VAR_6;

 FUNC_0("Setting some initial decoder settings\n");

 VAR_12 = VAR_10->cxhdl.width;
 VAR_13 = VAR_10->cxhdl.height;


 FUNC_4(VAR_10, VAR_1, 2, VAR_10->audio_bilingual_mode, VAR_10->audio_stereo_mode);


 FUNC_4(VAR_10, VAR_3, 1, 0);


 FUNC_4(VAR_10, VAR_4, 1, 1);


 FUNC_5(VAR_10, VAR_9, VAR_0, 1, 1);
 VAR_10->vbi.dec_start = VAR_9[0];

 FUNC_0("Decoder VBI RE-Insert start 0x%08x size 0x%08x\n",
  VAR_10->vbi.dec_start, VAR_9[1]);





 switch (VAR_8->type) {
 case 128:
  if (VAR_10->output_mode == VAR_7) {
   VAR_11 = 1;
  } else {

   VAR_11 = 2;
   VAR_12 = 720;
   VAR_13 = VAR_10->is_out_50hz ? 576 : 480;
  }
  FUNC_0("Setup DEC YUV Stream data[0] = %d\n", VAR_11);
  break;
 case 129:
 default:
  VAR_11 = 0;
  break;
 }
 if (FUNC_4(VAR_10, VAR_2, 4, VAR_11,
   VAR_12, VAR_13, VAR_10->cxhdl.audio_properties)) {
  FUNC_1("Couldn't initialize decoder source\n");
 }


 FUNC_3(10, 0);


 return FUNC_2(VAR_10, "ivtv_setup_v4l2_decode_stream");
}
