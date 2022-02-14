
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ipw2100_priv {int status; int wx_event_work; int security_work; int net_dev; TYPE_1__* ieee; int bssid; int essid; int essid_len; } ;
struct TYPE_2__ {int bssid; } ;


 int FUNC_0 (int,char*,int ,int ,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(struct ipw2100_priv *VAR_8, u32 VAR_9)
{
 FUNC_0(VAR_1 | VAR_2 | VAR_0,
    "disassociated: '%*pE' %pM\n", VAR_8->essid_len, VAR_8->essid,
    VAR_8->bssid);

 VAR_8->status &= ~(VAR_3 | VAR_4);

 if (VAR_8->status & VAR_7) {
  FUNC_1("Card is stopping itself, discard ASSN_LOST.\n");
  return;
 }

 FUNC_2(VAR_8->bssid);
 FUNC_2(VAR_8->ieee->bssid);

 FUNC_3(VAR_8->net_dev);
 FUNC_4(VAR_8->net_dev);

 if (!(VAR_8->status & VAR_5))
  return;

 if (VAR_8->status & VAR_6)
  FUNC_5(&VAR_8->security_work, 0);

 FUNC_5(&VAR_8->wx_event_work, 0);
}
