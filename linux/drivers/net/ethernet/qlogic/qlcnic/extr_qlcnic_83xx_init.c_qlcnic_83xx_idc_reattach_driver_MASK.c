
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_adapter {scalar_t__ portnum; int dcb; TYPE_2__* nic_ops; TYPE_1__* ahw; } ;
struct TYPE_4__ {scalar_t__ (* init_driver ) (struct qlcnic_adapter*) ;} ;
struct TYPE_3__ {int mailbox; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qlcnic_adapter*) ;
 int FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (struct qlcnic_adapter*,int) ;
 int FUNC_4 (struct qlcnic_adapter*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct qlcnic_adapter*) ;
 int FUNC_8 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_9 (struct qlcnic_adapter*) ;

int FUNC_10(struct qlcnic_adapter *VAR_1)
{
 int VAR_2;

 FUNC_5(VAR_1->ahw->mailbox);
 FUNC_1(VAR_1);

 FUNC_4(VAR_1, 1);

 VAR_2 = FUNC_8(VAR_1);
 if (VAR_2)
  return VAR_2;

 FUNC_1(VAR_1);

 if (FUNC_0(VAR_1)) {
  FUNC_3(VAR_1, 1);
  return -VAR_0;
 }

 if (VAR_1->nic_ops->init_driver(VAR_1)) {
  FUNC_3(VAR_1, 1);
  return -VAR_0;
 }

 if (VAR_1->portnum == 0)
  FUNC_7(VAR_1);

 FUNC_6(VAR_1->dcb);
 FUNC_2(VAR_1);

 return 0;
}
