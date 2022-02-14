
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_inst {int dummy; } ;
struct venus_core {int dev; } ;
struct hfi_msg_sys_pc_prep_done_pkt {int error_type; } ;


 int FUNC_0 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_1(struct venus_core *VAR_0,
        struct venus_inst *VAR_1, void *VAR_2)
{
 struct hfi_msg_sys_pc_prep_done_pkt *VAR_3 = VAR_2;

 FUNC_0(VAR_0->dev, "pc prepare done (error %x)\n", VAR_3->error_type);
}
