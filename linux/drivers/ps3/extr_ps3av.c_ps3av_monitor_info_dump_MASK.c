
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int size; } ;
struct TYPE_14__ {int gamma; int white_y; int white_x; int blue_y; int blue_x; int green_y; int green_x; int red_y; int red_x; } ;
struct TYPE_13__ {int yuv422; int yuv444; int rgb; } ;
struct TYPE_12__ {int native; int res_bits; } ;
struct TYPE_11__ {int native; int res_bits; } ;
struct TYPE_10__ {int native; int res_bits; } ;
struct TYPE_9__ {int native; int res_bits; } ;
struct ps3av_info_monitor {int* monitor_id; int num_of_audio_block; int speaker_info; int supported_ai; TYPE_7__ color; TYPE_6__ cs; TYPE_5__ res_vesa; TYPE_4__ res_other; TYPE_3__ res_50; TYPE_2__ res_60; int monitor_name; int monitor_type; int avport; struct ps3av_info_audio* audio; } ;
struct ps3av_pkt_av_get_monitor_info {TYPE_1__ send_hdr; struct ps3av_info_monitor info; } ;
struct ps3av_info_audio {int sbit; int fs; int max_num_of_ch; int type; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static void FUNC_2(
 const struct ps3av_pkt_av_get_monitor_info *VAR_0)
{
 const struct ps3av_info_monitor *VAR_1 = &VAR_0->info;
 const struct ps3av_info_audio *VAR_2 = VAR_1->audio;
 char VAR_3[sizeof(VAR_1->monitor_id)*3+1];
 int VAR_4;

 FUNC_0("Monitor Info: size %u\n", VAR_0->send_hdr.size);

 FUNC_0("avport: %02x\n", VAR_1->avport);
 for (VAR_4 = 0; VAR_4 < sizeof(VAR_1->monitor_id); VAR_4++)
  FUNC_1(&VAR_3[VAR_4*3], " %02x", VAR_1->monitor_id[VAR_4]);
 FUNC_0("monitor_id: %s\n", VAR_3);
 FUNC_0("monitor_type: %02x\n", VAR_1->monitor_type);
 FUNC_0("monitor_name: %.*s\n", (int)sizeof(VAR_1->monitor_name),
   VAR_1->monitor_name);


 FUNC_0("resolution_60: bits: %08x native: %08x\n",
   VAR_1->res_60.res_bits, VAR_1->res_60.native);
 FUNC_0("resolution_50: bits: %08x native: %08x\n",
   VAR_1->res_50.res_bits, VAR_1->res_50.native);
 FUNC_0("resolution_other: bits: %08x native: %08x\n",
   VAR_1->res_other.res_bits, VAR_1->res_other.native);
 FUNC_0("resolution_vesa: bits: %08x native: %08x\n",
   VAR_1->res_vesa.res_bits, VAR_1->res_vesa.native);


 FUNC_0("color space    rgb: %02x\n", VAR_1->cs.rgb);
 FUNC_0("color space yuv444: %02x\n", VAR_1->cs.yuv444);
 FUNC_0("color space yuv422: %02x\n", VAR_1->cs.yuv422);


 FUNC_0("color info   red: X %04x Y %04x\n", VAR_1->color.red_x,
   VAR_1->color.red_y);
 FUNC_0("color info green: X %04x Y %04x\n", VAR_1->color.green_x,
   VAR_1->color.green_y);
 FUNC_0("color info  blue: X %04x Y %04x\n", VAR_1->color.blue_x,
   VAR_1->color.blue_y);
 FUNC_0("color info white: X %04x Y %04x\n", VAR_1->color.white_x,
   VAR_1->color.white_y);
 FUNC_0("color info gamma:  %08x\n", VAR_1->color.gamma);


 FUNC_0("supported_AI: %02x\n", VAR_1->supported_ai);
 FUNC_0("speaker_info: %02x\n", VAR_1->speaker_info);
 FUNC_0("num of audio: %02x\n", VAR_1->num_of_audio_block);


 for (VAR_4 = 0; VAR_4 < VAR_1->num_of_audio_block; VAR_4++) {
  FUNC_0(
   "audio[%d] type: %02x max_ch: %02x fs: %02x sbit: %02x\n",
    VAR_4, VAR_2->type, VAR_2->max_num_of_ch, VAR_2->fs,
    VAR_2->sbit);
  VAR_2++;
 }
}
