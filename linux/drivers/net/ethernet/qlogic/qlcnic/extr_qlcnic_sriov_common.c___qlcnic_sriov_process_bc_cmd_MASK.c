
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_1__ rsp; } ;
struct qlcnic_bc_trans {int dummy; } ;
struct qlcnic_adapter {int dummy; } ;


 scalar_t__ FUNC_0 (struct qlcnic_adapter*) ;
 int FUNC_1 (struct qlcnic_adapter*,struct qlcnic_bc_trans*,struct qlcnic_cmd_args*) ;

__attribute__((used)) static void FUNC_2(struct qlcnic_adapter *VAR_0,
       struct qlcnic_bc_trans *VAR_1,
       struct qlcnic_cmd_args *VAR_2)
{






 VAR_2->rsp.arg[0] |= (0x9 << 25);
 return;
}
