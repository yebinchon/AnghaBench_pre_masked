
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_cmd_args {int dummy; } ;
struct qlcnic_back_channel {int dummy; } ;
struct qlcnic_adapter {scalar_t__ need_fw_reset; TYPE_2__* ahw; } ;
struct TYPE_4__ {TYPE_1__* sriov; } ;
struct TYPE_3__ {struct qlcnic_back_channel bc; } ;


 int VAR_0 ;
 int FUNC_0 (struct qlcnic_back_channel*,struct qlcnic_cmd_args*) ;

__attribute__((used)) static int FUNC_1(struct qlcnic_adapter *VAR_1,
     struct qlcnic_cmd_args *VAR_2)
{

 struct qlcnic_back_channel *VAR_3 = &VAR_1->ahw->sriov->bc;

 if (VAR_1->need_fw_reset)
  return -VAR_0;

 FUNC_0(VAR_3, VAR_2);

 return 0;
}
