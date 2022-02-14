
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
typedef int u16 ;
struct gb_connection {int dummy; } ;
struct gb_audio_set_pcm_request {void* sig_bits; void* channels; void* rate; void* format; int data_cport; } ;
typedef int req ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct gb_connection*,int ,struct gb_audio_set_pcm_request*,int,int *,int ) ;

int FUNC_3(struct gb_connection *VAR_1, u16 VAR_2,
   u32 VAR_3, u32 VAR_4, u8 VAR_5,
   u8 VAR_6)
{
 struct gb_audio_set_pcm_request VAR_7;

 VAR_7.data_cport = FUNC_0(VAR_2);
 VAR_7.format = FUNC_1(VAR_3);
 VAR_7.rate = FUNC_1(VAR_4);
 VAR_7.channels = VAR_5;
 VAR_7.sig_bits = VAR_6;

 return FUNC_2(VAR_1, VAR_0,
     &VAR_7, sizeof(VAR_7), ((void*)0), 0);
}
