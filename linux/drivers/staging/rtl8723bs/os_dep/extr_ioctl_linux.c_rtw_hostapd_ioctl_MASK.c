
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct iw_point {int length; int pointer; } ;
struct ieee_param {int cmd; } ;
struct adapter {int hw_init_completed; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct ieee_param*,int ,int ) ;
 scalar_t__ FUNC_2 (int ,struct ieee_param*,int ) ;
 int FUNC_3 (struct ieee_param*) ;
 int FUNC_4 (struct net_device*,struct ieee_param*) ;
 int FUNC_5 (struct net_device*,struct ieee_param*) ;
 int FUNC_6 (struct net_device*,struct ieee_param*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*,struct ieee_param*,int ) ;
 int FUNC_9 (struct net_device*,struct ieee_param*,int ) ;
 int FUNC_10 (struct net_device*,struct ieee_param*,int ) ;
 int FUNC_11 (struct net_device*,struct ieee_param*,int ) ;
 struct ieee_param* FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*,struct ieee_param*,int ) ;
 int FUNC_15 (struct net_device*,struct ieee_param*,int ) ;
 int FUNC_16 (struct net_device*,struct ieee_param*,int ) ;
 int FUNC_17 (struct net_device*,struct ieee_param*,int ) ;
 int FUNC_18 (struct net_device*,struct ieee_param*,int ) ;
 int FUNC_19 (struct net_device*,struct ieee_param*,int ) ;

__attribute__((used)) static int FUNC_20(struct net_device *VAR_5, struct iw_point *VAR_6)
{
 struct ieee_param *VAR_7;
 int VAR_8 = 0;
 struct adapter *VAR_9 = (struct adapter *)FUNC_13(VAR_5);
 if (!VAR_9->hw_init_completed) {
  VAR_8 = -VAR_4;
  goto out;
 }



 if (!VAR_6->pointer) {
  VAR_8 = -VAR_1;
  goto out;
 }

 VAR_7 = FUNC_12(VAR_6->length);
 if (VAR_7 == ((void*)0)) {
  VAR_8 = -VAR_2;
  goto out;
 }

 if (FUNC_1(VAR_7, VAR_6->pointer, VAR_6->length)) {
  FUNC_3(VAR_7);
  VAR_8 = -VAR_0;
  goto out;
 }



 switch (VAR_7->cmd) {
 case 138:

  FUNC_7(VAR_5);

  break;

 case 139:

  VAR_8 = FUNC_4(VAR_5, VAR_7);

  break;

 case 135:

  VAR_8 = FUNC_5(VAR_5, VAR_7);

  break;

 case 134:

  VAR_8 = FUNC_14(VAR_5, VAR_7, VAR_6->length);

  break;

 case 128:

  VAR_8 = FUNC_15(VAR_5, VAR_7, VAR_6->length);

  break;

 case 136:

  VAR_8 = FUNC_6(VAR_5, VAR_7);

  break;

 case 130:

  VAR_8 = FUNC_18(VAR_5, VAR_7, VAR_6->length);

  break;

 case 129:

  VAR_8 = FUNC_19(VAR_5, VAR_7, VAR_6->length);

  break;

 case 131:

  VAR_8 = FUNC_17(VAR_5, VAR_7, VAR_6->length);

  break;

 case 133:

  VAR_8 = FUNC_16(VAR_5, VAR_7, VAR_6->length);

  break;

 case 137:

  VAR_8 = FUNC_10(VAR_5, VAR_7, VAR_6->length);

  break;

 case 132:

  VAR_8 = FUNC_11(VAR_5, VAR_7, VAR_6->length);

  break;

 case 141:

  VAR_8 = FUNC_8(VAR_5, VAR_7, VAR_6->length);

  break;

 case 140:

  VAR_8 = FUNC_9(VAR_5, VAR_7, VAR_6->length);

  break;

 default:
  FUNC_0("Unknown hostapd request: %d\n", VAR_7->cmd);
  VAR_8 = -VAR_3;
  break;

 }

 if (VAR_8 == 0 && FUNC_2(VAR_6->pointer, VAR_7, VAR_6->length))
  VAR_8 = -VAR_0;


 FUNC_3(VAR_7);

out:

 return VAR_8;

}
