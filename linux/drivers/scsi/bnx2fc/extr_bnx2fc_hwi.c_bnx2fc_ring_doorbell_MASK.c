
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct b577xx_doorbell_set_prod {int prod; } ;
struct bnx2fc_rport {int sq_prod_idx; int sq_curr_toggle_bit; int ctx_base; struct b577xx_doorbell_set_prod sq_db; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(struct bnx2fc_rport *VAR_0)
{
 struct b577xx_doorbell_set_prod *VAR_1 = &VAR_0->sq_db;
 u32 VAR_2;

 FUNC_1();
 VAR_1->prod = VAR_0->sq_prod_idx |
    (VAR_0->sq_curr_toggle_bit << 15);
 VAR_2 = *((u32 *)VAR_1);
 FUNC_2(FUNC_0(VAR_2), VAR_0->ctx_base);

}
