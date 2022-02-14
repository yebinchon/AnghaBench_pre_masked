
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct host_func_stats {int dummy; } ;
struct dmae_command {int dst_addr_lo; int len; int comp_val; void* comp_addr_hi; void* comp_addr_lo; scalar_t__ dst_addr_hi; void* src_addr_hi; void* src_addr_lo; int opcode; } ;
struct bnx2x {int func_stx; scalar_t__ executer_idx; struct dmae_command stats_dmae; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct bnx2x*,int ,int ,int,int ) ;
 scalar_t__* FUNC_4 (struct bnx2x*,int ) ;
 int FUNC_5 (struct bnx2x*,scalar_t__*) ;
 scalar_t__* VAR_4 ;
 int FUNC_6 (struct dmae_command*,int ,int) ;
 scalar_t__* VAR_5 ;

__attribute__((used)) static void FUNC_7(struct bnx2x *VAR_6)
{
 struct dmae_command *VAR_7 = &VAR_6->stats_dmae;
 u32 *VAR_8 = FUNC_4(VAR_6, VAR_8);


 if (!VAR_6->func_stx) {
  FUNC_0("BUG!\n");
  return;
 }

 VAR_6->executer_idx = 0;
 FUNC_6(VAR_7, 0, sizeof(struct dmae_command));

 VAR_7->opcode = FUNC_3(VAR_6, VAR_3, VAR_2,
      1, VAR_0);
 VAR_7->src_addr_lo = FUNC_2(FUNC_5(VAR_6, VAR_4));
 VAR_7->src_addr_hi = FUNC_1(FUNC_5(VAR_6, VAR_4));
 VAR_7->dst_addr_lo = VAR_6->func_stx >> 2;
 VAR_7->dst_addr_hi = 0;
 VAR_7->len = sizeof(struct host_func_stats) >> 2;
 VAR_7->comp_addr_lo = FUNC_2(FUNC_5(VAR_6, VAR_8));
 VAR_7->comp_addr_hi = FUNC_1(FUNC_5(VAR_6, VAR_8));
 VAR_7->comp_val = VAR_1;

 *VAR_8 = 0;
}
