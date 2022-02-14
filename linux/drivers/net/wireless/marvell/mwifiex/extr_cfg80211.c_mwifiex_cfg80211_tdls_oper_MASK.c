
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wiphy {int flags; } ;
struct net_device {int dummy; } ;
struct mwifiex_private {scalar_t__ bss_type; int adapter; scalar_t__ media_connected; } ;
typedef enum nl80211_tdls_operation { ____Placeholder_nl80211_tdls_operation } nl80211_tdls_operation ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;





 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,char*,...) ;
 struct mwifiex_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct mwifiex_private*,int const*,int) ;

__attribute__((used)) static int
FUNC_3(struct wiphy *VAR_9, struct net_device *VAR_10,
      const u8 *VAR_11, enum nl80211_tdls_operation VAR_12)
{
 struct mwifiex_private *VAR_13 = FUNC_1(VAR_10);

 if (!(VAR_9->flags & VAR_7) ||
     !(VAR_9->flags & VAR_8))
  return -VAR_1;


 if (!(VAR_13->bss_type == VAR_4 && VAR_13->media_connected))
  return -VAR_1;

 FUNC_0(VAR_13->adapter, VAR_3,
      "TDLS peer=%pM, oper=%d\n", VAR_11, VAR_12);

 switch (VAR_12) {
 case 130:
  VAR_12 = VAR_6;
  break;
 case 132:
  VAR_12 = VAR_5;
  break;
 case 128:

  FUNC_0(VAR_13->adapter, VAR_2,
       "tdls_oper: teardown from driver not supported\n");
  return -VAR_0;
 case 129:

  FUNC_0(VAR_13->adapter, VAR_2,
       "tdls_oper: setup from driver not supported\n");
  return -VAR_0;
 case 131:

  FUNC_0(VAR_13->adapter, VAR_2,
       "tdls_oper: discovery from driver not supported\n");
  return -VAR_0;
 default:
  FUNC_0(VAR_13->adapter, VAR_2,
       "tdls_oper: operation not supported\n");
  return -VAR_1;
 }

 return FUNC_2(VAR_13, VAR_11, VAR_12);
}
