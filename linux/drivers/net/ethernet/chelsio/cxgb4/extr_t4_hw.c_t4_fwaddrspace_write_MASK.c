
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {void* val; void* addr; } ;
struct TYPE_4__ {TYPE_1__ addrval; } ;
struct fw_ldst_cmd {TYPE_2__ u; void* cycles_to_len16; void* op_to_addrspace; } ;
struct adapter {int dummy; } ;
typedef int c ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct fw_ldst_cmd) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct fw_ldst_cmd*,int ,int) ;
 int FUNC_5 (struct adapter*,unsigned int,struct fw_ldst_cmd*,int,int *) ;

int FUNC_6(struct adapter *VAR_4, unsigned int VAR_5,
     u32 VAR_6, u32 VAR_7)
{
 u32 VAR_8;
 struct fw_ldst_cmd VAR_9;

 FUNC_4(&VAR_9, 0, sizeof(VAR_9));
 VAR_8 = FUNC_1(VAR_2);
 VAR_9.op_to_addrspace = FUNC_3(FUNC_0(VAR_3) |
     VAR_0 |
     VAR_1 |
     VAR_8);
 VAR_9.cycles_to_len16 = FUNC_3(FUNC_2(VAR_9));
 VAR_9.u.addrval.addr = FUNC_3(VAR_6);
 VAR_9.u.addrval.val = FUNC_3(VAR_7);

 return FUNC_5(VAR_4, VAR_5, &VAR_9, sizeof(VAR_9), ((void*)0));
}
