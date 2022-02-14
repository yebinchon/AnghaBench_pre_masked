
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sta_info {int flags; int users; } ;
struct net_device {int dummy; } ;
struct ieee80211_hdr {int addr2; } ;
typedef int reason ;
struct TYPE_4__ {TYPE_3__* ap; struct net_device* dev; } ;
typedef TYPE_1__ local_info_t ;
typedef int __le16 ;
struct TYPE_5__ {int sta_table_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct sta_info* FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct net_device*,int,char*,int,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(local_info_t *VAR_6,
       struct ieee80211_hdr *VAR_7)
{
 struct net_device *VAR_8 = VAR_6->dev;
 struct sta_info *VAR_9;
 __le16 VAR_10;

 FUNC_6(&VAR_6->ap->sta_table_lock);
 VAR_9 = FUNC_1(VAR_6->ap, VAR_7->addr2);
 if (VAR_9)
  FUNC_3(&VAR_9->users);
 FUNC_7(&VAR_6->ap->sta_table_lock);

 if (VAR_9 != ((void*)0) && (VAR_9->flags & VAR_5)) {
  FUNC_0(VAR_0, "ap_handle_dropped_data: STA is now okay?\n");
  FUNC_2(&VAR_9->users);
  return;
 }

 VAR_10 = FUNC_4(VAR_4);
 FUNC_5(VAR_8, VAR_1 |
    ((VAR_9 == ((void*)0) || !(VAR_9->flags & VAR_5)) ?
     VAR_2 : VAR_3),
    (char *) &VAR_10, sizeof(VAR_10), VAR_7->addr2, 0);

 if (VAR_9)
  FUNC_2(&VAR_9->users);
}
