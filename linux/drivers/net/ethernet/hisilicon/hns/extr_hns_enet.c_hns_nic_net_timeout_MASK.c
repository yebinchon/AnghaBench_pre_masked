
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int watchdog_timeo; } ;
struct hns_nic_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hns_nic_priv*) ;
 int FUNC_1 (struct net_device*,char*,int) ;
 struct hns_nic_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2)
{
 struct hns_nic_priv *VAR_3 = FUNC_2(VAR_2);

 if (VAR_2->watchdog_timeo < VAR_1) {
  VAR_2->watchdog_timeo *= 2;
  FUNC_1(VAR_2, "watchdog_timo changed to %d.\n",
       VAR_2->watchdog_timeo);
 } else {
  VAR_2->watchdog_timeo = VAR_0;
  FUNC_0(VAR_3);
 }
}
