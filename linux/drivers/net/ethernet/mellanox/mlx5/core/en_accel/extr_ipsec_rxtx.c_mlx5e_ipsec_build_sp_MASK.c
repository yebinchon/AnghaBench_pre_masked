
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct xfrm_state {int dummy; } ;
struct xfrm_offload {int status; int proto; int flags; } ;
struct sk_buff {int dummy; } ;
struct sec_path {int olen; int len; struct xfrm_state** xvec; } ;
struct net_device {int dummy; } ;
struct mlx5e_priv {TYPE_4__* ipsec; } ;
struct TYPE_5__ {int nexthdr; int sa_handle; } ;
struct TYPE_6__ {TYPE_1__ rx; } ;
struct mlx5e_ipsec_metadata {int syndrome; TYPE_2__ content; } ;
struct TYPE_7__ {int ipsec_rx_drop_syndrome; int ipsec_rx_drop_sadb_miss; int ipsec_rx_drop_sp_alloc; } ;
struct TYPE_8__ {TYPE_3__ sw_stats; int no_trailer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct xfrm_state* FUNC_3 (TYPE_4__*,int ) ;
 struct mlx5e_priv* FUNC_4 (struct net_device*) ;
 struct sec_path* FUNC_5 (struct sk_buff*) ;
 struct sec_path* FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int) ;
 struct xfrm_offload* FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static inline struct xfrm_state *
FUNC_9(struct net_device *VAR_5, struct sk_buff *VAR_6,
       struct mlx5e_ipsec_metadata *VAR_7)
{
 struct mlx5e_priv *VAR_8 = FUNC_4(VAR_5);
 struct xfrm_offload *VAR_9;
 struct xfrm_state *VAR_10;
 struct sec_path *VAR_11;
 u32 VAR_12;

 VAR_11 = FUNC_5(VAR_6);
 if (FUNC_7(!VAR_11)) {
  FUNC_0(&VAR_8->ipsec->sw_stats.ipsec_rx_drop_sp_alloc);
  return ((void*)0);
 }

 VAR_12 = FUNC_1(VAR_7->content.rx.sa_handle);
 VAR_10 = FUNC_3(VAR_8->ipsec, VAR_12);
 if (FUNC_7(!VAR_10)) {
  FUNC_0(&VAR_8->ipsec->sw_stats.ipsec_rx_drop_sadb_miss);
  return ((void*)0);
 }

 VAR_11 = FUNC_6(VAR_6);
 VAR_11->xvec[VAR_11->len++] = VAR_10;
 VAR_11->olen++;

 VAR_9 = FUNC_8(VAR_6);
 VAR_9->flags = VAR_0;
 switch (VAR_7->syndrome) {
 case 128:
  VAR_9->status = VAR_2;
  if (FUNC_2(VAR_8->ipsec->no_trailer)) {
   VAR_9->flags |= VAR_4;
   VAR_9->proto = VAR_7->content.rx.nexthdr;
  }
  break;
 case 130:
  VAR_9->status = VAR_3;
  break;
 case 129:
  VAR_9->status = VAR_1;
  break;
 default:
  FUNC_0(&VAR_8->ipsec->sw_stats.ipsec_rx_drop_syndrome);
  return ((void*)0);
 }
 return VAR_10;
}
