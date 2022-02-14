
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_rf {int patch_cck_gain; int patch_6m_band_edge; int switch_radio_on; int set_channel; int init_hw; int switch_radio_off; } ;
struct zd_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct zd_chip*) ;
 int VAR_7 ;
 struct zd_chip* FUNC_1 (struct zd_rf*) ;

int FUNC_2(struct zd_rf *VAR_8)
{
 struct zd_chip *VAR_9 = FUNC_1(VAR_8);

 VAR_8->switch_radio_off = VAR_0;
 if (FUNC_0(VAR_9)) {
  VAR_8->init_hw = VAR_4;
  VAR_8->set_channel = VAR_5;
  VAR_8->switch_radio_on = VAR_6;
 } else {
  VAR_8->init_hw = VAR_1;
  VAR_8->set_channel = VAR_2;
  VAR_8->switch_radio_on = VAR_3;
 }
 VAR_8->patch_6m_band_edge = VAR_7;
 VAR_8->patch_cck_gain = 1;
 return 0;
}
