
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int ctxt_data5; int ctxt_data4; int ctxt_data3; int ctxt_data2; int ctxt_data1; int ctxt_data0; void* physid; } ;
struct TYPE_4__ {TYPE_1__ idctxt; } ;
struct fw_ldst_cmd {TYPE_2__ u; void* cycles_to_len16; void* op_to_addrspace; } ;
struct adapter {int dummy; } ;
typedef enum ctxt_type { ____Placeholder_ctxt_type } ctxt_type ;
typedef int c ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_1 (int) ;
 unsigned int FUNC_2 (struct fw_ldst_cmd) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (unsigned int) ;
 int FUNC_5 (struct fw_ldst_cmd*,int ,int) ;
 int FUNC_6 (struct adapter*,unsigned int,struct fw_ldst_cmd*,int,struct fw_ldst_cmd*) ;

int FUNC_7(struct adapter *VAR_6, unsigned int VAR_7, unsigned int VAR_8,
     enum ctxt_type VAR_9, u32 *VAR_10)
{
 struct fw_ldst_cmd VAR_11;
 int VAR_12;

 if (VAR_9 == VAR_0)
  VAR_12 = VAR_4;
 else
  VAR_12 = VAR_3;

 FUNC_5(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.op_to_addrspace = FUNC_4(FUNC_0(VAR_5) |
     VAR_2 | VAR_1 |
     FUNC_1(VAR_12));
 VAR_11.cycles_to_len16 = FUNC_4(FUNC_2(VAR_11));
 VAR_11.u.idctxt.physid = FUNC_4(VAR_8);

 VAR_12 = FUNC_6(VAR_6, VAR_7, &VAR_11, sizeof(VAR_11), &VAR_11);
 if (VAR_12 == 0) {
  VAR_10[0] = FUNC_3(VAR_11.u.idctxt.ctxt_data0);
  VAR_10[1] = FUNC_3(VAR_11.u.idctxt.ctxt_data1);
  VAR_10[2] = FUNC_3(VAR_11.u.idctxt.ctxt_data2);
  VAR_10[3] = FUNC_3(VAR_11.u.idctxt.ctxt_data3);
  VAR_10[4] = FUNC_3(VAR_11.u.idctxt.ctxt_data4);
  VAR_10[5] = FUNC_3(VAR_11.u.idctxt.ctxt_data5);
 }
 return VAR_12;
}
