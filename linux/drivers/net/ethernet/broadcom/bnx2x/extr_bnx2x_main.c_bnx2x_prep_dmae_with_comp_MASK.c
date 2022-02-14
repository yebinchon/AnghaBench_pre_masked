
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dmae_command {int comp_val; int comp_addr_hi; int comp_addr_lo; int opcode; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bnx2x*,int ,int ,int,int ) ;
 int FUNC_3 (struct bnx2x*,int ) ;
 int FUNC_4 (struct dmae_command*,int ,int) ;
 int VAR_2 ;

void FUNC_5(struct bnx2x *VAR_3,
          struct dmae_command *VAR_4,
          u8 VAR_5, u8 VAR_6)
{
 FUNC_4(VAR_4, 0, sizeof(struct dmae_command));


 VAR_4->opcode = FUNC_2(VAR_3, VAR_5, VAR_6,
      1, VAR_0);


 VAR_4->comp_addr_lo = FUNC_1(FUNC_3(VAR_3, VAR_2));
 VAR_4->comp_addr_hi = FUNC_0(FUNC_3(VAR_3, VAR_2));
 VAR_4->comp_val = VAR_1;
}
