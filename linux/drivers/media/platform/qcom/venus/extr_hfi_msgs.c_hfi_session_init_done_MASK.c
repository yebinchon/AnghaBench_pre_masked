
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct venus_inst {int done; scalar_t__ error; } ;
struct venus_core {int dummy; } ;
struct TYPE_4__ {int size; } ;
struct TYPE_3__ {TYPE_2__ hdr; } ;
struct hfi_msg_session_init_done_pkt {scalar_t__ error_type; int data; TYPE_1__ shdr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct venus_core*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct venus_core*,struct venus_inst*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct venus_core *VAR_2,
      struct venus_inst *VAR_3, void *VAR_4)
{
 struct hfi_msg_session_init_done_pkt *VAR_5 = VAR_4;
 int VAR_6;
 u32 VAR_7;

 VAR_7 = VAR_5->error_type;
 if (VAR_7 != VAR_0)
  goto done;

 if (!FUNC_0(VAR_2))
  goto done;

 VAR_6 = VAR_5->shdr.hdr.size - sizeof(*VAR_5) + sizeof(u32);
 if (VAR_6 <= 0) {
  VAR_7 = VAR_1;
  goto done;
 }

 VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_5->data, VAR_6);
done:
 VAR_3->error = VAR_7;
 FUNC_1(&VAR_3->done);
}
