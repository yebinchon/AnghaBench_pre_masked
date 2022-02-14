
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rvu {int dummy; } ;
struct npc_kpu_profile_cam {int state; int state_mask; int dp0; int dp0_mask; int dp1; int dp1_mask; int dp2; int dp2_mask; } ;
struct npc_kpu_cam {int state; int dp0_data; int dp1_data; int dp2_data; int member_0; } ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (struct rvu*,int,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct rvu *VAR_0, int VAR_1,
         struct npc_kpu_profile_cam *VAR_2,
         int VAR_3, int VAR_4)
{
 struct npc_kpu_cam VAR_5 = {0};
 struct npc_kpu_cam VAR_6 = {0};

 VAR_6 = VAR_2->state & VAR_2->state_mask;
 VAR_6 = VAR_2->dp0 & VAR_2->dp0_mask;
 VAR_6 = VAR_2->dp1 & VAR_2->dp1_mask;
 VAR_6 = VAR_2->dp2 & VAR_2->dp2_mask;

 VAR_5 = ~VAR_2->state & VAR_2->state_mask;
 VAR_5 = ~VAR_2->dp0 & VAR_2->dp0_mask;
 VAR_5 = ~VAR_2->dp1 & VAR_2->dp1_mask;
 VAR_5 = ~VAR_2->dp2 & VAR_2->dp2_mask;

 FUNC_1(VAR_0, VAR_1,
      FUNC_0(VAR_3, VAR_4, 0), *(u64 *)&VAR_5);
 FUNC_1(VAR_0, VAR_1,
      FUNC_0(VAR_3, VAR_4, 1), *(u64 *)&VAR_6);
}
