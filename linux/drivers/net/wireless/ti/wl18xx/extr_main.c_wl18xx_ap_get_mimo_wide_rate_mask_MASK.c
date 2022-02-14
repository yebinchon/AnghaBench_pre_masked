
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wl12xx_vif {scalar_t__ channel_type; scalar_t__ band; } ;
struct wl1271 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct wl1271*) ;

__attribute__((used)) static u32 FUNC_3(struct wl1271 *VAR_7,
          struct wl12xx_vif *VAR_8)
{
 if (VAR_8->channel_type == VAR_5 ||
     VAR_8->channel_type == VAR_6) {
  FUNC_1(VAR_2, "using wide channel rate mask");


  if (FUNC_0(VAR_8->band != VAR_4))
   return 0;

  return VAR_1;
 } else if (FUNC_2(VAR_7) &&
     VAR_8->band == VAR_3) {
  FUNC_1(VAR_2, "using MIMO rate mask");




  return VAR_0;
 } else {
  return 0;
 }
}
