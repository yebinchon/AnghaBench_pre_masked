
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ length; } ;
union iwreq_data {TYPE_2__ data; } ;
struct TYPE_3__ {int bPromiscuousOn; int bFilterSourceStationFrame; } ;
struct rtllib_device {TYPE_1__ IntelPromiscuousModeInfo; } ;
struct r8192_priv {int wx_mutex; struct rtllib_device* rtllib; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (char*,int,char*,int,int) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0,
           struct iw_request_info *VAR_1,
           union iwreq_data *VAR_2, char *VAR_3)
{
 struct r8192_priv *VAR_4 = FUNC_2(VAR_0);
 struct rtllib_device *VAR_5 = VAR_4->rtllib;

 FUNC_0(&VAR_4->wx_mutex);

 FUNC_3(VAR_3, 45, "PromiscuousMode:%d, FilterSrcSTAFrame:%d",
   VAR_5->IntelPromiscuousModeInfo.bPromiscuousOn,
   VAR_5->IntelPromiscuousModeInfo.bFilterSourceStationFrame);
 VAR_2->data.length = FUNC_4(VAR_3) + 1;

 FUNC_1(&VAR_4->wx_mutex);

 return 0;
}
