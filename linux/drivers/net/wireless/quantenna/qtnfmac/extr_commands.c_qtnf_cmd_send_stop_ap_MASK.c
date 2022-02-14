
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct qtnf_vif {TYPE_1__* mac; int vifid; } ;
struct qlink_cmd {int dummy; } ;
struct TYPE_2__ {int bus; int macid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int ,struct sk_buff*) ;

int FUNC_4(struct qtnf_vif *VAR_2)
{
 struct sk_buff *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(VAR_2->mac->macid, VAR_2->vifid,
         VAR_1,
         sizeof(struct qlink_cmd));
 if (!VAR_3)
  return -VAR_0;

 FUNC_0(VAR_2->mac->bus);
 VAR_4 = FUNC_3(VAR_2->mac->bus, VAR_3);
 if (VAR_4)
  goto out;

out:
 FUNC_1(VAR_2->mac->bus);

 return VAR_4;
}
