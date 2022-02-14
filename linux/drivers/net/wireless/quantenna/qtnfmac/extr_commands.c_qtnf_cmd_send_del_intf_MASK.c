
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct TYPE_4__ {int iftype; } ;
struct qtnf_vif {TYPE_3__* mac; TYPE_1__ wdev; int vifid; } ;
struct TYPE_5__ {int mac_addr; void* if_type; } ;
struct qlink_cmd_manage_intf {TYPE_2__ intf_info; } ;
struct TYPE_6__ {int bus; int macid; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct sk_buff* FUNC_5 (int ,int ,int ,int) ;
 int FUNC_6 (int ,struct sk_buff*) ;

int FUNC_7(struct qtnf_vif *VAR_5)
{
 struct sk_buff *VAR_6;
 struct qlink_cmd_manage_intf *VAR_7;
 int VAR_8 = 0;

 VAR_6 = FUNC_5(VAR_5->mac->macid, VAR_5->vifid,
         VAR_2,
         sizeof(*VAR_7));
 if (!VAR_6)
  return -VAR_1;

 FUNC_3(VAR_5->mac->bus);

 VAR_7 = (struct qlink_cmd_manage_intf *)VAR_6->data;

 switch (VAR_5->wdev.iftype) {
 case 129:
  VAR_7->intf_info.if_type = FUNC_0(VAR_3);
  break;
 case 128:
  VAR_7->intf_info.if_type = FUNC_0(VAR_4);
  break;
 default:
  FUNC_2("VIF%u.%u: unsupported iftype %d\n", VAR_5->mac->macid,
   VAR_5->vifid, VAR_5->wdev.iftype);
  VAR_8 = -VAR_0;
  goto out;
 }

 FUNC_1(VAR_7->intf_info.mac_addr);

 VAR_8 = FUNC_6(VAR_5->mac->bus, VAR_6);
 if (VAR_8)
  goto out;

out:
 FUNC_4(VAR_5->mac->bus);
 return VAR_8;
}
