
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int raw_decoder_line_size; int raw_decoder_sav_odd_field; int raw_decoder_sav_even_field; int sliced_decoder_line_size; int sliced_decoder_sav_odd_field; int sliced_decoder_sav_even_field; } ;
struct ivtv {int hw_flags; int v4l2_cap; TYPE_2__ vbi; TYPE_3__* sd_video; TYPE_1__* card; void* sd_muxer; void* sd_audio; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_4__ {int hw_all; int hw_audio_ctrl; int hw_muxer; scalar_t__ type; } ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
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
 void* FUNC_1 (struct ivtv*,int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct ivtv*) ;
 scalar_t__ FUNC_4 (struct ivtv*,unsigned int) ;
 int VAR_19 ;
 scalar_t__ FUNC_5 (int ,char*) ;
 int FUNC_6 (TYPE_3__*,int ,int ,int ,int ) ;
 int VAR_20 ;

__attribute__((used)) static void FUNC_7(struct ivtv *VAR_21)
{
 u32 VAR_22 = VAR_21->card->hw_all;
 unsigned VAR_23;


 for (VAR_23 = 0; VAR_23 < 32; VAR_23++) {
  u32 VAR_24 = FUNC_0(VAR_23);

  if (!(VAR_24 & VAR_22))
   continue;
  if (VAR_24 == VAR_6 || VAR_24 == VAR_12) {

   VAR_21->hw_flags |= VAR_24;
   continue;
  }
  if (FUNC_4(VAR_21, VAR_23) == 0)
   VAR_21->hw_flags |= VAR_24;
 }


 if ((VAR_21->hw_flags & VAR_7) == 0)
  FUNC_3(VAR_21);

 if (VAR_21->card->hw_all & VAR_5)
  VAR_21->sd_video = FUNC_1(VAR_21, VAR_5);
 else if (VAR_21->card->hw_all & VAR_11)
  VAR_21->sd_video = FUNC_1(VAR_21, VAR_11);
 else if (VAR_21->card->hw_all & VAR_8)
  VAR_21->sd_video = FUNC_1(VAR_21, VAR_8);
 else
  VAR_21->sd_video = FUNC_1(VAR_21, VAR_9);
 VAR_21->sd_audio = FUNC_1(VAR_21, VAR_21->card->hw_audio_ctrl);
 VAR_21->sd_muxer = FUNC_1(VAR_21, VAR_21->card->hw_muxer);

 VAR_22 = VAR_21->hw_flags;

 if (VAR_21->card->type == VAR_0) {


  if ((VAR_22 & (VAR_13 | VAR_14)) == 0)
   VAR_21->card = FUNC_2(VAR_2);
  else if ((VAR_22 & VAR_13) == 0)
   VAR_21->card = FUNC_2(VAR_1);
 }
 else if (VAR_21->card->type == VAR_3 ||
   VAR_21->card->type == VAR_4) {

  FUNC_6(VAR_21->sd_video, VAR_20, VAR_19,
   VAR_15, VAR_16);
 }

 if (VAR_22 & VAR_5) {
  VAR_21->vbi.raw_decoder_line_size = 1444;
  VAR_21->vbi.raw_decoder_sav_odd_field = 0x20;
  VAR_21->vbi.raw_decoder_sav_even_field = 0x60;
  VAR_21->vbi.sliced_decoder_line_size = 272;
  VAR_21->vbi.sliced_decoder_sav_odd_field = 0xB0;
  VAR_21->vbi.sliced_decoder_sav_even_field = 0xF0;
 }

 if (VAR_22 & VAR_10) {

  VAR_21->hw_flags &= ~VAR_10;

  if (FUNC_5(VAR_21->sd_video->name, "saa7114")) {
   VAR_21->hw_flags |= VAR_8;

   VAR_21->v4l2_cap &= ~(VAR_17|VAR_18);
  } else {
   VAR_21->hw_flags |= VAR_9;
  }
  VAR_21->vbi.raw_decoder_line_size = 1443;
  VAR_21->vbi.raw_decoder_sav_odd_field = 0x25;
  VAR_21->vbi.raw_decoder_sav_even_field = 0x62;
  VAR_21->vbi.sliced_decoder_line_size = 51;
  VAR_21->vbi.sliced_decoder_sav_odd_field = 0xAB;
  VAR_21->vbi.sliced_decoder_sav_even_field = 0xEC;
 }

 if (VAR_22 & VAR_11) {
  VAR_21->vbi.raw_decoder_line_size = 1443;
  VAR_21->vbi.raw_decoder_sav_odd_field = 0x25;
  VAR_21->vbi.raw_decoder_sav_even_field = 0x62;
  VAR_21->vbi.sliced_decoder_line_size = 51;
  VAR_21->vbi.sliced_decoder_sav_odd_field = 0xAB;
  VAR_21->vbi.sliced_decoder_sav_even_field = 0xEC;
 }
}
