
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {scalar_t__ iftype; } ;
struct qtnf_vif {int netdev; int vifid; TYPE_2__* mac; TYPE_1__ wdev; } ;
struct qlink_event_bss_leave {int reason; } ;
struct TYPE_4__ {int macid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,int *,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (char*,int ,int ,...) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct qtnf_vif *VAR_4,
       const struct qlink_event_bss_leave *VAR_5,
       u16 VAR_6)
{
 if (FUNC_5(VAR_6 < sizeof(*VAR_5))) {
  FUNC_4("VIF%u.%u: payload is too short (%u < %zu)\n",
         VAR_4->mac->macid, VAR_4->vifid, VAR_6,
         sizeof(struct qlink_event_bss_leave));
  return -VAR_0;
 }

 if (VAR_4->wdev.iftype != VAR_3) {
  FUNC_4("VIF%u.%u: BSS_LEAVE event when not in STA mode\n",
         VAR_4->mac->macid, VAR_4->vifid);
  return -VAR_1;
 }

 FUNC_3("VIF%u.%u: disconnected\n", VAR_4->mac->macid, VAR_4->vifid);

 FUNC_0(VAR_4->netdev, FUNC_1(VAR_5->reason),
         ((void*)0), 0, 0, VAR_2);
 FUNC_2(VAR_4->netdev);

 return 0;
}
