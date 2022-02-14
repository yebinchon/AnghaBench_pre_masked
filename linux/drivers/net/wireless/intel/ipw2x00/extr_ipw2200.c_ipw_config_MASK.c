
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int accept_all_data_frames; int accept_non_directed_frames; int accept_all_mgmt_bcpr; int accept_all_mgmt_frames; int answer_broadcast_ssid_probe; int bt_coexistence; } ;
struct ipw_priv {unsigned char* eeprom; int capability; TYPE_3__* ieee; scalar_t__ notif_missed_beacons; int status; scalar_t__ rts_threshold; int rates; TYPE_4__ sys_config; scalar_t__ prom_net_dev; TYPE_1__* net_dev; } ;
struct TYPE_6__ {scalar_t__ level; } ;
struct TYPE_7__ {scalar_t__ iw_mode; scalar_t__ host_decrypt; scalar_t__ host_encrypt; TYPE_2__ sec; } ;
struct TYPE_5__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct ipw_priv*,int *) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct ipw_priv*) ;
 int FUNC_4 (struct ipw_priv*) ;
 int FUNC_5 (struct ipw_priv*,int *) ;
 scalar_t__ FUNC_6 (struct ipw_priv*,int ) ;
 scalar_t__ FUNC_7 (struct ipw_priv*) ;
 scalar_t__ FUNC_8 (struct ipw_priv*,scalar_t__) ;
 scalar_t__ FUNC_9 (struct ipw_priv*,int *) ;
 scalar_t__ FUNC_10 (struct ipw_priv*) ;
 int FUNC_11 (struct ipw_priv*) ;
 scalar_t__ FUNC_12 (struct ipw_priv*) ;
 scalar_t__ FUNC_13 (struct ipw_priv*) ;
 scalar_t__ FUNC_14 (scalar_t__) ;

__attribute__((used)) static int FUNC_15(struct ipw_priv *VAR_11)
{



 if (FUNC_13(VAR_11))
  goto error;


 if (FUNC_6(VAR_11, VAR_11->net_dev->dev_addr))
  goto error;


 FUNC_2(&VAR_11->sys_config);



 if (VAR_10) {
  unsigned char VAR_12 = VAR_11->eeprom[VAR_3];

  if (VAR_12 & VAR_4)
   VAR_11->sys_config.bt_coexistence
       |= VAR_2;
  if (VAR_12 & VAR_5)
   VAR_11->sys_config.bt_coexistence
       |= VAR_1;
 }
 if (VAR_11->ieee->iw_mode == VAR_7)
  VAR_11->sys_config.answer_broadcast_ssid_probe = 1;
 else
  VAR_11->sys_config.answer_broadcast_ssid_probe = 0;

 if (FUNC_10(VAR_11))
  goto error;

 FUNC_1(VAR_11, &VAR_11->rates);
 if (FUNC_9(VAR_11, &VAR_11->rates))
  goto error;


 if (VAR_11->rts_threshold) {
  if (FUNC_8(VAR_11, VAR_11->rts_threshold))
   goto error;
 }





 if (FUNC_12(VAR_11))
  goto error;


 if (FUNC_7(VAR_11))
  goto error;

 VAR_11->status |= VAR_9;

 FUNC_3(VAR_11);
 FUNC_4(VAR_11);
 VAR_11->notif_missed_beacons = 0;


 if ((VAR_11->capability & VAR_0) &&
     (VAR_11->ieee->sec.level == VAR_8) &&
     !(VAR_11->ieee->host_encrypt || VAR_11->ieee->host_decrypt))
  FUNC_11(VAR_11);

 return 0;

      error:
 return -VAR_6;
}
