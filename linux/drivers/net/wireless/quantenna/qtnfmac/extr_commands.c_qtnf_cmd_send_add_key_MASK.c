
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct qtnf_vif {TYPE_1__* mac; int vifid; } ;
struct qlink_cmd_add_key {int pairwise; int key_index; int cipher; int addr; } ;
struct key_params {scalar_t__ key_len; scalar_t__ seq_len; scalar_t__ seq; scalar_t__ key; int cipher; } ;
struct TYPE_2__ {int bus; int macid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct sk_buff* FUNC_5 (int ,int ,int ,int) ;
 int FUNC_6 (int ,struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int ,scalar_t__,scalar_t__) ;

int FUNC_8(struct qtnf_vif *VAR_4, u8 VAR_5, bool VAR_6,
     const u8 *VAR_7, struct key_params *VAR_8)
{
 struct sk_buff *VAR_9;
 struct qlink_cmd_add_key *VAR_10;
 int VAR_11 = 0;

 VAR_9 = FUNC_5(VAR_4->mac->macid, VAR_4->vifid,
         VAR_1,
         sizeof(*VAR_10));
 if (!VAR_9)
  return -VAR_0;

 FUNC_3(VAR_4->mac->bus);

 VAR_10 = (struct qlink_cmd_add_key *)VAR_9->data;

 if (VAR_7)
  FUNC_2(VAR_10->addr, VAR_7);
 else
  FUNC_1(VAR_10->addr);

 VAR_10->cipher = FUNC_0(VAR_8->cipher);
 VAR_10->key_index = VAR_5;
 VAR_10->pairwise = VAR_6;

 if (VAR_8->key && VAR_8->key_len > 0)
  FUNC_7(VAR_9, VAR_2,
      VAR_8->key,
      VAR_8->key_len);

 if (VAR_8->seq && VAR_8->seq_len > 0)
  FUNC_7(VAR_9, VAR_3,
      VAR_8->seq,
      VAR_8->seq_len);

 VAR_11 = FUNC_6(VAR_4->mac->bus, VAR_9);
 if (VAR_11)
  goto out;

out:
 FUNC_4(VAR_4->mac->bus);

 return VAR_11;
}
