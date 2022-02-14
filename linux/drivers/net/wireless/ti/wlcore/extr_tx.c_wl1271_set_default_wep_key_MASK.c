
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {int hlid; } ;
struct TYPE_3__ {int bcast_hlid; } ;
struct wl12xx_vif {scalar_t__ bss_type; TYPE_2__ sta; TYPE_1__ ap; } ;
struct wl1271 {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct wl1271*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(struct wl1271 *VAR_2,
          struct wl12xx_vif *VAR_3, u8 VAR_4)
{
 int VAR_5;
 bool VAR_6 = (VAR_3->bss_type == VAR_0);

 if (VAR_6)
  VAR_5 = FUNC_1(VAR_2, VAR_4,
           VAR_3->ap.bcast_hlid);
 else
  VAR_5 = FUNC_1(VAR_2, VAR_4, VAR_3->sta.hlid);

 if (VAR_5 < 0)
  return VAR_5;

 FUNC_0(VAR_1, "default wep key idx: %d", (int)VAR_4);
 return 0;
}
