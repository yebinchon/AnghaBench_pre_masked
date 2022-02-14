
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbs_private {int dummy; } ;
struct TYPE_2__ {void* size; } ;
struct cmd_ds_802_11_rf_tx_power {void* curlevel; void* action; TYPE_1__ hdr; } ;
typedef int s16 ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lbs_private*,int ,struct cmd_ds_802_11_rf_tx_power*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct cmd_ds_802_11_rf_tx_power*,int ,int) ;

int FUNC_4(struct lbs_private *VAR_2, s16 VAR_3)
{
 struct cmd_ds_802_11_rf_tx_power VAR_4;
 int VAR_5;

 FUNC_3(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.hdr.size = FUNC_0(sizeof(VAR_4));
 VAR_4.action = FUNC_0(VAR_1);
 VAR_4.curlevel = FUNC_0(VAR_3);

 FUNC_2("SET_RF_TX_POWER: %d dBm\n", VAR_3);

 VAR_5 = FUNC_1(VAR_2, VAR_0, &VAR_4);

 return VAR_5;
}
