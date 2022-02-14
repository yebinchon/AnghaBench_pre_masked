
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct wlandevice {scalar_t__ msdstate; int (* mlmerequest ) (struct wlandevice*,struct p80211msg*) ;} ;
struct wiphy {int dummy; } ;
struct TYPE_6__ {int legacy; } ;
struct station_info {int filled; int signal; TYPE_2__ txrate; } ;
struct TYPE_8__ {int data; } ;
struct TYPE_7__ {int data; } ;
struct TYPE_5__ {int status; int data; } ;
struct p80211msg_lnxreq_commsquality {TYPE_4__ level; TYPE_3__ txrate; TYPE_1__ dbm; int msgcode; } ;
struct p80211msg {int dummy; } ;
struct net_device {struct wlandevice* ml_priv; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct station_info*,int ,int) ;
 int FUNC_2 (struct wlandevice*,struct p80211msg*) ;

__attribute__((used)) static int FUNC_3(struct wiphy *VAR_7, struct net_device *VAR_8,
         const u8 *VAR_9, struct station_info *VAR_10)
{
 struct wlandevice *VAR_11 = VAR_8->ml_priv;
 struct p80211msg_lnxreq_commsquality VAR_12;
 int VAR_13;

 FUNC_1(VAR_10, 0, sizeof(*VAR_10));

 if (!VAR_11 || (VAR_11->msdstate != VAR_6))
  return -VAR_1;


 VAR_12.msgcode = VAR_0;
 VAR_12.dbm.data = VAR_5;
 VAR_12.dbm.status = VAR_4;


 if (!VAR_11->mlmerequest)
  return -VAR_1;

 VAR_13 = VAR_11->mlmerequest(VAR_11, (struct p80211msg *)&VAR_12);

 if (VAR_13 == 0) {
  VAR_10->txrate.legacy = VAR_12.txrate.data;
  VAR_10->filled |= FUNC_0(VAR_3);
  VAR_10->signal = VAR_12.level.data;
  VAR_10->filled |= FUNC_0(VAR_2);
 }

 return VAR_13;
}
