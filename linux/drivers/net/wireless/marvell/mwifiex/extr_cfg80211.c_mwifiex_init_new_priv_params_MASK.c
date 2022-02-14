
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int name; } ;
struct TYPE_2__ {int iftype; } ;
struct mwifiex_private {int bss_mode; void* bss_role; scalar_t__ bss_started; int netdev; TYPE_1__ wdev; struct mwifiex_adapter* adapter; } ;
struct mwifiex_adapter {int main_locked; int rx_locked; int rx_proc_lock; int main_proc_lock; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;





 int FUNC_0 (struct mwifiex_adapter*,int ,char*,int ,int) ;
 int FUNC_1 (struct mwifiex_private*) ;
 int FUNC_2 (struct mwifiex_private*,int ) ;
 int FUNC_3 (struct mwifiex_private*,struct net_device*,int,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_8(struct mwifiex_private *VAR_4,
        struct net_device *VAR_5,
        enum nl80211_iftype VAR_6)
{
 struct mwifiex_adapter *VAR_7 = VAR_4->adapter;
 unsigned long VAR_8;

 FUNC_1(VAR_4);

 VAR_4->bss_mode = VAR_6;
 VAR_4->wdev.iftype = VAR_6;

 FUNC_2(VAR_4, VAR_4->netdev);
 VAR_4->bss_started = 0;

 switch (VAR_6) {
 case 128:
 case 132:
  VAR_4->bss_role = VAR_2;
  break;
 case 130:
  VAR_4->bss_role = VAR_2;
  break;
 case 129:
  VAR_4->bss_role = VAR_3;
  break;
 case 131:
  VAR_4->bss_role = VAR_3;
  break;
 default:
  FUNC_0(VAR_7, VAR_1,
       "%s: changing to %d not supported\n",
       VAR_5->name, VAR_6);
  return -VAR_0;
 }

 FUNC_5(&VAR_7->main_proc_lock, VAR_8);
 VAR_7->main_locked = 0;
 FUNC_7(&VAR_7->main_proc_lock, VAR_8);

 FUNC_4(&VAR_7->rx_proc_lock);
 VAR_7->rx_locked = 0;
 FUNC_6(&VAR_7->rx_proc_lock);

 FUNC_3(VAR_4, VAR_5, 0, ((void*)0));

 return 0;
}
