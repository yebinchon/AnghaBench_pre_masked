
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


typedef int u32 ;
typedef int u16 ;
struct TYPE_13__ {int last_filter_id; } ;
struct TYPE_14__ {TYPE_6__ arfs; } ;
struct mlx5e_priv {TYPE_7__ fs; } ;
struct in6_addr {int dummy; } ;
struct TYPE_12__ {int dst; int src; } ;
struct TYPE_10__ {int dst; int src; } ;
struct TYPE_9__ {int dst; int src; } ;
struct TYPE_11__ {TYPE_3__ v6addrs; TYPE_2__ v4addrs; } ;
struct TYPE_8__ {scalar_t__ n_proto; int ip_proto; } ;
struct flow_keys {TYPE_5__ ports; TYPE_4__ addrs; TYPE_1__ basic; } ;
struct arfs_tuple {scalar_t__ etype; int dst_port; int src_port; int dst_ipv6; int src_ipv6; int dst_ipv4; int src_ipv4; int ip_proto; } ;
struct arfs_table {int dummy; } ;
struct arfs_rule {int filter_id; int hlist; int flow_id; struct arfs_tuple tuple; int arfs_work; int rxq; struct mlx5e_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct arfs_table*,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 struct arfs_rule* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *,int) ;

__attribute__((used)) static struct arfs_rule *FUNC_6(struct mlx5e_priv *VAR_4,
      struct arfs_table *VAR_5,
      const struct flow_keys *VAR_6,
      u16 VAR_7, u32 VAR_8)
{
 struct arfs_rule *VAR_9;
 struct arfs_tuple *VAR_10;

 VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return ((void*)0);

 VAR_9->priv = VAR_4;
 VAR_9->rxq = VAR_7;
 FUNC_0(&VAR_9->arfs_work, VAR_3);

 VAR_10 = &VAR_9->tuple;
 VAR_10->etype = VAR_6->basic.n_proto;
 VAR_10->ip_proto = VAR_6->basic.ip_proto;
 if (VAR_10->etype == FUNC_3(VAR_0)) {
  VAR_10->src_ipv4 = VAR_6->addrs.v4addrs.src;
  VAR_10->dst_ipv4 = VAR_6->addrs.v4addrs.dst;
 } else {
  FUNC_5(&VAR_10->src_ipv6, &VAR_6->addrs.v6addrs.src,
         sizeof(struct in6_addr));
  FUNC_5(&VAR_10->dst_ipv6, &VAR_6->addrs.v6addrs.dst,
         sizeof(struct in6_addr));
 }
 VAR_10->src_port = VAR_6->ports.src;
 VAR_10->dst_port = VAR_6->ports.dst;

 VAR_9->flow_id = VAR_8;
 VAR_9->filter_id = VAR_4->fs.arfs.last_filter_id++ % VAR_2;

 FUNC_2(&VAR_9->hlist,
         FUNC_1(VAR_5, VAR_10->src_port,
     VAR_10->dst_port));
 return VAR_9;
}
