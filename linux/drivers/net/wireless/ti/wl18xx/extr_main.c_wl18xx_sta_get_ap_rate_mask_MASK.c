
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wl12xx_vif {scalar_t__ channel_type; int rate_set; } ;
struct wl1271 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct wl1271*) ;

__attribute__((used)) static u32 FUNC_2(struct wl1271 *VAR_5,
           struct wl12xx_vif *VAR_6)
{
 u32 VAR_7 = VAR_6->rate_set;

 if (VAR_6->channel_type == VAR_3 ||
     VAR_6->channel_type == VAR_4) {
  FUNC_0(VAR_2, "using wide channel rate mask");
  VAR_7 |= VAR_1;


  VAR_7 &= ~VAR_0;
 } else if (FUNC_1(VAR_5)) {
  FUNC_0(VAR_2, "using MIMO channel rate mask");
  VAR_7 |= VAR_0;
 }

 return VAR_7;
}
