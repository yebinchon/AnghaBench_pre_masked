
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct controlvm_message_header {int dummy; } ;
struct TYPE_3__ {int failed; } ;
struct TYPE_4__ {scalar_t__ completion_status; TYPE_1__ flags; scalar_t__ payload_max_bytes; scalar_t__ payload_vm_offset; scalar_t__ payload_bytes; } ;
struct controlvm_message {TYPE_2__ hdr; } ;


 int FUNC_0 (TYPE_2__*,struct controlvm_message_header*,int) ;
 int FUNC_1 (struct controlvm_message*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct controlvm_message *VAR_0,
        struct controlvm_message_header *VAR_1,
        int VAR_2)
{
 FUNC_1(VAR_0, 0, sizeof(struct controlvm_message));
 FUNC_0(&VAR_0->hdr, VAR_1, sizeof(struct controlvm_message_header));
 VAR_0->hdr.payload_bytes = 0;
 VAR_0->hdr.payload_vm_offset = 0;
 VAR_0->hdr.payload_max_bytes = 0;
 if (VAR_2 < 0) {
  VAR_0->hdr.flags.failed = 1;
  VAR_0->hdr.completion_status = (u32)(-VAR_2);
 }
}
