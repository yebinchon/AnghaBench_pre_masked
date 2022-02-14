
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wifi_only_haldata {scalar_t__ ant_div_cfg; int rfe_type; int efuse_pg_antpath; int efuse_pg_antnum; int customer_id; } ;
struct wifi_only_cfg {struct wifi_only_haldata haldata_info; int chip_interface; struct rtl_priv* adapter; } ;
struct TYPE_2__ {int interface; } ;
struct rtl_priv {TYPE_1__ rtlhal; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct wifi_only_cfg* FUNC_0 (struct rtl_priv*) ;
 int FUNC_1 (struct rtl_priv*) ;
 int FUNC_2 (struct rtl_priv*) ;
 int FUNC_3 (struct rtl_priv*) ;

bool FUNC_4(struct rtl_priv *VAR_4)
{
 struct wifi_only_cfg *VAR_5 = FUNC_0(VAR_4);
 struct wifi_only_haldata *VAR_6;

 if (!VAR_5)
  return 0;

 VAR_5->adapter = VAR_4;

 switch (VAR_4->rtlhal.interface) {
 case 129:
  VAR_5->chip_interface = VAR_1;
  break;
 case 128:
  VAR_5->chip_interface = VAR_3;
  break;
 default:
  VAR_5->chip_interface = VAR_2;
  break;
 }

 VAR_6 = &VAR_5->haldata_info;

 VAR_6->customer_id = VAR_0;
 VAR_6->efuse_pg_antnum = FUNC_1(VAR_4);
 VAR_6->efuse_pg_antpath =
     FUNC_3(VAR_4);
 VAR_6->rfe_type = FUNC_2(VAR_4);
 VAR_6->ant_div_cfg = 0;

 return 1;
}
