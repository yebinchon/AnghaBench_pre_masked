
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct rtl_ps_ctl {int smart_ps; int pwr_mode; int fw_current_inpsmode; } ;
struct rtl_p2p_ps_info {int p2p_ps_state; int noa_num; int * noa_start_time; int * noa_interval; int noa_index; int * noa_duration; int * noa_count_type; int opp_ps; int ctwindow; int p2p_ps_mode; } ;
struct TYPE_4__ {struct rtl_p2p_ps_info p2p_ps_info; } ;
struct rtl_priv {TYPE_3__* cfg; TYPE_1__ psc; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {int (* set_hw_reg ) (struct ieee80211_hw*,int ,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;


 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_2 (struct rtl_priv*) ;
 int FUNC_3 (struct ieee80211_hw*,int ,int*) ;
 int FUNC_4 (struct ieee80211_hw*,int ,int*) ;
 int FUNC_5 (struct ieee80211_hw*,int ,int*) ;
 int FUNC_6 (struct ieee80211_hw*,int ,int*) ;
 int FUNC_7 (struct ieee80211_hw*,int ,int*) ;

void FUNC_8(struct ieee80211_hw *VAR_5 , u8 VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_1(VAR_5);
 struct rtl_ps_ctl *VAR_8 = FUNC_2(FUNC_1(VAR_5));
 struct rtl_p2p_ps_info *VAR_9 = &(VAR_7->psc.p2p_ps_info);

 FUNC_0(VAR_7, VAR_0, VAR_1, " p2p state %x\n" , VAR_6);
 switch (VAR_6) {
 case 131:
  VAR_9->p2p_ps_state = VAR_6;
  VAR_7->cfg->ops->set_hw_reg(VAR_5, VAR_2,
           &VAR_6);
  VAR_9->noa_index = 0;
  VAR_9->ctwindow = 0;
  VAR_9->opp_ps = 0;
  VAR_9->noa_num = 0;
  VAR_9->p2p_ps_mode = VAR_4;
  if (VAR_8->fw_current_inpsmode) {
   if (VAR_8->smart_ps == 0) {
    VAR_8->smart_ps = 2;
    VAR_7->cfg->ops->set_hw_reg(VAR_5,
      VAR_3,
      &VAR_8->pwr_mode);
   }

  }
  break;
 case 130:
  if (VAR_9->p2p_ps_mode > VAR_4) {
   VAR_9->p2p_ps_state = VAR_6;

   if (VAR_9->ctwindow > 0) {
    if (VAR_8->smart_ps != 0) {
     VAR_8->smart_ps = 0;
     VAR_7->cfg->ops->set_hw_reg(VAR_5,
       VAR_3,
       &VAR_8->pwr_mode);
    }
   }
   VAR_7->cfg->ops->set_hw_reg(VAR_5,
     VAR_2,
     &VAR_6);

  }
  break;
 case 129:
 case 128:
 case 132:
  if (VAR_9->p2p_ps_mode > VAR_4) {
   VAR_9->p2p_ps_state = VAR_6;
   VAR_7->cfg->ops->set_hw_reg(VAR_5,
     VAR_2,
     &VAR_6);
  }
  break;
 default:
  break;
 }
 FUNC_0(VAR_7, VAR_0, VAR_1,
   "ctwindow %x oppps %x\n",
   VAR_9->ctwindow , VAR_9->opp_ps);
 FUNC_0(VAR_7, VAR_0, VAR_1,
   "count %x duration %x index %x interval %x start time %x noa num %x\n",
   VAR_9->noa_count_type[0],
   VAR_9->noa_duration[0],
   VAR_9->noa_index,
   VAR_9->noa_interval[0],
   VAR_9->noa_start_time[0],
   VAR_9->noa_num);
 FUNC_0(VAR_7, VAR_0, VAR_1, "end\n");
}
