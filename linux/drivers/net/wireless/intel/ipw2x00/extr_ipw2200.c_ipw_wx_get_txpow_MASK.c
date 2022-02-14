
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fixed; int disabled; int value; int flags; } ;
union iwreq_data {TYPE_1__ power; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw_priv {int status; int mutex; int tx_power; } ;


 int FUNC_0 (char*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ipw_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2,
       struct iw_request_info *VAR_3,
       union iwreq_data *VAR_4, char *VAR_5)
{
 struct ipw_priv *VAR_6 = FUNC_1(VAR_2);
 FUNC_2(&VAR_6->mutex);
 VAR_4->power.value = VAR_6->tx_power;
 VAR_4->power.fixed = 1;
 VAR_4->power.flags = VAR_0;
 VAR_4->power.disabled = (VAR_6->status & VAR_1) ? 1 : 0;
 FUNC_3(&VAR_6->mutex);

 FUNC_0("GET TX Power -> %s %d\n",
       VAR_4->power.disabled ? "OFF" : "ON", VAR_4->power.value);

 return 0;
}
