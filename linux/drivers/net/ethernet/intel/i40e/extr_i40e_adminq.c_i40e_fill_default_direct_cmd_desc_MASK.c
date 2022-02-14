
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i40e_aq_desc {void* flags; void* opcode; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (void*,int ,int) ;

void FUNC_2(struct i40e_aq_desc *VAR_1,
           u16 VAR_2)
{

 FUNC_1((void *)VAR_1, 0, sizeof(struct i40e_aq_desc));
 VAR_1->opcode = FUNC_0(VAR_2);
 VAR_1->flags = FUNC_0(VAR_0);
}
