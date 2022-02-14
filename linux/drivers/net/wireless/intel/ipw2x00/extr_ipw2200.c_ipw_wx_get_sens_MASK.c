
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value; scalar_t__ disabled; } ;
struct TYPE_4__ {int fixed; int value; } ;
union iwreq_data {TYPE_1__ power; TYPE_2__ sens; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw_priv {int mutex; int roaming_threshold; } ;


 int FUNC_0 (char*,char*,int ) ;
 struct ipw_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0,
       struct iw_request_info *VAR_1,
       union iwreq_data *VAR_2, char *VAR_3)
{
 struct ipw_priv *VAR_4 = FUNC_1(VAR_0);
 FUNC_2(&VAR_4->mutex);
 VAR_2->sens.fixed = 1;
 VAR_2->sens.value = VAR_4->roaming_threshold;
 FUNC_3(&VAR_4->mutex);

 FUNC_0("GET roaming threshold -> %s %d\n",
       VAR_2->power.disabled ? "OFF" : "ON", VAR_2->power.value);

 return 0;
}
