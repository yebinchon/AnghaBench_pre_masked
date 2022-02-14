
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {void* msg_ctxtflush; } ;
struct TYPE_4__ {TYPE_1__ idctxt; } ;
struct fw_ldst_cmd {TYPE_2__ u; void* cycles_to_len16; void* op_to_addrspace; } ;
struct adapter {int dummy; } ;
typedef int c ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (struct fw_ldst_cmd) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct fw_ldst_cmd*,int ,int) ;
 int FUNC_5 (struct adapter*,unsigned int,struct fw_ldst_cmd*,int,struct fw_ldst_cmd*) ;

int FUNC_6(struct adapter *VAR_7, unsigned int VAR_8, int VAR_9)
{
 int VAR_10;
 u32 VAR_11;
 struct fw_ldst_cmd VAR_12;

 FUNC_4(&VAR_12, 0, sizeof(VAR_12));
 VAR_11 = FUNC_1(VAR_9 == VAR_0 ?
       VAR_3 :
       VAR_4);
 VAR_12.op_to_addrspace = FUNC_3(FUNC_0(VAR_5) |
     VAR_2 | VAR_1 |
     VAR_11);
 VAR_12.cycles_to_len16 = FUNC_3(FUNC_2(VAR_12));
 VAR_12.u.idctxt.msg_ctxtflush = FUNC_3(VAR_6);

 VAR_10 = FUNC_5(VAR_7, VAR_8, &VAR_12, sizeof(VAR_12), &VAR_12);
 return VAR_10;
}
