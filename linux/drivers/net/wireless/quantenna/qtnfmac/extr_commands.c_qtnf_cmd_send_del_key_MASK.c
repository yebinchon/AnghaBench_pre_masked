
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct qtnf_vif {TYPE_1__* mac; int vifid; } ;
struct qlink_cmd_del_key {int pairwise; int key_index; int addr; } ;
struct TYPE_2__ {int bus; int macid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct sk_buff* FUNC_4 (int ,int ,int ,int) ;
 int FUNC_5 (int ,struct sk_buff*) ;

int FUNC_6(struct qtnf_vif *VAR_2, u8 VAR_3, bool VAR_4,
     const u8 *VAR_5)
{
 struct sk_buff *VAR_6;
 struct qlink_cmd_del_key *VAR_7;
 int VAR_8 = 0;

 VAR_6 = FUNC_4(VAR_2->mac->macid, VAR_2->vifid,
         VAR_1,
         sizeof(*VAR_7));
 if (!VAR_6)
  return -VAR_0;

 FUNC_2(VAR_2->mac->bus);

 VAR_7 = (struct qlink_cmd_del_key *)VAR_6->data;

 if (VAR_5)
  FUNC_1(VAR_7->addr, VAR_5);
 else
  FUNC_0(VAR_7->addr);

 VAR_7->key_index = VAR_3;
 VAR_7->pairwise = VAR_4;

 VAR_8 = FUNC_5(VAR_2->mac->bus, VAR_6);
 if (VAR_8)
  goto out;

out:
 FUNC_3(VAR_2->mac->bus);

 return VAR_8;
}
