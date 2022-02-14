
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_iq_cmd {void* fl1id; void* fl0id; void* iqid; void* type_to_iqandstindex; void* alloc_to_len16; void* op_to_vfn; } ;
struct adapter {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct fw_iq_cmd) ;
 void* FUNC_3 (unsigned int) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct fw_iq_cmd*,int ,int) ;
 int FUNC_6 (struct adapter*,struct fw_iq_cmd*,int,int *) ;

int FUNC_7(struct adapter *VAR_4, unsigned int VAR_5,
   unsigned int VAR_6, unsigned int VAR_7, unsigned int VAR_8)
{
 struct fw_iq_cmd VAR_9;

 FUNC_5(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.op_to_vfn = FUNC_4(FUNC_0(VAR_2) |
        VAR_1 |
        VAR_0);
 VAR_9.alloc_to_len16 = FUNC_4(VAR_3 |
      FUNC_2(VAR_9));
 VAR_9.type_to_iqandstindex =
  FUNC_4(FUNC_1(VAR_5));

 VAR_9.iqid = FUNC_3(VAR_6);
 VAR_9.fl0id = FUNC_3(VAR_7);
 VAR_9.fl1id = FUNC_3(VAR_8);
 return FUNC_6(VAR_4, &VAR_9, sizeof(VAR_9), ((void*)0));
}
