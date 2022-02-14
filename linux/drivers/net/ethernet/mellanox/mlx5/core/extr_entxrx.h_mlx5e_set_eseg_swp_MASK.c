
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct mlx5e_swp_spec {scalar_t__ l3_proto; scalar_t__ l4_proto; scalar_t__ tun_l3_proto; int tun_l4_proto; scalar_t__ is_tun; } ;
struct mlx5_wqe_eth_seg {int swp_outer_l3_offset; int swp_outer_l4_offset; int swp_inner_l3_offset; int swp_inner_l4_offset; int swp_flags; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static inline void
FUNC_5(struct sk_buff *VAR_5, struct mlx5_wqe_eth_seg *VAR_6,
     struct mlx5e_swp_spec *VAR_7)
{

 VAR_6->swp_outer_l3_offset = FUNC_3(VAR_5) / 2;
 if (VAR_7->l3_proto == FUNC_0(VAR_0))
  VAR_6->swp_flags |= VAR_3;
 if (VAR_7->l4_proto) {
  VAR_6->swp_outer_l4_offset = FUNC_4(VAR_5) / 2;
  if (VAR_7->l4_proto == 128)
   VAR_6->swp_flags |= VAR_4;
 }

 if (VAR_7->is_tun) {
  VAR_6->swp_inner_l3_offset = FUNC_1(VAR_5) / 2;
  if (VAR_7->tun_l3_proto == FUNC_0(VAR_0))
   VAR_6->swp_flags |= VAR_1;
 } else {
  VAR_6->swp_inner_l3_offset = FUNC_3(VAR_5) / 2;
  if (VAR_7->l3_proto == FUNC_0(VAR_0))
   VAR_6->swp_flags |= VAR_1;
 }
 switch (VAR_7->tun_l4_proto) {
 case 128:
  VAR_6->swp_flags |= VAR_2;

 case 129:
  VAR_6->swp_inner_l4_offset = FUNC_2(VAR_5) / 2;
  break;
 }
}
