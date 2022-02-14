
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fw_params_cmd {TYPE_1__* param; void* retval_len16; void* op_to_vfn; } ;
struct adapter {int mbox; int pf; } ;
typedef enum fw_params_param_dev_fwcache { ____Placeholder_fw_params_param_dev_fwcache } fw_params_param_dev_fwcache ;
typedef int c ;
struct TYPE_2__ {void* val; void* mnem; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct fw_params_cmd) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (struct fw_params_cmd*,int ,int) ;
 int FUNC_8 (struct adapter*,int ,struct fw_params_cmd*,int,int *) ;

int FUNC_9(struct adapter *VAR_5, enum fw_params_param_dev_fwcache VAR_6)
{
 struct fw_params_cmd VAR_7;

 FUNC_7(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.op_to_vfn =
  FUNC_6(FUNC_0(VAR_2) |
       VAR_0 | VAR_1 |
       FUNC_2(VAR_5->pf) |
       FUNC_3(0));
 VAR_7.retval_len16 = FUNC_6(FUNC_1(VAR_7));
 VAR_7.param[0].mnem =
  FUNC_6(FUNC_4(VAR_3) |
       FUNC_5(VAR_4));
 VAR_7.param[0].val = FUNC_6(VAR_6);

 return FUNC_8(VAR_5, VAR_5->mbox, &VAR_7, sizeof(VAR_7), ((void*)0));
}
