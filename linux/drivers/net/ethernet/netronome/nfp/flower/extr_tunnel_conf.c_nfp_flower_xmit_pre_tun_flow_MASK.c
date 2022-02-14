
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfp_tun_pre_tun_rule {int port_idx; int vlan_tci; int host_ctx_id; } ;
struct nfp_tun_offloaded_mac {int index; } ;
struct nfp_flower_priv {scalar_t__ pre_tun_rule_cnt; } ;
struct TYPE_4__ {int port_idx; int vlan_tci; struct net_device* dev; } ;
struct TYPE_3__ {int host_ctx_id; } ;
struct nfp_fl_payload {TYPE_2__ pre_tun_rule; TYPE_1__ meta; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;
struct net_device {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nfp_tun_pre_tun_rule*,int ,int) ;
 int FUNC_2 (struct nfp_app*,int ,int,unsigned char*,int ) ;
 struct nfp_tun_offloaded_mac* FUNC_3 (struct nfp_app*,int ) ;

int FUNC_4(struct nfp_app *VAR_5,
     struct nfp_fl_payload *VAR_6)
{
 struct nfp_flower_priv *VAR_7 = VAR_5->priv;
 struct nfp_tun_offloaded_mac *VAR_8;
 struct nfp_tun_pre_tun_rule VAR_9;
 struct net_device *VAR_10;
 int VAR_11;

 if (VAR_7->pre_tun_rule_cnt == VAR_4)
  return -VAR_1;

 FUNC_1(&VAR_9, 0, sizeof(struct nfp_tun_pre_tun_rule));

 VAR_10 = VAR_6->pre_tun_rule.dev;
 VAR_9.vlan_tci = VAR_6->pre_tun_rule.vlan_tci;
 VAR_9.host_ctx_id = VAR_6->meta.host_ctx_id;





 VAR_8 = FUNC_3(VAR_5,
           VAR_10->dev_addr);
 if (!VAR_8)
  return -VAR_0;

 VAR_9.port_idx = FUNC_0(VAR_8->index);


 VAR_6->pre_tun_rule.vlan_tci = VAR_9.vlan_tci;
 VAR_6->pre_tun_rule.port_idx = VAR_9.port_idx;

 VAR_11 = FUNC_2(VAR_5, VAR_3,
           sizeof(struct nfp_tun_pre_tun_rule),
           (unsigned char *)&VAR_9, VAR_2);
 if (VAR_11)
  return VAR_11;

 VAR_7->pre_tun_rule_cnt++;

 return 0;
}
