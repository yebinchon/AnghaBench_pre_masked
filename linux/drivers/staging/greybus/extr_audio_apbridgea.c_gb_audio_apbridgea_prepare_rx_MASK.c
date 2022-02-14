
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_connection {int hd; } ;
struct TYPE_2__ {int i2s_port; int type; } ;
struct audio_apbridgea_prepare_rx_request {TYPE_1__ hdr; } ;
typedef int req ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct audio_apbridgea_prepare_rx_request*,int,int ,int) ;

int FUNC_2(struct gb_connection *VAR_2,
      __u16 VAR_3)
{
 struct audio_apbridgea_prepare_rx_request VAR_4;

 VAR_4.hdr.type = VAR_0;
 VAR_4.hdr.i2s_port = FUNC_0(VAR_3);

 return FUNC_1(VAR_2->hd, &VAR_4, sizeof(VAR_4),
       VAR_1, 1);
}
