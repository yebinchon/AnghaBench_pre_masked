
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct neighbour {int nud_state; int lock; int ha; TYPE_7__* tbl; int primary_key; TYPE_5__* ops; int dev; } ;
struct mlx5e_priv {int mdev; } ;
struct TYPE_13__ {int dst_ip; int family; int dev; } ;
struct mlx5e_encap_entry {int encap_size; char* encap_header; struct net_device* out_dev; int flags; int pkt_reformat; int reformat_type; int h_dest; struct net_device* route_dev; TYPE_6__ m_neigh; TYPE_4__* tunnel; TYPE_1__* tun_info; } ;
struct ipv6hdr {int hop_limit; int nexthdr; int saddr; int daddr; } ;
struct TYPE_9__ {int src; int dst; } ;
struct TYPE_10__ {TYPE_2__ ipv6; } ;
struct ip_tunnel_key {int ttl; int tos; TYPE_3__ u; int label; } ;
struct flowi6 {int saddr; int daddr; int flowlabel; } ;
struct TYPE_14__ {int key_len; } ;
struct TYPE_12__ {int family; } ;
struct TYPE_11__ {int (* calc_hlen ) (struct mlx5e_encap_entry*) ;} ;
struct TYPE_8__ {struct ip_tunnel_key key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (char*,struct net_device*,struct mlx5e_encap_entry*,int ) ;
 int FUNC_6 (struct ipv6hdr*,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (struct net_device*) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (int,int ) ;
 int VAR_9 ;
 int FUNC_11 (int *,int ,int ) ;
 int FUNC_12 (int ,char*,int,int) ;
 int FUNC_13 (int ,int ,int,char*,int ) ;
 int FUNC_14 (char*,int *,struct mlx5e_encap_entry*) ;
 int FUNC_15 (int ,struct mlx5e_encap_entry*) ;
 int FUNC_16 (int ,struct mlx5e_encap_entry*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct mlx5e_priv*,struct net_device*,struct net_device**,struct net_device**,struct flowi6*,struct neighbour**,int*) ;
 int FUNC_19 (struct neighbour*,int *) ;
 int FUNC_20 (struct neighbour*) ;
 int FUNC_21 (struct net_device*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (struct mlx5e_encap_entry*) ;

int FUNC_25(struct mlx5e_priv *VAR_10,
        struct net_device *VAR_11,
        struct mlx5e_encap_entry *VAR_12)
{
 int VAR_13 = FUNC_1(VAR_10->mdev, VAR_9);
 const struct ip_tunnel_key *VAR_14 = &VAR_12->tun_info->key;
 struct net_device *VAR_15, *VAR_16;
 struct neighbour *VAR_17 = ((void*)0);
 struct flowi6 VAR_18 = {};
 struct ipv6hdr *VAR_19;
 int VAR_20;
 char *VAR_21;
 u8 VAR_22, VAR_23;
 int VAR_24;

 VAR_23 = VAR_14->ttl;

 VAR_18 = FUNC_7(FUNC_3(VAR_14->tos), VAR_14->label);
 VAR_18 = VAR_14->u.ipv6.dst;
 VAR_18 = VAR_14->u.ipv6.src;

 VAR_24 = FUNC_18(VAR_10, VAR_11, &VAR_15, &VAR_16,
          &VAR_18, &VAR_17, &VAR_23);
 if (VAR_24)
  return VAR_24;

 VAR_20 =
  (FUNC_8(VAR_16) ? VAR_8 : VAR_2) +
  sizeof(struct ipv6hdr) +
  VAR_12->tunnel->calc_hlen(VAR_12);

 if (VAR_13 < VAR_20) {
  FUNC_12(VAR_10->mdev, "encap size %d too big, max supported is %d\n",
          VAR_20, VAR_13);
  return -VAR_1;
 }

 VAR_21 = FUNC_10(VAR_20, VAR_4);
 if (!VAR_21)
  return -VAR_0;




 VAR_12->m_neigh.dev = VAR_17->dev;
 VAR_12->m_neigh.family = VAR_17->ops->family;
 FUNC_11(&VAR_12->m_neigh.dst_ip, VAR_17->primary_key, VAR_17->tbl->key_len);
 VAR_12->out_dev = VAR_15;
 VAR_12->route_dev = VAR_16;






 VAR_24 = FUNC_15(FUNC_21(VAR_15), VAR_12);
 if (VAR_24)
  goto free_encap;

 FUNC_22(&VAR_17->lock);
 VAR_22 = VAR_17->nud_state;
 FUNC_4(VAR_12->h_dest, VAR_17->ha);
 FUNC_23(&VAR_17->lock);


 VAR_19 = (struct ipv6hdr *)FUNC_5(VAR_21, VAR_16, VAR_12,
       VAR_3);


 FUNC_6(VAR_19, VAR_14->tos, 0);

 VAR_19->hop_limit = VAR_23;
 VAR_19->daddr = VAR_18;
 VAR_19->saddr = VAR_18;


 VAR_24 = FUNC_14((char *)VAR_19 + sizeof(struct ipv6hdr),
      &VAR_19->nexthdr, VAR_12);
 if (VAR_24)
  goto destroy_neigh_entry;

 VAR_12->encap_size = VAR_20;
 VAR_12->encap_header = VAR_21;

 if (!(VAR_22 & VAR_7)) {
  FUNC_19(VAR_17, ((void*)0));



  goto out;
 }

 VAR_12->pkt_reformat = FUNC_13(VAR_10->mdev,
           VAR_12->reformat_type,
           VAR_20, VAR_21,
           VAR_6);
 if (FUNC_0(VAR_12->pkt_reformat)) {
  VAR_24 = FUNC_2(VAR_12->pkt_reformat);
  goto destroy_neigh_entry;
 }

 VAR_12->flags |= VAR_5;
 FUNC_17(FUNC_21(VAR_15));
 FUNC_20(VAR_17);
 return VAR_24;

destroy_neigh_entry:
 FUNC_16(FUNC_21(VAR_12->out_dev), VAR_12);
free_encap:
 FUNC_9(VAR_21);
out:
 if (VAR_17)
  FUNC_20(VAR_17);
 return VAR_24;
}
