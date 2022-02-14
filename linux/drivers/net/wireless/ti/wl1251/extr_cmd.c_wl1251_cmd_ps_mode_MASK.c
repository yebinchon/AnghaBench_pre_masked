
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wl1251_cmd_ps_params {int send_null_data; int retries; int hang_over_period; int null_data_rate; int ps_mode; } ;
struct wl1251 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wl1251_cmd_ps_params*) ;
 struct wl1251_cmd_ps_params* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1251*,int ,struct wl1251_cmd_ps_params*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct wl1251 *VAR_4, u8 VAR_5)
{
 struct wl1251_cmd_ps_params *VAR_6 = ((void*)0);
 int VAR_7 = 0;

 FUNC_3(VAR_1, "cmd set ps mode");

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_3);
 if (!VAR_6) {
  VAR_7 = -VAR_2;
  goto out;
 }

 VAR_6->ps_mode = VAR_5;
 VAR_6->send_null_data = 1;
 VAR_6->retries = 5;
 VAR_6->hang_over_period = 128;
 VAR_6->null_data_rate = 1;

 VAR_7 = FUNC_2(VAR_4, VAR_0, VAR_6,
         sizeof(*VAR_6));
 if (VAR_7 < 0) {
  FUNC_4("cmd set_ps_mode failed");
  goto out;
 }

out:
 FUNC_0(VAR_6);
 return VAR_7;
}
