
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct venus_inst {int dummy; } ;
struct venus_core {int done; scalar_t__ error; } ;
struct TYPE_2__ {int size; } ;
struct hfi_msg_sys_init_done_pkt {scalar_t__ error_type; int data; TYPE_1__ hdr; int num_properties; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct venus_core*,struct venus_inst*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct venus_core *VAR_3, struct venus_inst *VAR_4,
         void *VAR_5)
{
 struct hfi_msg_sys_init_done_pkt *VAR_6 = VAR_5;
 int VAR_7;
 u32 VAR_8;

 VAR_8 = VAR_6->error_type;
 if (VAR_8 != VAR_0)
  goto done;

 if (!VAR_6->num_properties) {
  VAR_8 = VAR_2;
  goto done;
 }

 VAR_7 = VAR_6->hdr.size - sizeof(*VAR_6) + sizeof(u32);
 if (VAR_7 <= 0) {

  VAR_8 = VAR_1;
  goto done;
 }

 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_6->data, VAR_7);

done:
 VAR_3->error = VAR_8;
 FUNC_0(&VAR_3->done);
}
