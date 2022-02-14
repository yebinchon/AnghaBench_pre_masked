
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct ps3av_pkt_audio_mode {int mask; int audio_num_of_ch; int audio_fs; int audio_word_bits; int audio_format; int audio_source; int* audio_enable; int* audio_cs_info; scalar_t__ audio_downmix_level; int audio_downmix; void* audio_layout; int * audio_map; int * audio_swap; scalar_t__ avport; int send_hdr; } ;


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


 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;



 int VAR_18 ;
 int VAR_19 ;
 void* VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (struct ps3av_pkt_audio_mode*,int ,int) ;
 int* VAR_25 ;
 int FUNC_1 (int ,int,int *) ;

void FUNC_2(struct ps3av_pkt_audio_mode *VAR_26, u32 VAR_27,
         u32 VAR_28, u32 VAR_29, u32 VAR_30, u32 VAR_31,
         u32 VAR_32)
{
 int VAR_33;
 int VAR_34;

 if (!(VAR_28 | VAR_29 | VAR_31 | VAR_30 | VAR_32)) {
  VAR_28 = 130;
  VAR_29 = VAR_10;
  VAR_30 = VAR_20;
  VAR_31 = VAR_9;
  VAR_32 = VAR_18;
 }


 FUNC_0(VAR_26, 0, sizeof(*VAR_26));
 FUNC_1(VAR_6, sizeof(*VAR_26), &VAR_26->send_hdr);

 VAR_26->avport = (u8) VAR_27;
 VAR_26->mask = 0x0FFF;
 VAR_26->audio_num_of_ch = VAR_28;
 VAR_26->audio_fs = VAR_29;
 VAR_26->audio_word_bits = VAR_30;
 VAR_26->audio_format = VAR_31;
 VAR_26->audio_source = VAR_32;

 switch (VAR_28) {
 case 128:
  VAR_26->audio_enable[3] = 1;

 case 129:
  VAR_26->audio_enable[2] = 1;
  VAR_26->audio_enable[1] = 1;

 case 130:
 default:
  VAR_26->audio_enable[0] = 1;
 }


 for (VAR_34 = 0; VAR_34 < 4; VAR_34++)
  VAR_26->audio_swap[VAR_34] = VAR_19;


 VAR_26->audio_map[0] = VAR_14;
 VAR_26->audio_map[1] = VAR_15;
 VAR_26->audio_map[2] = VAR_16;
 VAR_26->audio_map[3] = VAR_17;


 if (VAR_27 == VAR_21 ||
     VAR_27 == VAR_22) {
  switch (VAR_28) {
  case 128:
   VAR_26->audio_layout = VAR_13;
   break;
  case 129:
   VAR_26->audio_layout = VAR_12;
   break;
  case 130:
  default:
   VAR_26->audio_layout = VAR_11;
   break;
  }
 } else {
  VAR_26->audio_layout = VAR_11;
 }


 VAR_26->audio_downmix = VAR_7;

 VAR_26->audio_downmix_level = 0;


 for (VAR_34 = 0; VAR_34 < 8; VAR_34++)
  VAR_26->audio_cs_info[VAR_34] = VAR_25[VAR_34];

 switch (VAR_29) {
 case 133:
  VAR_26->audio_cs_info[3] &= ~VAR_5;
  VAR_26->audio_cs_info[3] |= VAR_2;
  break;
 case 132:
  VAR_26->audio_cs_info[3] &= ~VAR_5;
  VAR_26->audio_cs_info[3] |= VAR_3;
  break;
 case 131:
  VAR_26->audio_cs_info[3] &= ~VAR_5;
  VAR_26->audio_cs_info[3] |= VAR_4;
  break;
 case 135:
  VAR_26->audio_cs_info[3] &= ~VAR_5;
  VAR_26->audio_cs_info[3] |= VAR_0;
  break;
 case 134:
  VAR_26->audio_cs_info[3] &= ~VAR_5;
  VAR_26->audio_cs_info[3] |= VAR_1;
  break;
 default:
  break;
 }


 VAR_33 = VAR_26->audio_cs_info[0] & 0x02;


 if (VAR_33 &&
     (VAR_27 == VAR_23 ||
      VAR_27 == VAR_24 ||
      VAR_27 == VAR_21 ||
      VAR_27 == VAR_22)) {
  VAR_26->audio_word_bits = VAR_20;
  VAR_26->audio_format = VAR_8;
 }
}
