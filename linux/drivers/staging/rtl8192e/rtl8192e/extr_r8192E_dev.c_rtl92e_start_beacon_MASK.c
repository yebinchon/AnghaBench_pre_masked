
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct rtllib_network {int beacon_interval; } ;
struct r8192_priv {TYPE_1__* rtllib; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct rtllib_network current_network; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ,int) ;
 int FUNC_3 (struct net_device*,int ,int) ;
 scalar_t__ FUNC_4 (struct net_device*) ;

void FUNC_5(struct net_device *VAR_8)
{
 struct r8192_priv *VAR_9 = (struct r8192_priv *)FUNC_4(VAR_8);
 struct rtllib_network *VAR_10 = &VAR_9->rtllib->current_network;
 u16 VAR_11 = 0;
 u16 VAR_12 = 6;
 u16 VAR_13 = 0xf;

 FUNC_0(VAR_8);

 FUNC_3(VAR_8, VAR_0, 2);

 FUNC_3(VAR_8, VAR_4, VAR_10->beacon_interval);
 FUNC_3(VAR_8, VAR_2, 10);
 FUNC_3(VAR_8, VAR_1, 256);

 FUNC_2(VAR_8, VAR_3, 100);

 VAR_11 |= VAR_12<<VAR_6;
 VAR_11 |= VAR_13<<VAR_7;
 FUNC_3(VAR_8, VAR_5, VAR_11);
 FUNC_1(VAR_8);
}
