
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_rf {int * priv; scalar_t__ update_channel_int; int clear; int patch_6m_band_edge; int switch_radio_off; int switch_radio_on; int set_channel; int init_hw; } ;
struct uw2453_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_1(struct zd_rf *VAR_8)
{
 VAR_8->init_hw = VAR_3;
 VAR_8->set_channel = VAR_4;
 VAR_8->switch_radio_on = VAR_6;
 VAR_8->switch_radio_off = VAR_5;
 VAR_8->patch_6m_band_edge = VAR_7;
 VAR_8->clear = VAR_2;

 VAR_8->update_channel_int = 0;

 VAR_8->priv = FUNC_0(sizeof(struct uw2453_priv), VAR_1);
 if (VAR_8->priv == ((void*)0))
  return -VAR_0;

 return 0;
}
