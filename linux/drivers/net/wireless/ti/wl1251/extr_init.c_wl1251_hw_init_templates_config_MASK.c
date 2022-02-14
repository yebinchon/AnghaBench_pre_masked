
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wl12xx_qos_null_data_template {int dummy; } ;
struct wl12xx_ps_poll_template {int dummy; } ;
struct wl12xx_probe_resp_template {int dummy; } ;
struct wl12xx_probe_req_template {int dummy; } ;
struct wl12xx_null_data_template {int dummy; } ;
struct wl12xx_beacon_template {int dummy; } ;
struct wl1251 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct wl1251*,int ,int *,int) ;
 int FUNC_2 (struct wl1251*,int ,int *,int,int ) ;

int FUNC_3(struct wl1251 *VAR_8)
{
 int VAR_9;
 u8 VAR_10[VAR_6];


 VAR_9 = FUNC_1(VAR_8, VAR_2, ((void*)0),
          sizeof(struct wl12xx_probe_req_template));
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_1(VAR_8, VAR_1, ((void*)0),
          sizeof(struct wl12xx_null_data_template));
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_1(VAR_8, VAR_4, ((void*)0),
          sizeof(struct wl12xx_ps_poll_template));
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_1(VAR_8, VAR_5, ((void*)0),
          sizeof
          (struct wl12xx_qos_null_data_template));
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_1(VAR_8, VAR_3, ((void*)0),
          sizeof
          (struct wl12xx_probe_resp_template));
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_1(VAR_8, VAR_0, ((void*)0),
          sizeof
          (struct wl12xx_beacon_template));
 if (VAR_9 < 0)
  return VAR_9;


 FUNC_0(VAR_10, 0, VAR_6);
 VAR_9 = FUNC_2(VAR_8, VAR_7, VAR_10, VAR_6, 0);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_2(VAR_8, VAR_7, VAR_10, 1, 0);
 if (VAR_9 < 0)
  return VAR_9;

 return 0;
}
