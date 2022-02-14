
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_vi_cmd {int type_viid; void* alloc_to_len16; void* op_to_vfn; } ;
struct adapter {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct fw_vi_cmd) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct fw_vi_cmd*,int ,int) ;
 int FUNC_6 (struct adapter*,struct fw_vi_cmd*,int,int *) ;

int FUNC_7(struct adapter *VAR_4, int VAR_5)
{
 struct fw_vi_cmd VAR_6;




 FUNC_5(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.op_to_vfn = FUNC_4(FUNC_0(VAR_2) |
        VAR_1 |
        VAR_0);
 VAR_6.alloc_to_len16 = FUNC_4(FUNC_1(VAR_6) |
      VAR_3);
 VAR_6.type_viid = FUNC_3(FUNC_2(VAR_5));
 return FUNC_6(VAR_4, &VAR_6, sizeof(VAR_6), ((void*)0));
}
