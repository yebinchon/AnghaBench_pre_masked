
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_tunnel_key {int dummy; } ;
struct ip_tunnel_info {struct ip_tunnel_key key; } ;
struct flow_action_entry {struct ip_tunnel_info* tunnel; } ;
struct bnxt_tc_actions {int flags; struct ip_tunnel_key tun_encap_key; } ;
struct bnxt {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ip_tunnel_info const*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct bnxt *VAR_3,
        struct bnxt_tc_actions *VAR_4,
        const struct flow_action_entry *VAR_5)
{
 const struct ip_tunnel_info *VAR_6 = VAR_5->tunnel;
 const struct ip_tunnel_key *VAR_7 = &VAR_6->key;

 if (FUNC_0(VAR_6) != VAR_0) {
  FUNC_1(VAR_3->dev, "only IPv4 tunnel-encap is supported");
  return -VAR_2;
 }

 VAR_4->tun_encap_key = *VAR_7;
 VAR_4->flags |= VAR_1;
 return 0;
}
