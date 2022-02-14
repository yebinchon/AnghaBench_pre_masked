
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef unsigned int u16 ;
struct TYPE_3__ {void* rval; void* raddr; void* paddr_mmd; } ;
struct TYPE_4__ {TYPE_1__ mdio; } ;
struct fw_ldst_cmd {TYPE_2__ u; void* cycles_to_len16; void* op_to_addrspace; } ;
struct adapter {int dummy; } ;
typedef int c ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;
 int FUNC_4 (struct fw_ldst_cmd) ;
 void* FUNC_5 (unsigned int) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (struct fw_ldst_cmd*,int ,int) ;
 int FUNC_8 (struct adapter*,unsigned int,struct fw_ldst_cmd*,int,int *) ;

int FUNC_9(struct adapter *VAR_4, unsigned int VAR_5, unsigned int VAR_6,
        unsigned int VAR_7, unsigned int VAR_8, u16 VAR_9)
{
 u32 VAR_10;
 struct fw_ldst_cmd VAR_11;

 FUNC_7(&VAR_11, 0, sizeof(VAR_11));
 VAR_10 = FUNC_1(VAR_2);
 VAR_11.op_to_addrspace = FUNC_6(FUNC_0(VAR_3) |
     VAR_0 | VAR_1 |
     VAR_10);
 VAR_11.cycles_to_len16 = FUNC_6(FUNC_4(VAR_11));
 VAR_11.u.mdio.paddr_mmd = FUNC_5(FUNC_3(VAR_6) |
      FUNC_2(VAR_7));
 VAR_11.u.mdio.raddr = FUNC_5(VAR_8);
 VAR_11.u.mdio.rval = FUNC_5(VAR_9);

 return FUNC_8(VAR_4, VAR_5, &VAR_11, sizeof(VAR_11), ((void*)0));
}
