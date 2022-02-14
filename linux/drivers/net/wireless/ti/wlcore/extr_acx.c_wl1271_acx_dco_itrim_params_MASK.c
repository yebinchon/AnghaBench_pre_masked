
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct conf_itrim_settings {int timeout; int enable; } ;
struct TYPE_2__ {struct conf_itrim_settings itrim; } ;
struct wl1271 {TYPE_1__ conf; } ;
struct acx_dco_itrim_params {int timeout; int enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct acx_dco_itrim_params*) ;
 struct acx_dco_itrim_params* FUNC_2 (int,int ) ;
 int FUNC_3 (struct wl1271*,int ,struct acx_dco_itrim_params*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,int) ;

int FUNC_6(struct wl1271 *VAR_4)
{
 struct acx_dco_itrim_params *VAR_5;
 struct conf_itrim_settings *VAR_6 = &VAR_4->conf.itrim;
 int VAR_7;

 FUNC_4(VAR_1, "acx dco itrim parameters");

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_3);
 if (!VAR_5) {
  VAR_7 = -VAR_2;
  goto out;
 }

 VAR_5->enable = VAR_6->enable;
 VAR_5->timeout = FUNC_0(VAR_6->timeout);

 VAR_7 = FUNC_3(VAR_4, VAR_0,
       VAR_5, sizeof(*VAR_5));
 if (VAR_7 < 0) {
  FUNC_5("failed to set dco itrim parameters: %d", VAR_7);
  goto out;
 }

out:
 FUNC_1(VAR_5);
 return VAR_7;
}
