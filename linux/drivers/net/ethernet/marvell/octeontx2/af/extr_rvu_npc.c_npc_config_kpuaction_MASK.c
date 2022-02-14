
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rvu {int dummy; } ;
struct npc_kpu_profile_action {int shift; int right; int mask; int offset; int ptr_advance; int flags; int ltype; int lid; int next_state; int parse_done; int cap_ena; int bypass_count; int dp2_offset; int dp1_offset; int dp0_offset; int errcode; int errlev; } ;
struct npc_kpu_action1 {int dp2_offset; int dp1_offset; int dp0_offset; int errcode; int errlev; int member_0; } ;
struct npc_kpu_action0 {int var_len_shift; int var_len_right; int var_len_mask; int var_len_offset; int ptr_advance; int capture_flags; int capture_ltype; int capture_lid; int next_state; int parse_done; int capture_ena; int byp_count; int member_0; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct rvu*,int,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct rvu *VAR_0, int VAR_1,
     struct npc_kpu_profile_action *VAR_2,
     int VAR_3, int VAR_4, bool VAR_5)
{
 struct npc_kpu_action0 VAR_6 = {0};
 struct npc_kpu_action1 VAR_7 = {0};
 u64 VAR_8;

 VAR_7 = VAR_2->errlev;
 VAR_7 = VAR_2->errcode;
 VAR_7 = VAR_2->dp0_offset;
 VAR_7 = VAR_2->dp1_offset;
 VAR_7 = VAR_2->dp2_offset;

 if (VAR_5)
  VAR_8 = FUNC_3(VAR_4);
 else
  VAR_8 = FUNC_1(VAR_3, VAR_4);

 FUNC_4(VAR_0, VAR_1, VAR_8, *(u64 *)&VAR_7);

 VAR_6 = VAR_2->bypass_count;
 VAR_6 = VAR_2->cap_ena;
 VAR_6 = VAR_2->parse_done;
 VAR_6 = VAR_2->next_state;
 VAR_6 = VAR_2->lid;
 VAR_6 = VAR_2->ltype;
 VAR_6 = VAR_2->flags;
 VAR_6 = VAR_2->ptr_advance;
 VAR_6 = VAR_2->offset;
 VAR_6 = VAR_2->mask;
 VAR_6 = VAR_2->right;
 VAR_6 = VAR_2->shift;

 if (VAR_5)
  VAR_8 = FUNC_2(VAR_4);
 else
  VAR_8 = FUNC_0(VAR_3, VAR_4);

 FUNC_4(VAR_0, VAR_1, VAR_8, *(u64 *)&VAR_6);
}
