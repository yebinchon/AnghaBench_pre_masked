
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlcore_scan_channels {int channels_5; int channels_2; int passive_active; int dfs; int active; int passive; } ;
struct wl18xx_cmd_scan_params {int channels_5; int channels_2; int passive_active; int dfs; int active; int passive; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct wl18xx_cmd_scan_params *VAR_0,
       struct wlcore_scan_channels *VAR_1)
{
 FUNC_0(VAR_0->passive, VAR_1->passive, sizeof(VAR_0->passive));
 FUNC_0(VAR_0->active, VAR_1->active, sizeof(VAR_0->active));
 VAR_0->dfs = VAR_1->dfs;
 VAR_0->passive_active = VAR_1->passive_active;

 FUNC_0(VAR_0->channels_2, VAR_1->channels_2,
        sizeof(VAR_0->channels_2));
 FUNC_0(VAR_0->channels_5, VAR_1->channels_5,
        sizeof(VAR_0->channels_5));

}
