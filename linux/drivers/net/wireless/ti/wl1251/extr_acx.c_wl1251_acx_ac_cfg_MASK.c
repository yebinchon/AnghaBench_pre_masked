
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef void* u16 ;
struct wl1251_acx_ac_cfg {void* txop_limit; void* aifsn; void* cw_max; void* cw_min; void* ac; } ;
struct wl1251 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wl1251_acx_ac_cfg*) ;
 struct wl1251_acx_ac_cfg* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1251*,int ,struct wl1251_acx_ac_cfg*,int) ;
 int FUNC_3 (int ,char*,void*,void*,void*,void*,void*) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct wl1251 *VAR_4, u8 VAR_5, u8 VAR_6, u16 VAR_7,
        u8 VAR_8, u16 VAR_9)
{
 struct wl1251_acx_ac_cfg *VAR_10;
 int VAR_11 = 0;

 FUNC_3(VAR_1, "acx ac cfg %d cw_ming %d cw_max %d "
       "aifs %d txop %d", VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);

 VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_2;

 VAR_10->ac = VAR_5;
 VAR_10->cw_min = VAR_6;
 VAR_10->cw_max = VAR_7;
 VAR_10->aifsn = VAR_8;
 VAR_10->txop_limit = VAR_9;

 VAR_11 = FUNC_2(VAR_4, VAR_0, VAR_10, sizeof(*VAR_10));
 if (VAR_11 < 0) {
  FUNC_4("acx ac cfg failed: %d", VAR_11);
  goto out;
 }

out:
 FUNC_0(VAR_10);
 return VAR_11;
}
