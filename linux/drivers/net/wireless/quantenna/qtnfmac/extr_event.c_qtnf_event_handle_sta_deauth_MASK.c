
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct qtnf_wmac {int macid; } ;
struct TYPE_2__ {scalar_t__ iftype; } ;
struct qtnf_vif {int netdev; int vifid; TYPE_1__ wdev; } ;
struct qlink_event_sta_deauth {int * sta_addr; int reason; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ,int const*,int) ;
 int FUNC_3 (char*,int ,int ,...) ;
 scalar_t__ FUNC_4 (struct qtnf_vif*,int const*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct qtnf_wmac *VAR_4, struct qtnf_vif *VAR_5,
        const struct qlink_event_sta_deauth *VAR_6,
        u16 VAR_7)
{
 const u8 *VAR_8;
 u16 VAR_9;

 if (FUNC_5(VAR_7 < sizeof(*VAR_6))) {
  FUNC_3("VIF%u.%u: payload is too short (%u < %zu)\n",
         VAR_4->macid, VAR_5->vifid, VAR_7,
         sizeof(struct qlink_event_sta_deauth));
  return -VAR_0;
 }

 if (VAR_5->wdev.iftype != VAR_3) {
  FUNC_3("VIF%u.%u: STA_DEAUTH event when not in AP mode\n",
         VAR_4->macid, VAR_5->vifid);
  return -VAR_1;
 }

 VAR_8 = VAR_6->sta_addr;
 VAR_9 = FUNC_1(VAR_6->reason);

 FUNC_2("VIF%u.%u: MAC:%pM reason:%x\n", VAR_4->macid, VAR_5->vifid,
   VAR_8, VAR_9);

 if (FUNC_4(VAR_5, VAR_8))
  FUNC_0(VAR_5->netdev, VAR_6->sta_addr,
     VAR_2);

 return 0;
}
