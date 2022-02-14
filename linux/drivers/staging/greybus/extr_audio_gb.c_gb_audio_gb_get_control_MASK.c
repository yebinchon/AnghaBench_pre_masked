
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct gb_connection {int dummy; } ;
struct gb_audio_get_control_response {int value; } ;
struct gb_audio_get_control_request {void* index; void* control_id; } ;
struct gb_audio_ctl_elem_value {int dummy; } ;
typedef int resp ;
typedef int req ;


 int VAR_0 ;
 int FUNC_0 (struct gb_connection*,int ,struct gb_audio_get_control_request*,int,struct gb_audio_get_control_response*,int) ;
 int FUNC_1 (struct gb_audio_ctl_elem_value*,int *,int) ;

int FUNC_2(struct gb_connection *VAR_1,
       u8 VAR_2, u8 VAR_3,
       struct gb_audio_ctl_elem_value *VAR_4)
{
 struct gb_audio_get_control_request VAR_5;
 struct gb_audio_get_control_response VAR_6;
 int VAR_7;

 VAR_5.control_id = VAR_2;
 VAR_5.index = VAR_3;

 VAR_7 = FUNC_0(VAR_1, VAR_0,
    &VAR_5, sizeof(VAR_5), &VAR_6, sizeof(VAR_6));
 if (VAR_7)
  return VAR_7;

 FUNC_1(VAR_4, &VAR_6.value, sizeof(*VAR_4));

 return 0;
}
