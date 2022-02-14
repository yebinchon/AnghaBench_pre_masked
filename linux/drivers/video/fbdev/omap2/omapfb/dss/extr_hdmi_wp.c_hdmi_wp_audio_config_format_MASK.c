
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hdmi_wp_data {int base; } ;
struct hdmi_audio_format {int sample_size; int samples_per_word; int sample_order; int justification; int type; int en_sig_blk_strt_end; int active_chnnls_msk; int stereo_channels; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 () ;

void FUNC_5(struct hdmi_wp_data *VAR_4,
  struct hdmi_audio_format *VAR_5)
{
 u32 VAR_6;

 FUNC_0("Enter hdmi_wp_audio_config_format\n");

 VAR_6 = FUNC_2(VAR_4->base, VAR_0);
 if (FUNC_4() == VAR_2 ||
     FUNC_4() == VAR_3 ||
     FUNC_4() == VAR_1) {
  VAR_6 = FUNC_1(VAR_6, VAR_5->stereo_channels, 26, 24);
  VAR_6 = FUNC_1(VAR_6, VAR_5->active_chnnls_msk, 23, 16);
 }
 VAR_6 = FUNC_1(VAR_6, VAR_5->en_sig_blk_strt_end, 5, 5);
 VAR_6 = FUNC_1(VAR_6, VAR_5->type, 4, 4);
 VAR_6 = FUNC_1(VAR_6, VAR_5->justification, 3, 3);
 VAR_6 = FUNC_1(VAR_6, VAR_5->sample_order, 2, 2);
 VAR_6 = FUNC_1(VAR_6, VAR_5->samples_per_word, 1, 1);
 VAR_6 = FUNC_1(VAR_6, VAR_5->sample_size, 0, 0);
 FUNC_3(VAR_4->base, VAR_0, VAR_6);
}
