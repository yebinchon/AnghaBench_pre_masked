
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl18xx_priv {scalar_t__ extra_spare_key_count; } ;
struct wl1271 {struct wl18xx_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct wl1271 *VAR_2, bool VAR_3)
{
 struct wl18xx_priv *VAR_4 = VAR_2->priv;


 if (VAR_4->extra_spare_key_count)
  return VAR_1;

 return VAR_0;
}
