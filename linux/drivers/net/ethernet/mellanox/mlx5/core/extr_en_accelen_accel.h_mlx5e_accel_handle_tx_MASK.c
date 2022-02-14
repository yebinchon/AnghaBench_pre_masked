
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct mlx5e_txqsq {int state; } ;
struct mlx5e_tx_wqe {int dummy; } ;
struct TYPE_2__ {int gso_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (struct net_device*,struct mlx5e_tx_wqe*,struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct net_device*,struct mlx5e_txqsq*,struct sk_buff*,struct mlx5e_tx_wqe**,int *) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static inline struct sk_buff *
FUNC_7(struct sk_buff *VAR_3,
        struct mlx5e_txqsq *VAR_4,
        struct net_device *VAR_5,
        struct mlx5e_tx_wqe **VAR_6,
        u16 *VAR_7)
{
 if (FUNC_3(VAR_3) && FUNC_4(VAR_3)->gso_type & VAR_2)
  FUNC_2(VAR_3);

 return VAR_3;
}
