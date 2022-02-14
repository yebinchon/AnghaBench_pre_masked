
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef int u16 ;
struct nfp_flower_meta_tci {void* tci; int mask_id; void* nfp_flow_key_layer; } ;
struct flow_rule {int dummy; } ;
struct flow_match_vlan {TYPE_2__* mask; TYPE_1__* key; } ;
struct flow_cls_offload {int dummy; } ;
struct TYPE_4__ {int vlan_id; int vlan_priority; } ;
struct TYPE_3__ {int vlan_id; int vlan_priority; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int) ;
 struct flow_rule* FUNC_2 (struct flow_cls_offload*) ;
 scalar_t__ FUNC_3 (struct flow_rule*,int ) ;
 int FUNC_4 (struct flow_rule*,struct flow_match_vlan*) ;
 int FUNC_5 (struct nfp_flower_meta_tci*,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct nfp_flower_meta_tci *VAR_4,
       struct nfp_flower_meta_tci *VAR_5,
       struct flow_cls_offload *VAR_6, u8 VAR_7)
{
 struct flow_rule *VAR_8 = FUNC_2(VAR_6);
 u16 VAR_9;

 FUNC_5(VAR_4, 0, sizeof(struct nfp_flower_meta_tci));
 FUNC_5(VAR_5, 0, sizeof(struct nfp_flower_meta_tci));


 VAR_4->nfp_flow_key_layer = VAR_7;
 VAR_4->mask_id = ~0;

 VAR_5->nfp_flow_key_layer = VAR_7;
 VAR_5->mask_id = ~0;

 if (FUNC_3(VAR_8, VAR_0)) {
  struct flow_match_vlan VAR_10;

  FUNC_4(VAR_8, &VAR_10);

  VAR_9 = VAR_1;
  VAR_9 |= FUNC_0(VAR_2,
          VAR_10.key->vlan_priority) |
      FUNC_0(VAR_3,
          VAR_10.key->vlan_id);
  VAR_4->tci = FUNC_1(VAR_9);

  VAR_9 = VAR_1;
  VAR_9 |= FUNC_0(VAR_2,
          VAR_10.mask->vlan_priority) |
      FUNC_0(VAR_3,
          VAR_10.mask->vlan_id);
  VAR_5->tci = FUNC_1(VAR_9);
 }
}
