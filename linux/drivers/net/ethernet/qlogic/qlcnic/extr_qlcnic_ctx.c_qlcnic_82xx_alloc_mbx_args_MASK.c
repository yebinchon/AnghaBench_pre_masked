
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qlcnic_mailbox_metadata {scalar_t__ cmd; int out_args; int in_args; } ;
struct TYPE_4__ {scalar_t__* arg; int num; } ;
struct TYPE_3__ {void* arg; int num; } ;
struct qlcnic_cmd_args {TYPE_2__ req; TYPE_1__ rsp; } ;
struct qlcnic_adapter {int dummy; } ;


 int FUNC_0 (struct qlcnic_mailbox_metadata*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (scalar_t__*) ;
 struct qlcnic_mailbox_metadata* VAR_2 ;

int FUNC_3(struct qlcnic_cmd_args *VAR_3,
          struct qlcnic_adapter *VAR_4, u32 VAR_5)
{
 int VAR_6, VAR_7;
 const struct qlcnic_mailbox_metadata *VAR_8;

 VAR_8 = VAR_2;
 VAR_7 = FUNC_0(VAR_2);
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  if (VAR_5 == VAR_8[VAR_6].cmd) {
   VAR_3->req.num = VAR_8[VAR_6].in_args;
   VAR_3->rsp.num = VAR_8[VAR_6].out_args;
   VAR_3->req.arg = FUNC_1(VAR_3->req.num,
            sizeof(u32), VAR_1);
   if (!VAR_3->req.arg)
    return -VAR_0;
   VAR_3->rsp.arg = FUNC_1(VAR_3->rsp.num,
            sizeof(u32), VAR_1);
   if (!VAR_3->rsp.arg) {
    FUNC_2(VAR_3->req.arg);
    VAR_3->req.arg = ((void*)0);
    return -VAR_0;
   }
   VAR_3->req.arg[0] = VAR_5;
   break;
  }
 }
 return 0;
}
