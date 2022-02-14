
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct qtnf_vif {TYPE_1__* mac; int vifid; } ;
struct qlink_cmd_mgmt_frame_register {int do_register; int frame_type; } ;
struct TYPE_2__ {int bus; int macid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct sk_buff* FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (int ,struct sk_buff*) ;

int FUNC_5(struct qtnf_vif *VAR_2, u16 VAR_3, bool VAR_4)
{
 struct sk_buff *VAR_5;
 struct qlink_cmd_mgmt_frame_register *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_3(VAR_2->mac->macid, VAR_2->vifid,
         VAR_1,
         sizeof(*VAR_6));
 if (!VAR_5)
  return -VAR_0;

 FUNC_1(VAR_2->mac->bus);

 VAR_6 = (struct qlink_cmd_mgmt_frame_register *)VAR_5->data;
 VAR_6->frame_type = FUNC_0(VAR_3);
 VAR_6->do_register = VAR_4;

 VAR_7 = FUNC_4(VAR_2->mac->bus, VAR_5);
 if (VAR_7)
  goto out;

out:
 FUNC_2(VAR_2->mac->bus);

 return VAR_7;
}
