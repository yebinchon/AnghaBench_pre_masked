
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_connection {int hd; } ;
struct TYPE_2__ {int i2s_port; int type; } ;
struct audio_apbridgea_set_config_request {void* mclk_freq; void* rate; void* format; TYPE_1__ hdr; } ;
typedef int req ;
typedef int __u32 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct audio_apbridgea_set_config_request*,int,int ,int) ;

int FUNC_3(struct gb_connection *VAR_2,
      __u16 VAR_3, __u32 VAR_4, __u32 VAR_5,
      __u32 VAR_6)
{
 struct audio_apbridgea_set_config_request VAR_7;

 VAR_7.hdr.type = VAR_0;
 VAR_7.hdr.i2s_port = FUNC_0(VAR_3);
 VAR_7.format = FUNC_1(VAR_4);
 VAR_7.rate = FUNC_1(VAR_5);
 VAR_7.mclk_freq = FUNC_1(VAR_6);

 return FUNC_2(VAR_2->hd, &VAR_7, sizeof(VAR_7),
       VAR_1, 1);
}
