
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int func; } ;
struct TYPE_4__ {TYPE_1__ work; } ;
struct qlcnic_adapter {TYPE_2__ fw_work; int state; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct qlcnic_adapter *VAR_1)
{
 while (FUNC_1(VAR_0, &VAR_1->state))
  FUNC_2(10000, 11000);

 if (!VAR_1->fw_work.work.func)
  return;

 FUNC_0(&VAR_1->fw_work);
}
