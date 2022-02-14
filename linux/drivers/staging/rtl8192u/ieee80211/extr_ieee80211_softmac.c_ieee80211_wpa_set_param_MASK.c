
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u32 ;
struct ieee80211_security {void* enabled; int level; int flags; } ;
struct ieee80211_device {int wpax_type_set; int wpax_suitlist_lock; void* wpax_type_notify; void* ieee802_1x; void* privacy_invoked; int dev; int (* set_security ) (int ,struct ieee80211_security*) ;void* drop_unencrypted; void* tkip_countermeasures; } ;


 int VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ieee80211_device*,void*) ;
 int FUNC_1 (struct ieee80211_device*,void*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,struct ieee80211_security*) ;

__attribute__((used)) static int FUNC_6(struct ieee80211_device *VAR_5, u8 VAR_6, u32 VAR_7)
{
 int VAR_8 = 0;
 unsigned long VAR_9;

 switch (VAR_6) {
 case 128:
  VAR_8 = FUNC_0(VAR_5, VAR_7);
  break;

 case 130:
  VAR_5->tkip_countermeasures = VAR_7;
  break;

 case 133: {
  struct ieee80211_security VAR_10 = {
   .flags = VAR_1,
   .enabled = VAR_7,
  };
  VAR_5->drop_unencrypted = VAR_7;



  if (!VAR_7) {
   VAR_10.flags |= VAR_2;
   VAR_10.level = VAR_3;
  } else {
   VAR_10.flags |= VAR_2;
   VAR_10.level = VAR_4;
  }
  if (VAR_5->set_security)
   VAR_5->set_security(VAR_5->dev, &VAR_10);
  break;
 }

 case 131:
  VAR_5->privacy_invoked = VAR_7;
  break;

 case 134:
  VAR_8 = FUNC_1(VAR_5, VAR_7);
  break;

 case 132:
  VAR_5->ieee802_1x = VAR_7;
  break;
 case 129:

  FUNC_3(&VAR_5->wpax_suitlist_lock, VAR_9);
  VAR_5->wpax_type_set = 1;
  VAR_5->wpax_type_notify = VAR_7;
  FUNC_4(&VAR_5->wpax_suitlist_lock, VAR_9);
  break;

 default:
  FUNC_2("Unknown WPA param: %d\n", VAR_6);
  VAR_8 = -VAR_0;
 }

 return VAR_8;
}
