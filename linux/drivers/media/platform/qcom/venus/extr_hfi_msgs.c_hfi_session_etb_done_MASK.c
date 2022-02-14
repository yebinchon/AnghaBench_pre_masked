
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct venus_inst {TYPE_1__* ops; int error; } ;
struct venus_core {int dummy; } ;
struct hfi_msg_session_empty_buffer_done_pkt {int offset; int filled_len; int input_tag; int error_type; } ;
struct TYPE_2__ {int (* buf_done ) (struct venus_inst*,int ,int ,int ,int ,int ,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct venus_inst*,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct venus_core *VAR_1,
     struct venus_inst *VAR_2, void *VAR_3)
{
 struct hfi_msg_session_empty_buffer_done_pkt *VAR_4 = VAR_3;

 VAR_2->error = VAR_4->error_type;
 VAR_2->ops->buf_done(VAR_2, VAR_0, VAR_4->input_tag,
       VAR_4->filled_len, VAR_4->offset, 0, 0, 0);
}
