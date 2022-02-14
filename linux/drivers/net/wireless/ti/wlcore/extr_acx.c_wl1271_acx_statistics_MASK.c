
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fw_stats_len; } ;
struct wl1271 {TYPE_1__ stats; } ;
struct acx_header {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wl1271*,int ,void*,int,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int) ;

int FUNC_3(struct wl1271 *VAR_3, void *VAR_4)
{
 int VAR_5;

 FUNC_1(VAR_1, "acx statistics");

 VAR_5 = FUNC_0(VAR_3, VAR_0, VAR_4,
         sizeof(struct acx_header),
         VAR_3->stats.fw_stats_len);
 if (VAR_5 < 0) {
  FUNC_2("acx statistics failed: %d", VAR_5);
  return -VAR_2;
 }

 return 0;
}
