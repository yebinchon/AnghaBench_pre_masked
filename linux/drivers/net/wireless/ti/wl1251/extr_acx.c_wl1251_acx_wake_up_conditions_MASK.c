
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct wl1251 {int dummy; } ;
struct acx_wake_up_condition {void* listen_interval; void* wake_up_event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct acx_wake_up_condition*) ;
 struct acx_wake_up_condition* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1251*,int ,struct acx_wake_up_condition*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct wl1251 *VAR_4, u8 VAR_5,
      u8 VAR_6)
{
 struct acx_wake_up_condition *VAR_7;
 int VAR_8;

 FUNC_3(VAR_1, "acx wake up conditions");

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  return -VAR_2;

 VAR_7->wake_up_event = VAR_5;
 VAR_7->listen_interval = VAR_6;

 VAR_8 = FUNC_2(VAR_4, VAR_0,
       VAR_7, sizeof(*VAR_7));
 if (VAR_8 < 0) {
  FUNC_4("could not set wake up conditions: %d", VAR_8);
  goto out;
 }

out:
 FUNC_0(VAR_7);
 return VAR_8;
}
