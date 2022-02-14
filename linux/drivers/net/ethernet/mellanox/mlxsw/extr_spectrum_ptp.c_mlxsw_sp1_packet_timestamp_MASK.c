
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct sk_buff {int dummy; } ;
struct mlxsw_sp1_ptp_key {int ingress; int local_port; } ;
struct mlxsw_sp {TYPE_1__* clock; } ;
struct TYPE_2__ {int lock; int tc; } ;


 int FUNC_0 (struct mlxsw_sp*,struct sk_buff*,int ,int ,struct skb_shared_hwtstamps*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(struct mlxsw_sp *VAR_0,
           struct mlxsw_sp1_ptp_key VAR_1,
           struct sk_buff *VAR_2,
           u64 VAR_3)
{
 struct skb_shared_hwtstamps VAR_4;
 u64 VAR_5;

 FUNC_2(&VAR_0->clock->lock);
 VAR_5 = FUNC_4(&VAR_0->clock->tc, VAR_3);
 FUNC_3(&VAR_0->clock->lock);

 VAR_4.hwtstamp = FUNC_1(VAR_5);
 FUNC_0(VAR_0, VAR_2,
        VAR_1.local_port, VAR_1.ingress, &VAR_4);
}
