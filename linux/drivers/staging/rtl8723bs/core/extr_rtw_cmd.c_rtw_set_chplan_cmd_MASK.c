
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct cmd_priv {int dummy; } ;
struct cmd_obj {int dummy; } ;
struct TYPE_2__ {scalar_t__ ChannelPlan; } ;
struct adapter {TYPE_1__ mlmepriv; struct cmd_priv cmdpriv; } ;
struct SetChannelPlan_param {scalar_t__ channel_plan; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct cmd_obj*,struct SetChannelPlan_param*,int ) ;
 int FUNC_3 (struct SetChannelPlan_param*) ;
 scalar_t__ FUNC_4 (struct cmd_priv*,struct cmd_obj*) ;
 int FUNC_5 (struct adapter*) ;
 int FUNC_6 (scalar_t__) ;
 void* FUNC_7 (int) ;
 scalar_t__ FUNC_8 (struct adapter*,unsigned char*) ;

u8 FUNC_9(struct adapter *VAR_6, u8 VAR_7, u8 VAR_8, u8 VAR_9)
{
 struct cmd_obj *VAR_10;
 struct SetChannelPlan_param *VAR_11;
 struct cmd_priv *VAR_12 = &VAR_6->cmdpriv;

 u8 VAR_13 = VAR_2;

 FUNC_1(VAR_5, VAR_4, ("+rtw_set_chplan_cmd\n"));


 if (VAR_9 && FUNC_5(VAR_6) == 1) {
  VAR_13 = VAR_1;
  goto exit;
 }


 if (!FUNC_6(VAR_7)) {
  VAR_13 = VAR_1;
  goto exit;
 }


 VAR_11 = FUNC_7(sizeof(struct SetChannelPlan_param));
 if (VAR_11 == ((void*)0)) {
  VAR_13 = VAR_1;
  goto exit;
 }
 VAR_11->channel_plan = VAR_7;

 if (VAR_8) {

  VAR_10 = FUNC_7(sizeof(struct cmd_obj));
  if (VAR_10 == ((void*)0)) {
   FUNC_3(VAR_11);
   VAR_13 = VAR_1;
   goto exit;
  }

  FUNC_2(VAR_10, VAR_11, FUNC_0(VAR_3));
  VAR_13 = FUNC_4(VAR_12, VAR_10);
 } else {

  if (VAR_0 != FUNC_8(VAR_6, (unsigned char *)VAR_11))
   VAR_13 = VAR_1;

  FUNC_3(VAR_11);
 }


 if (VAR_13 == VAR_2)
  VAR_6->mlmepriv.ChannelPlan = VAR_7;

exit:
 return VAR_13;
}
