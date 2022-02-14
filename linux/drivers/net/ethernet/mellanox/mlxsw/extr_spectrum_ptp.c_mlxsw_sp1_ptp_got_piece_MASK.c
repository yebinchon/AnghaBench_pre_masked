
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct sk_buff {int dummy; } ;
struct mlxsw_sp1_ptp_unmatched {scalar_t__ timestamp; struct sk_buff* skb; } ;
struct mlxsw_sp1_ptp_key {int ingress; int local_port; } ;
struct mlxsw_sp {TYPE_1__* ptp_state; } ;
struct TYPE_2__ {int unmatched_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mlxsw_sp*,struct sk_buff*,int ,int ,int *) ;
 int FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp1_ptp_unmatched*) ;
 struct mlxsw_sp1_ptp_unmatched* FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp1_ptp_key,int*) ;
 int FUNC_4 (struct mlxsw_sp*,struct mlxsw_sp1_ptp_unmatched*) ;
 int FUNC_5 (struct mlxsw_sp*,struct mlxsw_sp1_ptp_key,struct sk_buff*,scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct mlxsw_sp *VAR_1,
        struct mlxsw_sp1_ptp_key VAR_2,
        struct sk_buff *VAR_3, u64 VAR_4)
{
 struct mlxsw_sp1_ptp_unmatched *VAR_5;
 int VAR_6;
 int VAR_7;

 FUNC_6();

 FUNC_8(&VAR_1->ptp_state->unmatched_lock);

 VAR_5 = FUNC_3(VAR_1, VAR_2, &VAR_6);
 if (VAR_3 && VAR_5 && VAR_5->timestamp) {
  VAR_5->skb = VAR_3;
 } else if (VAR_4 && VAR_5 && VAR_5->skb) {
  VAR_5->timestamp = VAR_4;
 } else {



  if (VAR_6 < 100)
   VAR_7 = FUNC_5(VAR_1, VAR_2,
          VAR_3, VAR_4);
  else
   VAR_7 = -VAR_0;
  if (VAR_7 && VAR_3)
   FUNC_1(VAR_1, VAR_3,
          VAR_2.local_port,
          VAR_2.ingress, ((void*)0));
  VAR_5 = ((void*)0);
 }

 if (VAR_5) {
  VAR_7 = FUNC_4(VAR_1, VAR_5);
  FUNC_0(VAR_7);
 }

 FUNC_9(&VAR_1->ptp_state->unmatched_lock);

 if (VAR_5)
  FUNC_2(VAR_1, VAR_5);

 FUNC_7();
}
