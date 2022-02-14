
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_iq_cmd {void* fl1id; void* fl0id; void* iqid; void* type_to_iqandstindex; void* alloc_to_len16; void* op_to_vfn; } ;
struct adapter {int dummy; } ;
typedef int c ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (struct fw_iq_cmd) ;
 void* FUNC_5 (unsigned int) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (struct fw_iq_cmd*,int ,int) ;
 int FUNC_8 (struct adapter*,unsigned int,struct fw_iq_cmd*,int,int *) ;

int FUNC_9(struct adapter *VAR_4, unsigned int VAR_5, unsigned int VAR_6,
        unsigned int VAR_7, unsigned int VAR_8, unsigned int VAR_9,
        unsigned int VAR_10, unsigned int VAR_11)
{
 struct fw_iq_cmd VAR_12;

 FUNC_7(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.op_to_vfn = FUNC_6(FUNC_0(VAR_2) | VAR_1 |
      VAR_0 | FUNC_1(VAR_6) |
      FUNC_3(VAR_7));
 VAR_12.alloc_to_len16 = FUNC_6(VAR_3 | FUNC_4(VAR_12));
 VAR_12.type_to_iqandstindex = FUNC_6(FUNC_2(VAR_8));
 VAR_12.iqid = FUNC_5(VAR_9);
 VAR_12.fl0id = FUNC_5(VAR_10);
 VAR_12.fl1id = FUNC_5(VAR_11);
 return FUNC_8(VAR_4, VAR_5, &VAR_12, sizeof(VAR_12), ((void*)0));
}
