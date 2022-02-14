
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sa_family; int * sa_data; } ;
union iwreq_data {TYPE_1__ ap_addr; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw2100_priv {int status; int action_mutex; int mandatory_bssid_mac; int config; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int VAR_5 ;
 int FUNC_1 (struct ipw2100_priv*,int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 struct ipw2100_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_6,
         struct iw_request_info *VAR_7,
         union iwreq_data *VAR_8, char *VAR_9)
{
 struct ipw2100_priv *VAR_10 = FUNC_4(VAR_6);
 int VAR_11 = 0;


 if (VAR_8->ap_addr.sa_family != VAR_0)
  return -VAR_2;

 FUNC_6(&VAR_10->action_mutex);
 if (!(VAR_10->status & VAR_5)) {
  VAR_11 = -VAR_3;
  goto done;
 }

 if (FUNC_2(VAR_8->ap_addr.sa_data) ||
     FUNC_3(VAR_8->ap_addr.sa_data)) {

  FUNC_0("exit - disable mandatory BSSID\n");
  VAR_10->config &= ~VAR_1;
  VAR_11 = FUNC_1(VAR_10, ((void*)0), 0);
  goto done;
 }

 VAR_10->config |= VAR_1;
 FUNC_5(VAR_10->mandatory_bssid_mac, VAR_8->ap_addr.sa_data, VAR_4);

 VAR_11 = FUNC_1(VAR_10, VAR_8->ap_addr.sa_data, 0);

 FUNC_0("SET BSSID -> %pM\n", VAR_8->ap_addr.sa_data);

      done:
 FUNC_7(&VAR_10->action_mutex);
 return VAR_11;
}
