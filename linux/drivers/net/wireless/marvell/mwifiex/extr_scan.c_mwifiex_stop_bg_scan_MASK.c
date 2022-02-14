
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwifiex_private {int sched_scanning; TYPE_1__* adapter; } ;
struct mwifiex_bg_scan_cfg {int enable; int action; int bss_type; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mwifiex_bg_scan_cfg*) ;
 struct mwifiex_bg_scan_cfg* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (struct mwifiex_private*,int ,int ,int ,struct mwifiex_bg_scan_cfg*,int) ;

int FUNC_4(struct mwifiex_private *VAR_7)
{
 struct mwifiex_bg_scan_cfg *VAR_8;

 if (!VAR_7->sched_scanning) {
  FUNC_0(VAR_7->adapter->dev, "bgscan already stopped!\n");
  return 0;
 }

 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->bss_type = VAR_6;
 VAR_8->action = VAR_5;
 VAR_8->enable = 0;

 if (FUNC_3(VAR_7, VAR_4,
        VAR_3, 0, VAR_8, 1)) {
  FUNC_1(VAR_8);
  return -VAR_0;
 }

 FUNC_1(VAR_8);
 VAR_7->sched_scanning = 0;

 return 0;
}
