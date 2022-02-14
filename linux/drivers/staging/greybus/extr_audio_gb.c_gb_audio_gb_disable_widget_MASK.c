
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gb_connection {int dummy; } ;
struct gb_audio_disable_widget_request {int widget_id; } ;
typedef int req ;


 int VAR_0 ;
 int FUNC_0 (struct gb_connection*,int ,struct gb_audio_disable_widget_request*,int,int *,int ) ;

int FUNC_1(struct gb_connection *VAR_1,
          u8 VAR_2)
{
 struct gb_audio_disable_widget_request VAR_3;

 VAR_3.widget_id = VAR_2;

 return FUNC_0(VAR_1, VAR_0,
     &VAR_3, sizeof(VAR_3), ((void*)0), 0);
}
