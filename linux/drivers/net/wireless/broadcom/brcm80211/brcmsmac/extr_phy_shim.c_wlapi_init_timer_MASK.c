
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlapi_timer {int dummy; } ;
struct phy_shim_info {int wl; } ;


 scalar_t__ FUNC_0 (int ,void (*) (void*),void*,char const*) ;

struct wlapi_timer *FUNC_1(struct phy_shim_info *VAR_0,
         void (*VAR_1)(struct brcms_phy *VAR_2),
         void *VAR_3, const char *VAR_4)
{
 return (struct wlapi_timer *)
   FUNC_0(VAR_0->wl, (void (*)(void *))VAR_1,
      VAR_3, VAR_4);
}
