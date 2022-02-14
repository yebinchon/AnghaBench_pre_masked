
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_inst {int done; int error; } ;
struct venus_core {int dummy; } ;
struct hfi_msg_session_flush_done_pkt {int error_type; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct venus_core *VAR_0,
       struct venus_inst *VAR_1, void *VAR_2)
{
 struct hfi_msg_session_flush_done_pkt *VAR_3 = VAR_2;

 VAR_1->error = VAR_3->error_type;
 FUNC_0(&VAR_1->done);
}
