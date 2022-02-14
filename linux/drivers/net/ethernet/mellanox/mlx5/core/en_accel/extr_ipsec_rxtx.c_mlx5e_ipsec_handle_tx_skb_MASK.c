
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ offload_handle; } ;
struct TYPE_7__ {int mode; } ;
struct xfrm_state {TYPE_4__ xso; TYPE_3__ props; } ;
struct xfrm_offload {int dummy; } ;
struct sk_buff {scalar_t__ protocol; } ;
struct sec_path {int len; } ;
struct net_device {int dummy; } ;
struct mlx5e_tx_wqe {int eth; } ;
struct mlx5e_priv {TYPE_2__* ipsec; } ;
struct mlx5e_ipsec_sa_entry {int (* set_iv_op ) (struct sk_buff*,struct xfrm_state*,struct xfrm_offload*) ;} ;
struct mlx5e_ipsec_metadata {int dummy; } ;
struct TYPE_5__ {int ipsec_tx_drop_metadata; int ipsec_tx_drop_trailer; int ipsec_tx_drop_not_ip; int ipsec_tx_drop_no_state; int ipsec_tx_drop_bundle; } ;
struct TYPE_6__ {TYPE_1__ sw_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mlx5e_ipsec_metadata*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 struct mlx5e_ipsec_metadata* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,struct xfrm_state*) ;
 int FUNC_6 (struct sk_buff*,struct mlx5e_ipsec_metadata*,struct xfrm_offload*) ;
 int FUNC_7 (struct sk_buff*,int *,int ,struct xfrm_offload*) ;
 struct mlx5e_priv* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct sk_buff*) ;
 struct sec_path* FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*,struct xfrm_state*,struct xfrm_offload*) ;
 scalar_t__ FUNC_12 (int) ;
 struct xfrm_state* FUNC_13 (struct sk_buff*) ;
 struct xfrm_offload* FUNC_14 (struct sk_buff*) ;

struct sk_buff *FUNC_15(struct net_device *VAR_2,
       struct mlx5e_tx_wqe *VAR_3,
       struct sk_buff *VAR_4)
{
 struct mlx5e_priv *VAR_5 = FUNC_8(VAR_2);
 struct xfrm_offload *VAR_6 = FUNC_14(VAR_4);
 struct mlx5e_ipsec_metadata *VAR_7;
 struct mlx5e_ipsec_sa_entry *VAR_8;
 struct xfrm_state *VAR_9;
 struct sec_path *VAR_10;

 if (!VAR_6)
  return VAR_4;

 VAR_10 = FUNC_10(VAR_4);
 if (FUNC_12(VAR_10->len != 1)) {
  FUNC_1(&VAR_5->ipsec->sw_stats.ipsec_tx_drop_bundle);
  goto drop;
 }

 VAR_9 = FUNC_13(VAR_4);
 if (FUNC_12(!VAR_9)) {
  FUNC_1(&VAR_5->ipsec->sw_stats.ipsec_tx_drop_no_state);
  goto drop;
 }

 if (FUNC_12(!VAR_9->xso.offload_handle ||
       (VAR_4->protocol != FUNC_2(VAR_0) &&
        VAR_4->protocol != FUNC_2(VAR_1)))) {
  FUNC_1(&VAR_5->ipsec->sw_stats.ipsec_tx_drop_not_ip);
  goto drop;
 }

 if (!FUNC_9(VAR_4))
  if (FUNC_12(FUNC_5(VAR_4, VAR_9))) {
   FUNC_1(&VAR_5->ipsec->sw_stats.ipsec_tx_drop_trailer);
   goto drop;
  }
 VAR_7 = FUNC_4(VAR_4);
 if (FUNC_0(VAR_7)) {
  FUNC_1(&VAR_5->ipsec->sw_stats.ipsec_tx_drop_metadata);
  goto drop;
 }
 FUNC_7(VAR_4, &VAR_3->eth, VAR_9->props.mode, VAR_6);
 VAR_8 = (struct mlx5e_ipsec_sa_entry *)VAR_9->xso.offload_handle;
 VAR_8->set_iv_op(VAR_4, VAR_9, VAR_6);
 FUNC_6(VAR_4, VAR_7, VAR_6);

 return VAR_4;

drop:
 FUNC_3(VAR_4);
 return ((void*)0);
}
