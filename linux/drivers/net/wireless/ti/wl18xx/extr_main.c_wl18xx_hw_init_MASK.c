
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl18xx_priv {scalar_t__ extra_spare_key_count; scalar_t__ last_fw_rls_idx; } ;
struct wl1271 {struct wl18xx_priv* priv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct wl1271*) ;
 int FUNC_1 (struct wl1271*) ;
 int FUNC_2 (struct wl1271*,int ) ;

__attribute__((used)) static int FUNC_3(struct wl1271 *VAR_2)
{
 int VAR_3;
 struct wl18xx_priv *VAR_4 = VAR_2->priv;


 VAR_4->last_fw_rls_idx = 0;
 VAR_4->extra_spare_key_count = 0;


 VAR_3 = FUNC_2(VAR_2, VAR_0);
 if (VAR_3 < 0)
  return VAR_3;


 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 if (VAR_1) {
  VAR_3 = FUNC_1(VAR_2);
  if (VAR_3 != 0)
   return VAR_3;
 }

 return VAR_3;
}
