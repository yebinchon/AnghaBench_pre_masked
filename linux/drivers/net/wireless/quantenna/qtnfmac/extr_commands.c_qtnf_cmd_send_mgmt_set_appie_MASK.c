
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct qtnf_vif {TYPE_1__* mac; int vifid; } ;
struct qlink_cmd {int dummy; } ;
struct TYPE_2__ {int bus; int macid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (char*,int ,int ,int ,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct sk_buff* FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (int ,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int ,int const*,size_t) ;

int FUNC_6(struct qtnf_vif *VAR_4, u8 VAR_5,
     const u8 *VAR_6, size_t VAR_7)
{
 struct sk_buff *VAR_8;
 int VAR_9;

 if (VAR_7 > VAR_3) {
  FUNC_0("VIF%u.%u: %u frame is too big: %zu\n", VAR_4->mac->macid,
   VAR_4->vifid, VAR_5, VAR_7);
  return -VAR_0;
 }

 VAR_8 = FUNC_3(VAR_4->mac->macid, VAR_4->vifid,
         VAR_2,
         sizeof(struct qlink_cmd));
 if (!VAR_8)
  return -VAR_1;

 FUNC_5(VAR_8, VAR_5, VAR_6, VAR_7);

 FUNC_1(VAR_4->mac->bus);
 VAR_9 = FUNC_4(VAR_4->mac->bus, VAR_8);
 if (VAR_9)
  goto out;

out:
 FUNC_2(VAR_4->mac->bus);

 return VAR_9;
}
