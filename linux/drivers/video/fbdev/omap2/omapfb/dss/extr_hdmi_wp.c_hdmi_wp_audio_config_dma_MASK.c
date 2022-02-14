
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hdmi_wp_data {int base; } ;
struct hdmi_audio_dma {int fifo_threshold; int mode; int block_size; int transfer_size; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

void FUNC_4(struct hdmi_wp_data *VAR_2,
  struct hdmi_audio_dma *VAR_3)
{
 u32 VAR_4;

 FUNC_0("Enter hdmi_wp_audio_config_dma\n");

 VAR_4 = FUNC_2(VAR_2->base, VAR_0);
 VAR_4 = FUNC_1(VAR_4, VAR_3->transfer_size, 15, 8);
 VAR_4 = FUNC_1(VAR_4, VAR_3->block_size, 7, 0);
 FUNC_3(VAR_2->base, VAR_0, VAR_4);

 VAR_4 = FUNC_2(VAR_2->base, VAR_1);
 VAR_4 = FUNC_1(VAR_4, VAR_3->mode, 9, 9);
 VAR_4 = FUNC_1(VAR_4, VAR_3->fifo_threshold, 8, 0);
 FUNC_3(VAR_2->base, VAR_1, VAR_4);
}
