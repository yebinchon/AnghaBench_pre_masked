
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ingress; int local_port; } ;
struct mlxsw_sp1_ptp_unmatched {TYPE_1__ key; scalar_t__ skb; scalar_t__ timestamp; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp1_ptp_unmatched*,int ) ;
 int FUNC_1 (struct mlxsw_sp*,TYPE_1__,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct mlxsw_sp*,scalar_t__,int ,int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(struct mlxsw_sp *VAR_1,
          struct mlxsw_sp1_ptp_unmatched *VAR_2)
{
 if (VAR_2->skb && VAR_2->timestamp)
  FUNC_1(VAR_1, VAR_2->key,
        VAR_2->skb,
        VAR_2->timestamp);
 else if (VAR_2->skb)
  FUNC_2(VAR_1, VAR_2->skb,
         VAR_2->key.local_port,
         VAR_2->key.ingress, ((void*)0));
 FUNC_0(VAR_2, VAR_0);
}
