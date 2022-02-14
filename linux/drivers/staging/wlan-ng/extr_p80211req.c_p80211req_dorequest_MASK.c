
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wlandevice {scalar_t__ msdstate; int request_pending; int (* mlmerequest ) (struct wlandevice*,struct p80211msg*) ;int name; int netdev; } ;
struct p80211msg {scalar_t__ msgcode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct wlandevice*,struct p80211msg*) ;
 int FUNC_4 (struct wlandevice*,struct p80211msg*) ;
 scalar_t__ FUNC_5 (int,int *) ;

int FUNC_6(struct wlandevice *VAR_9, u8 *VAR_10)
{
 struct p80211msg *VAR_11 = (struct p80211msg *)VAR_10;


 if (!((VAR_9->msdstate == VAR_7 &&
        VAR_11->msgcode == VAR_2) ||
       VAR_9->msdstate == VAR_8 ||
       VAR_9->msdstate == VAR_6)) {
  return -VAR_4;
 }


 if (!FUNC_0(VAR_0) &&
     (VAR_11->msgcode != VAR_1)) {
  FUNC_2(VAR_9->netdev,
      "%s: only dot11req_mibget allowed for non-root.\n",
      VAR_9->name);
  return -VAR_5;
 }


 if (FUNC_5(1, &VAR_9->request_pending))
  return -VAR_3;




 FUNC_3(VAR_9, VAR_11);


 if (VAR_9->mlmerequest)
  VAR_9->mlmerequest(VAR_9, VAR_11);

 FUNC_1(1, &VAR_9->request_pending);
 return 0;
}
