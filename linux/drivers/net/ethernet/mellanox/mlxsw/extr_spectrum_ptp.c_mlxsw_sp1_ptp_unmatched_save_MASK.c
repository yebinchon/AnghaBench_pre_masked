
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sk_buff {int dummy; } ;
struct mlxsw_sp_ptp_state {int unmatched_ht; scalar_t__ gc_cycle; } ;
struct mlxsw_sp1_ptp_key {int dummy; } ;
struct mlxsw_sp1_ptp_unmatched {int ht_node; scalar_t__ gc_cycle; int timestamp; struct sk_buff* skb; struct mlxsw_sp1_ptp_key key; } ;
struct mlxsw_sp {struct mlxsw_sp_ptp_state* ptp_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mlxsw_sp1_ptp_unmatched*) ;
 struct mlxsw_sp1_ptp_unmatched* FUNC_1 (int,int ) ;
 int VAR_4 ;
 int FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static int
FUNC_3(struct mlxsw_sp *VAR_5,
        struct mlxsw_sp1_ptp_key VAR_6,
        struct sk_buff *VAR_7,
        u64 VAR_8)
{
 int VAR_9 = VAR_3 / VAR_2;
 struct mlxsw_sp_ptp_state *VAR_10 = VAR_5->ptp_state;
 struct mlxsw_sp1_ptp_unmatched *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_1(sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->key = VAR_6;
 VAR_11->skb = VAR_7;
 VAR_11->timestamp = VAR_8;
 VAR_11->gc_cycle = VAR_5->ptp_state->gc_cycle + VAR_9;

 VAR_12 = FUNC_2(&VAR_10->unmatched_ht, &VAR_11->ht_node,
         VAR_4);
 if (VAR_12)
  FUNC_0(VAR_11);

 return VAR_12;
}
