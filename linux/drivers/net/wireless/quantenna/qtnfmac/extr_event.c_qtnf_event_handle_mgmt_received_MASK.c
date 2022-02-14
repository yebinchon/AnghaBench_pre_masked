
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct qtnf_vif {int wdev; TYPE_2__* netdev; int vifid; TYPE_1__* mac; } ;
struct qlink_event_rxmgmt {scalar_t__ frame_data; int sig_dbm; int freq; int flags; } ;
struct ieee80211_hdr_3addr {int addr2; int frame_control; } ;
typedef enum nl80211_rxmgmt_flags { ____Placeholder_nl80211_rxmgmt_flags } nl80211_rxmgmt_flags ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int macid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int ,scalar_t__,int const,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int const,int ,int ) ;
 int FUNC_4 (char*,int ,int ,int,size_t const) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct qtnf_vif *VAR_3,
    const struct qlink_event_rxmgmt *VAR_4,
    u16 VAR_5)
{
 const size_t VAR_6 = sizeof(*VAR_4) +
          sizeof(struct ieee80211_hdr_3addr);
 const struct ieee80211_hdr_3addr *VAR_7 = (void *)VAR_4->frame_data;
 const u16 VAR_8 = VAR_5 - sizeof(*VAR_4);
 enum nl80211_rxmgmt_flags VAR_9 = 0;

 if (FUNC_5(VAR_5 < VAR_6)) {
  FUNC_4("VIF%u.%u: payload is too short (%u < %zu)\n",
         VAR_3->mac->macid, VAR_3->vifid, VAR_5, VAR_6);
  return -VAR_0;
 }

 if (FUNC_2(VAR_4->flags) & VAR_2)
  VAR_9 |= VAR_1;

 FUNC_3("%s LEN:%u FC:%.4X SA:%pM\n", VAR_3->netdev->name, VAR_8,
   FUNC_1(VAR_7->frame_control), VAR_7->addr2);

 FUNC_0(&VAR_3->wdev, FUNC_2(VAR_4->freq), VAR_4->sig_dbm,
    VAR_4->frame_data, VAR_8, VAR_9);

 return 0;
}
