
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union iwreq_data {int dummy; } iwreq_data ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_mlme {int cmd; int reason_code; } ;
struct ipw_priv {int dummy; } ;
typedef int __le16 ;


 int VAR_0 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ipw_priv*) ;
 struct ipw_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1,
      struct iw_request_info *VAR_2,
      union iwreq_data *VAR_3, char *VAR_4)
{
 struct ipw_priv *VAR_5 = FUNC_2(VAR_1);
 struct iw_mlme *VAR_6 = (struct iw_mlme *)VAR_4;
 __le16 VAR_7;

 VAR_7 = FUNC_0(VAR_6->reason_code);

 switch (VAR_6->cmd) {
 case 129:

  break;

 case 128:
  FUNC_1(VAR_5);
  break;

 default:
  return -VAR_0;
 }
 return 0;
}
