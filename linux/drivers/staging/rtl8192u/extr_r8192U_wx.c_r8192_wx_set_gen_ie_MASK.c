
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; } ;
union iwreq_data {TYPE_1__ data; } ;
struct r8192_priv {int wx_mutex; int ieee80211; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0,
     struct iw_request_info *VAR_1,
     union iwreq_data *VAR_2, char *VAR_3)
{
 int VAR_4 = 0;
 struct r8192_priv *VAR_5 = FUNC_0(VAR_0);

 FUNC_2(&VAR_5->wx_mutex);
 VAR_4 = FUNC_1(VAR_5->ieee80211, VAR_3, VAR_2->data.length);
 FUNC_3(&VAR_5->wx_mutex);
 return VAR_4;


}
