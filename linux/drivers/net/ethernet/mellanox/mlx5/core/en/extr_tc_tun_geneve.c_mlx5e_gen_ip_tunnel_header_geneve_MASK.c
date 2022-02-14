
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udphdr {int dest; } ;
struct mlx5e_encap_entry {struct ip_tunnel_info* tun_info; } ;
struct TYPE_2__ {int tun_flags; int tun_id; int tp_dst; } ;
struct ip_tunnel_info {int options_len; TYPE_1__ key; } ;
struct genevehdr {int opt_len; int oam; int critical; int options; int proto_type; int vni; int ver; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct ip_tunnel_info const*) ;
 int FUNC_2 (struct genevehdr*,int ,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(char VAR_7[],
          __u8 *VAR_8,
          struct mlx5e_encap_entry *VAR_9)
{
 const struct ip_tunnel_info *VAR_10 = VAR_9->tun_info;
 struct udphdr *VAR_11 = (struct udphdr *)(VAR_7);
 struct genevehdr *VAR_12;

 VAR_12 = (struct genevehdr *)((char *)VAR_11 + sizeof(struct udphdr));

 *VAR_8 = VAR_2;

 VAR_11->dest = VAR_10->key.tp_dst;

 FUNC_2(VAR_12, 0, sizeof(*VAR_12));
 VAR_12->ver = VAR_3;
 VAR_12->opt_len = VAR_10->options_len / 4;
 VAR_12->oam = !!(VAR_10->key.tun_flags & VAR_6);
 VAR_12->critical = !!(VAR_10->key.tun_flags & VAR_4);
 FUNC_3(VAR_10->key.tun_id, VAR_12->vni);
 VAR_12->proto_type = FUNC_0(VAR_1);

 if (VAR_10->key.tun_flags & VAR_5) {
  if (!VAR_12->opt_len)
   return -VAR_0;
  FUNC_1(VAR_12->options, VAR_10);
 }

 return 0;
}
