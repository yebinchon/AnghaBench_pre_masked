
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gb_connection {int dummy; } ;
struct gb_audio_set_rx_data_size_request {void* size; void* data_cport; } ;
typedef int req ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct gb_connection*,int ,struct gb_audio_set_rx_data_size_request*,int,int *,int ) ;

int FUNC_2(struct gb_connection *VAR_1,
     u16 VAR_2, u16 VAR_3)
{
 struct gb_audio_set_rx_data_size_request VAR_4;

 VAR_4.data_cport = FUNC_0(VAR_2);
 VAR_4.size = FUNC_0(VAR_3);

 return FUNC_1(VAR_1, VAR_0,
     &VAR_4, sizeof(VAR_4), ((void*)0), 0);
}
