
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct rtllib_network {int beacon_interval; scalar_t__ bssid; } ;
struct r8192_priv {int basic_rate; TYPE_1__* rtllib; int dot11CurrentPreambleMode; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ iw_mode; struct rtllib_network current_network; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct net_device*,int*) ;
 int FUNC_1 (struct net_device*,int ,int) ;
 int FUNC_2 (struct net_device*,scalar_t__,int ) ;
 int FUNC_3 (struct net_device*,scalar_t__,int) ;
 struct r8192_priv* FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_11)
{

 struct r8192_priv *VAR_12 = FUNC_4(VAR_11);
 struct rtllib_network *VAR_13;
 u16 VAR_14 = 0, VAR_15 = 6, VAR_16 = 0xf;
 u16 VAR_17 = 0;

 VAR_13 = &VAR_12->rtllib->current_network;
 FUNC_0(VAR_11, &VAR_17);
 VAR_12->dot11CurrentPreambleMode = VAR_10;
 VAR_12->basic_rate = VAR_17 &= 0x15f;
 FUNC_3(VAR_11, VAR_8, *(u16 *)VAR_13->bssid);
 FUNC_2(VAR_11, VAR_8 + 2, *(u32 *)(VAR_13->bssid + 2));

 if (VAR_12->rtllib->iw_mode == VAR_9) {
  FUNC_3(VAR_11, VAR_0, 2);
  FUNC_3(VAR_11, VAR_1, 256);
  FUNC_3(VAR_11, VAR_4, VAR_13->beacon_interval);
  FUNC_3(VAR_11, VAR_2, 10);
  FUNC_1(VAR_11, VAR_3, 100);

  VAR_14 |= (VAR_15<<VAR_6);
  VAR_14 |= VAR_16<<VAR_7;

  FUNC_3(VAR_11, VAR_5, VAR_14);
 }
}
