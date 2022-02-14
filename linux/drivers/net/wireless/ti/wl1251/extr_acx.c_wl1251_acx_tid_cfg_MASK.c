
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct wl1251_acx_tid_cfg {int type; int ps_scheme; int ack_policy; void* tsid; void* queue; } ;
struct wl1251 {int dummy; } ;
typedef enum wl1251_acx_ps_scheme { ____Placeholder_wl1251_acx_ps_scheme } wl1251_acx_ps_scheme ;
typedef enum wl1251_acx_channel_type { ____Placeholder_wl1251_acx_channel_type } wl1251_acx_channel_type ;
typedef enum wl1251_acx_ack_policy { ____Placeholder_wl1251_acx_ack_policy } wl1251_acx_ack_policy ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wl1251_acx_tid_cfg*) ;
 struct wl1251_acx_tid_cfg* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1251*,int ,struct wl1251_acx_tid_cfg*,int) ;
 int FUNC_3 (int ,char*,void*,int,void*,int,int) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct wl1251 *VAR_4, u8 VAR_5,
         enum wl1251_acx_channel_type VAR_6,
         u8 VAR_7, enum wl1251_acx_ps_scheme VAR_8,
         enum wl1251_acx_ack_policy VAR_9)
{
 struct wl1251_acx_tid_cfg *VAR_10;
 int VAR_11 = 0;

 FUNC_3(VAR_1, "acx tid cfg %d type %d tsid %d "
       "ps_scheme %d ack_policy %d", VAR_5, VAR_6, VAR_7,
       VAR_8, VAR_9);

 VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_2;

 VAR_10->queue = VAR_5;
 VAR_10->type = VAR_6;
 VAR_10->tsid = VAR_7;
 VAR_10->ps_scheme = VAR_8;
 VAR_10->ack_policy = VAR_9;

 VAR_11 = FUNC_2(VAR_4, VAR_0, VAR_10, sizeof(*VAR_10));
 if (VAR_11 < 0) {
  FUNC_4("acx tid cfg failed: %d", VAR_11);
  goto out;
 }

out:
 FUNC_0(VAR_10);
 return VAR_11;
}
