
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct xfrm_offload {scalar_t__ proto; } ;
struct sk_buff {void* protocol; } ;
struct mlx5e_swp_spec {int is_tun; scalar_t__ tun_l4_proto; void* tun_l3_proto; void* l3_proto; } ;
struct mlx5_wqe_eth_seg {int dummy; } ;
struct TYPE_4__ {scalar_t__ protocol; } ;
struct TYPE_3__ {scalar_t__ nexthdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct mlx5_wqe_eth_seg*,struct mlx5e_swp_spec*) ;

__attribute__((used)) static void FUNC_4(struct sk_buff *VAR_4,
    struct mlx5_wqe_eth_seg *VAR_5, u8 VAR_6,
    struct xfrm_offload *VAR_7)
{
 struct mlx5e_swp_spec VAR_8 = {};
 VAR_8.l3_proto = VAR_4->protocol;
 VAR_8.is_tun = VAR_6 == VAR_3;
 if (VAR_8.is_tun) {
  if (VAR_7->proto == VAR_2) {
   VAR_8.tun_l3_proto = FUNC_0(VAR_1);
   VAR_8.tun_l4_proto = FUNC_2(VAR_4)->nexthdr;
  } else {
   VAR_8.tun_l3_proto = FUNC_0(VAR_0);
   VAR_8.tun_l4_proto = FUNC_1(VAR_4)->protocol;
  }
 } else {
  VAR_8.tun_l3_proto = VAR_4->protocol;
  VAR_8.tun_l4_proto = VAR_7->proto;
 }

 FUNC_3(VAR_4, VAR_5, &VAR_8);
}
