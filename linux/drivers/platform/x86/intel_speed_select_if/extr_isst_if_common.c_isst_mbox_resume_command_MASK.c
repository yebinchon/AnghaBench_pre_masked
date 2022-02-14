
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct isst_if_mbox_cmd {int command; int sub_command; int logical_cpu; int req_data; int parameter; } ;
struct isst_if_cmd_cb {int (* cmd_callback ) (int *,int*,int) ;} ;
struct isst_cmd {int cmd; int cpu; int data; int param; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int*,int) ;

__attribute__((used)) static void FUNC_2(struct isst_if_cmd_cb *VAR_0,
         struct isst_cmd *VAR_1)
{
 struct isst_if_mbox_cmd VAR_2;
 int VAR_3;

 VAR_2.command = (VAR_1->cmd & FUNC_0(31, 16)) >> 16;
 VAR_2.sub_command = VAR_1->cmd & FUNC_0(15, 0);
 VAR_2.parameter = VAR_1->param;
 VAR_2.req_data = VAR_1->data;
 VAR_2.logical_cpu = VAR_1->cpu;
 (VAR_0->cmd_callback)((u8 *)&VAR_2, &VAR_3, 1);
}
