
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct qtnf_vif {TYPE_1__* mac; int vifid; } ;
struct qlink_cmd_frame_tx {void* flags; void* freq; int cookie; } ;
struct TYPE_2__ {int bus; int macid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ,size_t) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct sk_buff* FUNC_5 (int ,int ,int ,int) ;
 int FUNC_6 (int ,struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int const*,size_t) ;

int FUNC_8(struct qtnf_vif *VAR_4, u32 VAR_5, u16 VAR_6,
   u16 VAR_7, const u8 *VAR_8, size_t VAR_9)
{
 struct sk_buff *VAR_10;
 struct qlink_cmd_frame_tx *VAR_11;
 int VAR_12;

 if (sizeof(*VAR_11) + VAR_9 > VAR_3) {
  FUNC_2("VIF%u.%u: frame is too big: %zu\n", VAR_4->mac->macid,
   VAR_4->vifid, VAR_9);
  return -VAR_0;
 }

 VAR_10 = FUNC_5(VAR_4->mac->macid, VAR_4->vifid,
         VAR_2,
         sizeof(*VAR_11));
 if (!VAR_10)
  return -VAR_1;

 FUNC_3(VAR_4->mac->bus);

 VAR_11 = (struct qlink_cmd_frame_tx *)VAR_10->data;
 VAR_11->cookie = FUNC_1(VAR_5);
 VAR_11->freq = FUNC_0(VAR_7);
 VAR_11->flags = FUNC_0(VAR_6);

 if (VAR_9 && VAR_8)
  FUNC_7(VAR_10, VAR_8, VAR_9);

 VAR_12 = FUNC_6(VAR_4->mac->bus, VAR_10);
 if (VAR_12)
  goto out;

out:
 FUNC_4(VAR_4->mac->bus);

 return VAR_12;
}
