
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct ieee80211_hdr {int* addr1; int addr2; } ;
struct TYPE_8__ {scalar_t__ iw_mode; int wds_type; TYPE_6__* ap; TYPE_1__* dev; int bssid; } ;
typedef TYPE_2__ local_info_t ;
struct TYPE_9__ {scalar_t__ autom_ap_wds; } ;
struct TYPE_7__ {int name; int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,char*,int ,char*,...) ;
 int VAR_8 ;
 int FUNC_1 (int*,int ) ;
 scalar_t__ FUNC_2 (TYPE_6__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 struct net_device* FUNC_5 (TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_6(local_info_t *VAR_9, struct ieee80211_hdr *VAR_10, u16 VAR_11,
      struct net_device **VAR_12)
{


 if ((VAR_11 & (VAR_5 | VAR_4)) !=
     (VAR_5 | VAR_4) &&
     (VAR_9->iw_mode != VAR_7 || !(VAR_11 & VAR_5)))
  return 0;



 if (!FUNC_1(VAR_10->addr1, VAR_9->dev->dev_addr) &&
     (VAR_10->addr1[0] != 0xff || VAR_10->addr1[1] != 0xff ||
      VAR_10->addr1[2] != 0xff || VAR_10->addr1[3] != 0xff ||
      VAR_10->addr1[4] != 0xff || VAR_10->addr1[5] != 0xff)) {

  FUNC_0(VAR_1, "%s: received WDS frame with "
         "not own or broadcast %s=%pM\n",
         VAR_9->dev->name,
         VAR_11 & VAR_4 ? "RA" : "BSSID",
         VAR_10->addr1);
  return -1;
 }


 *VAR_12 = FUNC_5(VAR_9, VAR_10->addr2);
 if (*VAR_12 == ((void*)0) && VAR_11 & VAR_4 &&
     (VAR_9->iw_mode != VAR_6 ||
      !(VAR_9->wds_type & VAR_3) ||
      FUNC_4(VAR_10->addr2, VAR_9->bssid, VAR_2) != 0)) {


  FUNC_0(VAR_0, "%s: received WDS[4 addr] frame "
         "from unknown TA=%pM\n",
         VAR_9->dev->name, VAR_10->addr2);
  if (VAR_9->ap && VAR_9->ap->autom_ap_wds)
   FUNC_3(VAR_9, VAR_10->addr2, VAR_8);
  return -1;
 }

 if (*VAR_12 && !(VAR_11 & VAR_4) && VAR_9->ap &&
     FUNC_2(VAR_9->ap, VAR_10->addr2)) {





  *VAR_12 = ((void*)0);
 }

 return 0;
}
