
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union iwreq_data {int dummy; } iwreq_data ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_mlme {int cmd; } ;
struct ipw2100_priv {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct ipw2100_priv*) ;
 struct ipw2100_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
          struct iw_request_info *VAR_2,
          union iwreq_data *VAR_3, char *VAR_4)
{
 struct ipw2100_priv *VAR_5 = FUNC_1(VAR_1);
 struct iw_mlme *VAR_6 = (struct iw_mlme *)VAR_4;

 switch (VAR_6->cmd) {
 case 129:

  break;

 case 128:
  FUNC_0(VAR_5);
  break;

 default:
  return -VAR_0;
 }
 return 0;
}
