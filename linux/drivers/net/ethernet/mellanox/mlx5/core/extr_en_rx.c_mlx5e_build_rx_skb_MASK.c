
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int mark; int protocol; int mac_len; } ;
struct net_device {int features; } ;
struct mlx5e_rq_stats {int removed_vlan_packets; int lro_bytes; int lro_packets; int packets; } ;
struct mlx5e_rq {int ix; int clock; int tstamp; struct net_device* netdev; struct mlx5e_rq_stats* stats; } ;
struct mlx5_cqe64 {int ml_path; int sop_drop_qpn; int vlan_info; int srqn; } ;
struct TYPE_4__ {int hwtstamp; } ;
struct TYPE_3__ {int gso_size; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct mlx5_cqe64*) ;
 int FUNC_5 (struct sk_buff*,struct net_device*) ;
 int FUNC_6 (struct mlx5_cqe64*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct mlx5e_rq*,struct sk_buff*) ;
 int FUNC_11 (struct net_device*,struct mlx5_cqe64*,struct mlx5e_rq*,struct sk_buff*,int) ;
 int FUNC_12 (struct sk_buff*,struct mlx5_cqe64*,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct mlx5_cqe64*,struct sk_buff*) ;
 int FUNC_15 (struct net_device*,struct sk_buff*,int *) ;
 TYPE_2__* FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*,int ) ;
 TYPE_1__* FUNC_18 (struct sk_buff*) ;
 scalar_t__ FUNC_19 (int) ;

__attribute__((used)) static inline void FUNC_20(struct mlx5_cqe64 *VAR_5,
          u32 VAR_6,
          struct mlx5e_rq *VAR_7,
          struct sk_buff *VAR_8)
{
 u8 VAR_9 = FUNC_3(VAR_5->srqn) >> 24;
 struct mlx5e_rq_stats *VAR_10 = VAR_7->stats;
 struct net_device *VAR_11 = VAR_7->netdev;

 VAR_8->mac_len = VAR_0;





 if (VAR_9 > 1) {
  FUNC_12(VAR_8, VAR_5, VAR_6);
  FUNC_18(VAR_8)->gso_size = FUNC_0(VAR_6, VAR_9);



  VAR_10->packets += VAR_9 - 1;
  VAR_10->lro_packets++;
  VAR_10->lro_bytes += VAR_6;
 }

 if (FUNC_19(FUNC_13(VAR_7->tstamp)))
  FUNC_16(VAR_8)->hwtstamp =
    FUNC_9(VAR_7->clock, FUNC_6(VAR_5));

 FUNC_17(VAR_8, VAR_7->ix);

 if (FUNC_8(VAR_11->features & VAR_4))
  FUNC_14(VAR_5, VAR_8);

 if (FUNC_4(VAR_5)) {
  FUNC_1(VAR_8, FUNC_7(VAR_1),
           FUNC_2(VAR_5->vlan_info));
  VAR_10->removed_vlan_packets++;
 }

 VAR_8->mark = FUNC_3(VAR_5->sop_drop_qpn) & VAR_3;

 FUNC_11(VAR_11, VAR_5, VAR_7, VAR_8, !!VAR_9);

 if (FUNC_19(VAR_5->ml_path & VAR_2))
  FUNC_10(VAR_7, VAR_8);

 VAR_8->protocol = FUNC_5(VAR_8, VAR_11);
}
