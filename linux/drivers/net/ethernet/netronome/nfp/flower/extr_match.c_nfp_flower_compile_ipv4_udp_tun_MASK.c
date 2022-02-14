
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nfp_flower_ipv4_udp_tun {int ip_ext; int ipv4; void* tun_id; } ;
struct flow_rule {int dummy; } ;
struct flow_match_enc_keyid {TYPE_2__* mask; TYPE_1__* key; } ;
struct flow_cls_offload {int dummy; } ;
struct TYPE_4__ {int keyid; } ;
struct TYPE_3__ {int keyid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 struct flow_rule* FUNC_2 (struct flow_cls_offload*) ;
 int FUNC_3 (struct flow_rule*,struct flow_match_enc_keyid*) ;
 scalar_t__ FUNC_4 (struct flow_rule*,int ) ;
 int FUNC_5 (struct nfp_flower_ipv4_udp_tun*,int ,int) ;
 int FUNC_6 (int *,int *,struct flow_cls_offload*) ;
 int FUNC_7 (int *,int *,struct flow_cls_offload*) ;

__attribute__((used)) static void
FUNC_8(struct nfp_flower_ipv4_udp_tun *VAR_2,
    struct nfp_flower_ipv4_udp_tun *VAR_3,
    struct flow_cls_offload *VAR_4)
{
 struct flow_rule *VAR_5 = FUNC_2(VAR_4);

 FUNC_5(VAR_2, 0, sizeof(struct nfp_flower_ipv4_udp_tun));
 FUNC_5(VAR_3, 0, sizeof(struct nfp_flower_ipv4_udp_tun));

 if (FUNC_4(VAR_5, VAR_0)) {
  struct flow_match_enc_keyid VAR_6;
  u32 VAR_7;

  FUNC_3(VAR_5, &VAR_6);
  VAR_7 = FUNC_0(VAR_6.key->keyid) << VAR_1;
  VAR_2->tun_id = FUNC_1(VAR_7);
  VAR_7 = FUNC_0(VAR_6.mask->keyid) << VAR_1;
  VAR_3->tun_id = FUNC_1(VAR_7);
 }

 FUNC_7(&VAR_2->ipv4, &VAR_3->ipv4, VAR_4);
 FUNC_6(&VAR_2->ip_ext, &VAR_3->ip_ext, VAR_4);
}
