
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mac_driver {int (* mac_pausefrm_cfg ) (struct mac_driver*,int,int) ;int (* set_an_mode ) (struct mac_driver*,int) ;int (* set_tx_auto_pause_frames ) (struct mac_driver*,int ) ;int (* config_max_frame_length ) (struct mac_driver*,int ) ;int (* mac_init ) (struct mac_driver*) ;} ;
struct hns_mac_cb {scalar_t__ mac_type; int tx_pause_frm_time; int max_frm; TYPE_1__* dsaf_dev; } ;
struct TYPE_2__ {int dsaf_ver; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 struct mac_driver* FUNC_1 (struct hns_mac_cb*) ;
 int FUNC_2 (struct mac_driver*) ;
 int FUNC_3 (struct mac_driver*,int ) ;
 int FUNC_4 (struct mac_driver*,int ) ;
 int FUNC_5 (struct mac_driver*,int) ;
 int FUNC_6 (struct mac_driver*,int,int) ;
 int FUNC_7 (struct mac_driver*,int,int) ;

void FUNC_8(struct hns_mac_cb *VAR_1)
{
 struct mac_driver *VAR_2 = FUNC_1(VAR_1);
 bool VAR_3 = FUNC_0(VAR_1->dsaf_dev->dsaf_ver);

 VAR_2->mac_init(VAR_2);

 if (VAR_2->config_max_frame_length)
  VAR_2->config_max_frame_length(VAR_2, VAR_1->max_frm);

 if (VAR_2->set_tx_auto_pause_frames)
  VAR_2->set_tx_auto_pause_frames(VAR_2, VAR_1->tx_pause_frm_time);

 if (VAR_2->set_an_mode)
  VAR_2->set_an_mode(VAR_2, 1);

 if (VAR_2->mac_pausefrm_cfg) {
  if (VAR_1->mac_type == VAR_0)
   VAR_2->mac_pausefrm_cfg(VAR_2, !VAR_3, !VAR_3);
  else
   VAR_2->mac_pausefrm_cfg(VAR_2, 0, 1);
 }
}
