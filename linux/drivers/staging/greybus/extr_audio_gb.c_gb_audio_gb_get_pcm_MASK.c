
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct gb_connection {int dummy; } ;
struct gb_audio_get_pcm_response {int sig_bits; int channels; int rate; int format; } ;
struct gb_audio_get_pcm_request {int data_cport; } ;
typedef int resp ;
typedef int req ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct gb_connection*,int ,struct gb_audio_get_pcm_request*,int,struct gb_audio_get_pcm_response*,int) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct gb_connection *VAR_1, u16 VAR_2,
   u32 *VAR_3, u32 *VAR_4, u8 *VAR_5,
   u8 *VAR_6)
{
 struct gb_audio_get_pcm_request VAR_7;
 struct gb_audio_get_pcm_response VAR_8;
 int VAR_9;

 VAR_7.data_cport = FUNC_0(VAR_2);

 VAR_9 = FUNC_1(VAR_1, VAR_0,
    &VAR_7, sizeof(VAR_7), &VAR_8, sizeof(VAR_8));
 if (VAR_9)
  return VAR_9;

 *VAR_3 = FUNC_2(VAR_8.format);
 *VAR_4 = FUNC_2(VAR_8.rate);
 *VAR_5 = VAR_8.channels;
 *VAR_6 = VAR_8.sig_bits;

 return 0;
}
