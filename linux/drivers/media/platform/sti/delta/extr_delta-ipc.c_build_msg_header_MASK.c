
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct delta_ipc_header_msg {int command; int copro_hdl; int host_hdl; int tag; } ;
struct delta_ipc_ctx {int copro_hdl; } ;
typedef enum delta_ipc_fw_command { ____Placeholder_delta_ipc_fw_command } delta_ipc_fw_command ;


 int VAR_0 ;
 int FUNC_0 (struct delta_ipc_ctx*) ;

__attribute__((used)) static void FUNC_1(struct delta_ipc_ctx *VAR_1,
        enum delta_ipc_fw_command VAR_2,
        struct delta_ipc_header_msg *VAR_3)
{
 VAR_3->tag = VAR_0;
 VAR_3->host_hdl = FUNC_0(VAR_1);
 VAR_3->copro_hdl = VAR_1->copro_hdl;
 VAR_3->command = VAR_2;
}
