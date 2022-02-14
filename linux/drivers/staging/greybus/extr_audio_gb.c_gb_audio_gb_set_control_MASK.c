
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct gb_connection {int dummy; } ;
struct gb_audio_set_control_request {int value; void* index; void* control_id; } ;
struct gb_audio_ctl_elem_value {int dummy; } ;
typedef int req ;


 int VAR_0 ;
 int FUNC_0 (struct gb_connection*,int ,struct gb_audio_set_control_request*,int,int *,int ) ;
 int FUNC_1 (int *,struct gb_audio_ctl_elem_value*,int) ;

int FUNC_2(struct gb_connection *VAR_1,
       u8 VAR_2, u8 VAR_3,
       struct gb_audio_ctl_elem_value *VAR_4)
{
 struct gb_audio_set_control_request VAR_5;

 VAR_5.control_id = VAR_2;
 VAR_5.index = VAR_3;
 FUNC_1(&VAR_5.value, VAR_4, sizeof(VAR_5.value));

 return FUNC_0(VAR_1, VAR_0,
     &VAR_5, sizeof(VAR_5), ((void*)0), 0);
}
