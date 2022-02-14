
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_reset_cmd {void* retval_len16; void* op_to_write; } ;
struct adapter {int dummy; } ;
typedef int cmd ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct fw_reset_cmd) ;
 int VAR_1 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct fw_reset_cmd*,int ,int) ;
 int FUNC_4 (struct adapter*,struct fw_reset_cmd*,int,int *) ;

int FUNC_5(struct adapter *VAR_2)
{
 struct fw_reset_cmd VAR_3;

 FUNC_3(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.op_to_write = FUNC_2(FUNC_0(VAR_1) |
          VAR_0);
 VAR_3.retval_len16 = FUNC_2(FUNC_1(VAR_3));
 return FUNC_4(VAR_2, &VAR_3, sizeof(VAR_3), ((void*)0));
}
