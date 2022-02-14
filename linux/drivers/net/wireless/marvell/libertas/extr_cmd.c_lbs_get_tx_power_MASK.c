
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbs_private {int dummy; } ;
struct TYPE_2__ {void* size; } ;
struct cmd_ds_802_11_rf_tx_power {int maxlevel; int minlevel; int curlevel; void* action; TYPE_1__ hdr; } ;
typedef int s16 ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lbs_private*,int ,struct cmd_ds_802_11_rf_tx_power*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cmd_ds_802_11_rf_tx_power*,int ,int) ;

int FUNC_4(struct lbs_private *VAR_2, s16 *VAR_3, s16 *VAR_4,
       s16 *VAR_5)
{
 struct cmd_ds_802_11_rf_tx_power VAR_6;
 int VAR_7;

 FUNC_3(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.hdr.size = FUNC_0(sizeof(VAR_6));
 VAR_6.action = FUNC_0(VAR_1);

 VAR_7 = FUNC_1(VAR_2, VAR_0, &VAR_6);
 if (VAR_7 == 0) {
  *VAR_3 = FUNC_2(VAR_6.curlevel);
  if (VAR_4)
   *VAR_4 = VAR_6.minlevel;
  if (VAR_5)
   *VAR_5 = VAR_6.maxlevel;
 }

 return VAR_7;
}
