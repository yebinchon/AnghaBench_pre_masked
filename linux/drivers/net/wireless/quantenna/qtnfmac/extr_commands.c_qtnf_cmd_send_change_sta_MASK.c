
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct station_parameters {int sta_flags_set; int sta_flags_mask; } ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_5__ {int iftype; } ;
struct qtnf_vif {TYPE_3__* mac; TYPE_2__ wdev; int vifid; } ;
struct TYPE_4__ {void* value; void* mask; } ;
struct qlink_cmd_change_sta {void* if_type; TYPE_1__ flag_update; int sta_addr; } ;
struct TYPE_6__ {int bus; int macid; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,int const*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct sk_buff* FUNC_6 (int ,int ,int ,int) ;
 int FUNC_7 (int ,struct sk_buff*) ;
 int FUNC_8 (int ) ;

int FUNC_9(struct qtnf_vif *VAR_5, const u8 *VAR_6,
        struct station_parameters *VAR_7)
{
 struct sk_buff *VAR_8;
 struct qlink_cmd_change_sta *VAR_9;
 int VAR_10 = 0;

 VAR_8 = FUNC_6(VAR_5->mac->macid, VAR_5->vifid,
         VAR_2,
         sizeof(*VAR_9));
 if (!VAR_8)
  return -VAR_1;

 FUNC_4(VAR_5->mac->bus);

 VAR_9 = (struct qlink_cmd_change_sta *)VAR_8->data;
 FUNC_2(VAR_9->sta_addr, VAR_6);
 VAR_9->flag_update.mask =
  FUNC_1(FUNC_8(VAR_7->sta_flags_mask));
 VAR_9->flag_update.value =
  FUNC_1(FUNC_8(VAR_7->sta_flags_set));

 switch (VAR_5->wdev.iftype) {
 case 129:
  VAR_9->if_type = FUNC_0(VAR_3);
  break;
 case 128:
  VAR_9->if_type = FUNC_0(VAR_4);
  break;
 default:
  FUNC_3("unsupported iftype %d\n", VAR_5->wdev.iftype);
  VAR_10 = -VAR_0;
  goto out;
 }

 VAR_10 = FUNC_7(VAR_5->mac->bus, VAR_8);
 if (VAR_10)
  goto out;

out:
 FUNC_5(VAR_5->mac->bus);

 return VAR_10;
}
