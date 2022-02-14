
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nfp_tun_pre_tun_rule {int port_idx; int vlan_tci; int flags; } ;
struct nfp_flower_priv {int pre_tun_rule_cnt; } ;
struct TYPE_2__ {int port_idx; int vlan_tci; } ;
struct nfp_fl_payload {TYPE_1__ pre_tun_rule; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nfp_tun_pre_tun_rule*,int ,int) ;
 int FUNC_2 (struct nfp_app*,int ,int,unsigned char*,int ) ;

int FUNC_3(struct nfp_app *VAR_3,
         struct nfp_fl_payload *VAR_4)
{
 struct nfp_flower_priv *VAR_5 = VAR_3->priv;
 struct nfp_tun_pre_tun_rule VAR_6;
 u32 VAR_7 = 0;
 int VAR_8;

 FUNC_1(&VAR_6, 0, sizeof(struct nfp_tun_pre_tun_rule));

 VAR_7 |= VAR_2;
 VAR_6.flags = FUNC_0(VAR_7);
 VAR_6.vlan_tci = VAR_4->pre_tun_rule.vlan_tci;
 VAR_6.port_idx = VAR_4->pre_tun_rule.port_idx;

 VAR_8 = FUNC_2(VAR_3, VAR_1,
           sizeof(struct nfp_tun_pre_tun_rule),
           (unsigned char *)&VAR_6, VAR_0);
 if (VAR_8)
  return VAR_8;

 VAR_5->pre_tun_rule_cnt--;

 return 0;
}
