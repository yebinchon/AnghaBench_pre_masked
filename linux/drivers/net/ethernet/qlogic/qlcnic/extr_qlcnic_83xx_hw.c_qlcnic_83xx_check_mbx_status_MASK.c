
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qlcnic_mailbox {int status; } ;
struct TYPE_2__ {int collect_dump; } ;
struct qlcnic_hardware_context {TYPE_1__ idc; struct qlcnic_mailbox* mailbox; } ;
struct qlcnic_adapter {struct qlcnic_hardware_context* ahw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct qlcnic_hardware_context*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct qlcnic_adapter *VAR_4)
{
 struct qlcnic_hardware_context *VAR_5 = VAR_4->ahw;
 struct qlcnic_mailbox *VAR_6 = VAR_5->mailbox;
 u32 VAR_7;

 if (!FUNC_2(VAR_3, &VAR_6->status))
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_5, VAR_2);
 if (VAR_7) {
  FUNC_1(VAR_3, &VAR_6->status);
  VAR_5->idc.collect_dump = 1;
  return -VAR_1;
 }

 return 0;
}
