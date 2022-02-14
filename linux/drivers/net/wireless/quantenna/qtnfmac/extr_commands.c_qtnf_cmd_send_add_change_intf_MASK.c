
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct qtnf_vif {TYPE_3__* mac; int mac_addr; int vifid; } ;
struct TYPE_5__ {int * mac_addr; } ;
struct qlink_resp_manage_intf {TYPE_2__ intf_info; } ;
struct TYPE_4__ {int use4addr; int mac_addr; void* if_type; } ;
struct qlink_cmd_manage_intf {TYPE_1__ intf_info; } ;
typedef enum qlink_cmd_type { ____Placeholder_qlink_cmd_type } qlink_cmd_type ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
struct TYPE_6__ {int bus; int macid; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (char*,int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct sk_buff* FUNC_7 (int ,int ,int,int) ;
 int FUNC_8 (int ,struct sk_buff*,struct sk_buff**,int,int *) ;

__attribute__((used)) static int FUNC_9(struct qtnf_vif *VAR_4,
      enum nl80211_iftype VAR_5,
      int VAR_6,
      u8 *VAR_7,
      enum qlink_cmd_type VAR_8)
{
 struct sk_buff *VAR_9, *VAR_10 = ((void*)0);
 struct qlink_cmd_manage_intf *VAR_11;
 const struct qlink_resp_manage_intf *VAR_12;
 int VAR_13 = 0;

 VAR_9 = FUNC_7(VAR_4->mac->macid, VAR_4->vifid,
         VAR_8,
         sizeof(*VAR_11));
 if (!VAR_9)
  return -VAR_1;

 FUNC_5(VAR_4->mac->bus);

 VAR_11 = (struct qlink_cmd_manage_intf *)VAR_9->data;
 VAR_11->intf_info.use4addr = VAR_6;

 switch (VAR_5) {
 case 129:
  VAR_11->intf_info.if_type = FUNC_1(VAR_2);
  break;
 case 128:
  VAR_11->intf_info.if_type = FUNC_1(VAR_3);
  break;
 default:
  FUNC_4("VIF%u.%u: unsupported type %d\n", VAR_4->mac->macid,
         VAR_4->vifid, VAR_5);
  VAR_13 = -VAR_0;
  goto out;
 }

 if (VAR_7)
  FUNC_3(VAR_11->intf_info.mac_addr, VAR_7);
 else
  FUNC_2(VAR_11->intf_info.mac_addr);

 VAR_13 = FUNC_8(VAR_4->mac->bus, VAR_9, &VAR_10,
           sizeof(*VAR_12), ((void*)0));
 if (VAR_13)
  goto out;

 VAR_12 = (const struct qlink_resp_manage_intf *)VAR_10->data;
 FUNC_3(VAR_4->mac_addr, VAR_12->intf_info.mac_addr);

out:
 FUNC_6(VAR_4->mac->bus);
 FUNC_0(VAR_10);

 return VAR_13;
}
