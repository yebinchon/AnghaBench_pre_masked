
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {scalar_t__ created; } ;
struct visor_device {int name; struct controlvm_message_header* pending_msg_hdr; TYPE_2__ state; } ;
struct TYPE_6__ {int dev_no; int bus_no; } ;
struct controlvm_message_packet {TYPE_1__ destroy_device; } ;
struct controlvm_message_header {int dummy; } ;
struct TYPE_8__ {int response_expected; } ;
struct TYPE_9__ {int id; TYPE_3__ flags; } ;
struct controlvm_message {TYPE_4__ hdr; struct controlvm_message_packet cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,TYPE_4__*,int) ;
 int FUNC_1 (int ) ;
 struct controlvm_message_header* FUNC_2 (int,int ) ;
 int FUNC_3 (struct controlvm_message_header*,TYPE_4__*,int) ;
 int FUNC_4 (struct visor_device*) ;
 struct visor_device* FUNC_5 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_6(struct controlvm_message *VAR_5)
{
 struct controlvm_message_packet *VAR_6 = &VAR_5->cmd;
 struct controlvm_message_header *VAR_7;
 u32 VAR_8 = VAR_6->destroy_device.bus_no;
 u32 VAR_9 = VAR_6->destroy_device.dev_no;
 struct visor_device *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_5(VAR_8, VAR_9, ((void*)0));
 if (!VAR_10) {
  VAR_11 = -VAR_2;
  goto err_respond;
 }
 if (VAR_10->state.created == 0) {
  VAR_11 = -VAR_0;
  goto err_respond;
 }
 if (VAR_10->pending_msg_hdr) {

  VAR_11 = -VAR_1;
  goto err_respond;
 }
 if (VAR_5->hdr.flags.response_expected == 1) {
  VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_4);
  if (!VAR_7) {
   VAR_11 = -VAR_3;
   goto err_respond;
  }

  FUNC_3(VAR_7, &VAR_5->hdr,
         sizeof(struct controlvm_message_header));
  VAR_10->pending_msg_hdr = VAR_7;
 }
 FUNC_1(VAR_10->name);
 FUNC_4(VAR_10);
 return 0;

err_respond:
 if (VAR_5->hdr.flags.response_expected == 1)
  FUNC_0(VAR_5->hdr.id, &VAR_5->hdr, VAR_11);
 return VAR_11;
}
