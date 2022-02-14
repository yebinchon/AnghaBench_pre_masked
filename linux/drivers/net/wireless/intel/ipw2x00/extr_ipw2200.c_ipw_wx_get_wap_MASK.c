
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sa_data; int sa_family; } ;
union iwreq_data {TYPE_1__ ap_addr; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw_priv {int config; int status; int mutex; int bssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 struct ipw_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_5,
     struct iw_request_info *VAR_6,
     union iwreq_data *VAR_7, char *VAR_8)
{
 struct ipw_priv *VAR_9 = FUNC_2(VAR_5);



 FUNC_4(&VAR_9->mutex);
 if (VAR_9->config & VAR_1 ||
     VAR_9->status & (VAR_3 | VAR_4)) {
  VAR_7->ap_addr.sa_family = VAR_0;
  FUNC_3(VAR_7->ap_addr.sa_data, VAR_9->bssid, VAR_2);
 } else
  FUNC_1(VAR_7->ap_addr.sa_data);

 FUNC_0("Getting WAP BSSID: %pM\n",
       VAR_7->ap_addr.sa_data);
 FUNC_5(&VAR_9->mutex);
 return 0;
}
