
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct station_del_parameters {int reason_code; int subtype; int mac; } ;
struct sk_buff {scalar_t__ data; } ;
struct qtnf_vif {TYPE_1__* mac; int vifid; } ;
struct qlink_cmd_del_sta {int reason_code; int subtype; int sta_addr; } ;
struct TYPE_2__ {int bus; int macid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct sk_buff* FUNC_5 (int ,int ,int ,int) ;
 int FUNC_6 (int ,struct sk_buff*) ;

int FUNC_7(struct qtnf_vif *VAR_2,
     struct station_del_parameters *VAR_3)
{
 struct sk_buff *VAR_4;
 struct qlink_cmd_del_sta *VAR_5;
 int VAR_6 = 0;

 VAR_4 = FUNC_5(VAR_2->mac->macid, VAR_2->vifid,
         VAR_1,
         sizeof(*VAR_5));
 if (!VAR_4)
  return -VAR_0;

 FUNC_3(VAR_2->mac->bus);

 VAR_5 = (struct qlink_cmd_del_sta *)VAR_4->data;

 if (VAR_3->mac)
  FUNC_2(VAR_5->sta_addr, VAR_3->mac);
 else
  FUNC_1(VAR_5->sta_addr);

 VAR_5->subtype = VAR_3->subtype;
 VAR_5->reason_code = FUNC_0(VAR_3->reason_code);

 VAR_6 = FUNC_6(VAR_2->mac->bus, VAR_4);
 if (VAR_6)
  goto out;

out:
 FUNC_4(VAR_2->mac->bus);

 return VAR_6;
}
