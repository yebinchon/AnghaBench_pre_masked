
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct qeth_card {TYPE_2__* gdev; } ;
struct net_if_token {int cssid; int ssid; int devnum; int iid; int chpid; int chid; } ;
struct mac_addr_lnid {int lnid; int mac; } ;
typedef int str ;
typedef enum qeth_an_event_type { ____Placeholder_qeth_an_event_type } qeth_an_event_type ;
struct TYPE_3__ {int kobj; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int *,int ,char**) ;
 int FUNC_1 (char*,int,char*,...) ;

__attribute__((used)) static void FUNC_2(struct qeth_card *VAR_4,
 enum qeth_an_event_type VAR_5,
 u8 VAR_6, struct net_if_token *VAR_7, struct mac_addr_lnid *VAR_8)
{
 char VAR_9[7][32];
 char *VAR_10[8];
 int VAR_11 = 0;

 switch (VAR_5) {
 case 129:
  FUNC_1(VAR_9[VAR_11], sizeof(VAR_9[VAR_11]), "BRIDGEDHOST=%s",
    (VAR_6 & VAR_1)
    ? "deregister" : "register");
  VAR_10[VAR_11] = VAR_9[VAR_11]; VAR_11++;
  if (VAR_6 & VAR_2) {
   FUNC_1(VAR_9[VAR_11], sizeof(VAR_9[VAR_11]), "VLAN=%d",
    VAR_8->lnid);
   VAR_10[VAR_11] = VAR_9[VAR_11]; VAR_11++;
  }
  if (VAR_6 & VAR_0) {
   FUNC_1(VAR_9[VAR_11], sizeof(VAR_9[VAR_11]), "MAC=%pM",
    VAR_8->mac);
   VAR_10[VAR_11] = VAR_9[VAR_11]; VAR_11++;
  }
  FUNC_1(VAR_9[VAR_11], sizeof(VAR_9[VAR_11]), "NTOK_BUSID=%x.%x.%04x",
   VAR_7->cssid, VAR_7->ssid, VAR_7->devnum);
  VAR_10[VAR_11] = VAR_9[VAR_11]; VAR_11++;
  FUNC_1(VAR_9[VAR_11], sizeof(VAR_9[VAR_11]), "NTOK_IID=%02x", VAR_7->iid);
  VAR_10[VAR_11] = VAR_9[VAR_11]; VAR_11++;
  FUNC_1(VAR_9[VAR_11], sizeof(VAR_9[VAR_11]), "NTOK_CHPID=%02x",
    VAR_7->chpid);
  VAR_10[VAR_11] = VAR_9[VAR_11]; VAR_11++;
  FUNC_1(VAR_9[VAR_11], sizeof(VAR_9[VAR_11]), "NTOK_CHID=%04x", VAR_7->chid);
  VAR_10[VAR_11] = VAR_9[VAR_11]; VAR_11++;
  break;
 case 130:
  FUNC_1(VAR_9[VAR_11], sizeof(VAR_9[VAR_11]), "BRIDGEDHOST=abort");
  VAR_10[VAR_11] = VAR_9[VAR_11]; VAR_11++;
  break;
 case 128:
  FUNC_1(VAR_9[VAR_11], sizeof(VAR_9[VAR_11]), "BRIDGEDHOST=reset");
  VAR_10[VAR_11] = VAR_9[VAR_11]; VAR_11++;
  break;
 }
 VAR_10[VAR_11] = ((void*)0);
 FUNC_0(&VAR_4->gdev->dev.kobj, VAR_3, VAR_10);
}
