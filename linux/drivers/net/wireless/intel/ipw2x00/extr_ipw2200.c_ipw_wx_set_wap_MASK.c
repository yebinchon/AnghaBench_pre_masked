
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sa_family; int sa_data; } ;
union iwreq_data {TYPE_1__ ap_addr; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw_priv {int mutex; int bssid; int config; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ipw_priv*) ;
 int FUNC_4 (struct ipw_priv*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 struct ipw_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_4,
     struct iw_request_info *VAR_5,
     union iwreq_data *VAR_6, char *VAR_7)
{
 struct ipw_priv *VAR_8 = FUNC_7(VAR_4);

 if (VAR_6->ap_addr.sa_family != VAR_0)
  return -VAR_2;
 FUNC_9(&VAR_8->mutex);
 if (FUNC_5(VAR_6->ap_addr.sa_data) ||
     FUNC_6(VAR_6->ap_addr.sa_data)) {

  FUNC_1("Setting AP BSSID to ANY\n");
  VAR_8->config &= ~VAR_1;
  FUNC_0("Attempting to associate with new "
    "parameters.\n");
  FUNC_3(VAR_8);
  FUNC_10(&VAR_8->mutex);
  return 0;
 }

 VAR_8->config |= VAR_1;
 if (FUNC_2(VAR_8->bssid, VAR_6->ap_addr.sa_data)) {
  FUNC_1("BSSID set to current BSSID.\n");
  FUNC_10(&VAR_8->mutex);
  return 0;
 }

 FUNC_1("Setting mandatory BSSID to %pM\n",
       VAR_6->ap_addr.sa_data);

 FUNC_8(VAR_8->bssid, VAR_6->ap_addr.sa_data, VAR_3);


 FUNC_0("[re]association triggered due to BSSID change.\n");
 if (!FUNC_4(VAR_8))
  FUNC_3(VAR_8);

 FUNC_10(&VAR_8->mutex);
 return 0;
}
