
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_vif {size_t band; int basic_rate_set; int rate_set; int * bitrate_masks; } ;
struct wl1271 {int dummy; } ;



__attribute__((used)) static void FUNC_0(struct wl1271 *VAR_0, struct wl12xx_vif *VAR_1)
{
 VAR_1->basic_rate_set = VAR_1->bitrate_masks[VAR_1->band];
 VAR_1->rate_set = VAR_1->basic_rate_set;
}
