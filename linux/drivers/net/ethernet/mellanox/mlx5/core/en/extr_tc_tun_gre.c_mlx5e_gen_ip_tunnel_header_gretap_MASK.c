
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mlx5e_encap_entry {TYPE_1__* tun_info; } ;
struct ip_tunnel_key {int tun_flags; int tun_id; } ;
struct gre_base_hdr {int flags; int protocol; } ;
typedef int __u8 ;
typedef int __be32 ;
struct TYPE_2__ {struct ip_tunnel_key key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlx5e_encap_entry*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(char VAR_6[],
          __u8 *VAR_7,
          struct mlx5e_encap_entry *VAR_8)
{
 const struct ip_tunnel_key *VAR_9 = &VAR_8->tun_info->key;
 struct gre_base_hdr *VAR_10 = (struct gre_base_hdr *)(VAR_6);
 __be32 VAR_11 = FUNC_3(VAR_9->tun_id);
 int VAR_12;

 *VAR_7 = VAR_2;


 if (VAR_9->tun_flags & (VAR_3 | VAR_5))
  return -VAR_0;

 VAR_10->protocol = FUNC_1(VAR_1);


 VAR_12 = FUNC_2(VAR_8);
 VAR_10->flags = FUNC_0(VAR_9->tun_flags);
 if (VAR_9->tun_flags & VAR_4) {
  __be32 *VAR_13 = (__be32 *)(((u8 *)VAR_10) + VAR_12 - 4);
  *VAR_13 = VAR_11;
 }

 return 0;
}
