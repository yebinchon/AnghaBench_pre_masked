
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vxlanhdr {int vx_vni; int vx_flags; } ;
struct udphdr {int dest; } ;
struct mlx5e_encap_entry {TYPE_1__* tun_info; } ;
struct ip_tunnel_key {int tp_dst; int tun_id; } ;
typedef int __u8 ;
typedef int __be32 ;
struct TYPE_2__ {struct ip_tunnel_key key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(char VAR_2[],
         __u8 *VAR_3,
         struct mlx5e_encap_entry *VAR_4)
{
 const struct ip_tunnel_key *VAR_5 = &VAR_4->tun_info->key;
 __be32 VAR_6 = FUNC_0(VAR_5->tun_id);
 struct udphdr *VAR_7 = (struct udphdr *)(VAR_2);
 struct vxlanhdr *VAR_8;

 VAR_8 = (struct vxlanhdr *)((char *)VAR_7 + sizeof(struct udphdr));
 *VAR_3 = VAR_0;

 VAR_7->dest = VAR_5->tp_dst;
 VAR_8->vx_flags = VAR_1;
 VAR_8->vx_vni = FUNC_1(VAR_6);

 return 0;
}
