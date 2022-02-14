
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct qtnf_vif {TYPE_1__* mac; int vifid; } ;
struct qlink_cmd_set_def_mgmt_key {int key_index; } ;
struct TYPE_2__ {int bus; int macid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int ,struct sk_buff*) ;

int FUNC_4(struct qtnf_vif *VAR_2, u8 VAR_3)
{
 struct sk_buff *VAR_4;
 struct qlink_cmd_set_def_mgmt_key *VAR_5;
 int VAR_6 = 0;

 VAR_4 = FUNC_2(VAR_2->mac->macid, VAR_2->vifid,
         VAR_1,
         sizeof(*VAR_5));
 if (!VAR_4)
  return -VAR_0;

 FUNC_0(VAR_2->mac->bus);

 VAR_5 = (struct qlink_cmd_set_def_mgmt_key *)VAR_4->data;
 VAR_5->key_index = VAR_3;

 VAR_6 = FUNC_3(VAR_2->mac->bus, VAR_4);
 if (VAR_6)
  goto out;

out:
 FUNC_1(VAR_2->mac->bus);

 return VAR_6;
}
