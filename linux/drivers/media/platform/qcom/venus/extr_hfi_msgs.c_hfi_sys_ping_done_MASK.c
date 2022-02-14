
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_inst {int dummy; } ;
struct venus_core {int done; int error; } ;
struct hfi_msg_sys_ping_ack_pkt {int client_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct venus_core *VAR_2, struct venus_inst *VAR_3,
         void *VAR_4)
{
 struct hfi_msg_sys_ping_ack_pkt *VAR_5 = VAR_4;

 VAR_2->error = VAR_0;

 if (VAR_5->client_data != 0xbeef)
  VAR_2->error = VAR_1;

 FUNC_0(&VAR_2->done);
}
