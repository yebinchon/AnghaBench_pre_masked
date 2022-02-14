
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int ctrl_to_fn; int r; int * data; int select_naccess; } ;
struct TYPE_4__ {TYPE_1__ pcie; } ;
struct fw_ldst_cmd {TYPE_2__ u; void* cycles_to_len16; void* op_to_addrspace; } ;
struct adapter {int mbox; int pf; } ;
typedef int ldst_cmd ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct fw_ldst_cmd) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (struct fw_ldst_cmd*,int ,int) ;
 int FUNC_8 (struct adapter*,int,int*) ;
 int FUNC_9 (struct adapter*,int ,struct fw_ldst_cmd*,int,struct fw_ldst_cmd*) ;

u32 FUNC_10(struct adapter *VAR_5, int VAR_6)
{
 u32 VAR_7, VAR_8;




 struct fw_ldst_cmd VAR_9;
 int VAR_10;

 FUNC_7(&VAR_9, 0, sizeof(VAR_9));
 VAR_8 = FUNC_1(VAR_2);
 VAR_9.op_to_addrspace = FUNC_6(FUNC_0(VAR_3) |
            VAR_1 |
            VAR_0 |
            VAR_8);
 VAR_9.cycles_to_len16 = FUNC_6(FUNC_4(VAR_9));
 VAR_9.u.pcie.select_naccess = FUNC_3(1);
 VAR_9.u.pcie.ctrl_to_fn =
  (VAR_4 | FUNC_2(VAR_5->pf));
 VAR_9.u.pcie.r = VAR_6;




 VAR_10 = FUNC_9(VAR_5, VAR_5->mbox, &VAR_9, sizeof(VAR_9),
    &VAR_9);
 if (VAR_10 == 0)
  VAR_7 = FUNC_5(VAR_9.u.pcie.data[0]);
 else



  FUNC_8(VAR_5, VAR_6, &VAR_7);
 return VAR_7;
}
