
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfp_flower_ipv4_gre_tun {int ip_ext; int ipv4; void* tun_flags; int tun_key; void* ethertype; } ;
struct flow_rule {int dummy; } ;
struct flow_match_enc_keyid {TYPE_2__* mask; TYPE_1__* key; } ;
struct flow_cls_offload {int dummy; } ;
struct TYPE_4__ {int keyid; } ;
struct TYPE_3__ {int keyid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 struct flow_rule* FUNC_1 (struct flow_cls_offload*) ;
 int FUNC_2 (struct flow_rule*,struct flow_match_enc_keyid*) ;
 scalar_t__ FUNC_3 (struct flow_rule*,int ) ;
 int FUNC_4 (struct nfp_flower_ipv4_gre_tun*,int ,int) ;
 int FUNC_5 (int *,int *,struct flow_cls_offload*) ;
 int FUNC_6 (int *,int *,struct flow_cls_offload*) ;

__attribute__((used)) static void
FUNC_7(struct nfp_flower_ipv4_gre_tun *VAR_3,
    struct nfp_flower_ipv4_gre_tun *VAR_4,
    struct flow_cls_offload *VAR_5)
{
 struct flow_rule *VAR_6 = FUNC_1(VAR_5);

 FUNC_4(VAR_3, 0, sizeof(struct nfp_flower_ipv4_gre_tun));
 FUNC_4(VAR_4, 0, sizeof(struct nfp_flower_ipv4_gre_tun));


 VAR_3->ethertype = FUNC_0(VAR_0);
 VAR_4->ethertype = FUNC_0(~0);

 if (FUNC_3(VAR_6, VAR_1)) {
  struct flow_match_enc_keyid VAR_7;

  FUNC_2(VAR_6, &VAR_7);
  VAR_3->tun_key = VAR_7.key->keyid;
  VAR_4->tun_key = VAR_7.mask->keyid;

  VAR_3->tun_flags = FUNC_0(VAR_2);
  VAR_4->tun_flags = FUNC_0(VAR_2);
 }

 FUNC_6(&VAR_3->ipv4, &VAR_4->ipv4, VAR_5);
 FUNC_5(&VAR_3->ip_ext, &VAR_4->ip_ext, VAR_5);
}
