
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct udphdr {int dummy; } ;
struct sk_buff {scalar_t__ len; scalar_t__ encapsulation; } ;
struct mlx5e_txqsq {struct mlx5e_sq_stats* stats; } ;
struct mlx5e_sq_stats {int tso_bytes; int tso_packets; int tso_inner_bytes; int tso_inner_packets; } ;
struct TYPE_2__ {int gso_type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static inline u16
FUNC_5(struct mlx5e_txqsq *VAR_1, struct sk_buff *VAR_2)
{
 struct mlx5e_sq_stats *VAR_3 = VAR_1->stats;
 u16 VAR_4;

 if (VAR_2->encapsulation) {
  VAR_4 = FUNC_1(VAR_2) + FUNC_0(VAR_2);
  VAR_3->tso_inner_packets++;
  VAR_3->tso_inner_bytes += VAR_2->len - VAR_4;
 } else {
  if (FUNC_2(VAR_2)->gso_type & VAR_0)
   VAR_4 = FUNC_3(VAR_2) + sizeof(struct udphdr);
  else
   VAR_4 = FUNC_3(VAR_2) + FUNC_4(VAR_2);
  VAR_3->tso_packets++;
  VAR_3->tso_bytes += VAR_2->len - VAR_4;
 }

 return VAR_4;
}
