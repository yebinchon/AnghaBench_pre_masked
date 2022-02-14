
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_connection {int hd; int bundle; } ;
struct TYPE_2__ {void* i2s_port; int type; } ;
struct audio_apbridgea_register_cport_request {int direction; void* cport; TYPE_1__ hdr; } ;
typedef int req ;
typedef int __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct audio_apbridgea_register_cport_request*,int,int ,int) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct gb_connection *VAR_2,
          __u16 VAR_3, __u16 VAR_4,
          __u8 VAR_5)
{
 struct audio_apbridgea_register_cport_request VAR_6;
 int VAR_7;

 VAR_6.hdr.type = VAR_0;
 VAR_6.hdr.i2s_port = FUNC_0(VAR_3);
 VAR_6.cport = FUNC_0(VAR_4);
 VAR_6.direction = VAR_5;

 VAR_7 = FUNC_2(VAR_2->bundle);
 if (VAR_7)
  return VAR_7;

 return FUNC_1(VAR_2->hd, &VAR_6, sizeof(VAR_6),
       VAR_1, 1);
}
