
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {scalar_t__ created; } ;
struct visor_device {struct controlvm_message_header* pending_msg_hdr; TYPE_3__ state; } ;
struct controlvm_message_header {int dummy; } ;
struct TYPE_10__ {int response_expected; } ;
struct TYPE_11__ {int id; TYPE_4__ flags; } ;
struct TYPE_7__ {int bus_no; } ;
struct TYPE_8__ {TYPE_1__ destroy_bus; } ;
struct controlvm_message {TYPE_5__ hdr; TYPE_2__ cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,TYPE_5__*,int) ;
 struct controlvm_message_header* FUNC_1 (int,int ) ;
 int FUNC_2 (struct controlvm_message_header*,TYPE_5__*,int) ;
 struct visor_device* FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (struct visor_device*) ;

__attribute__((used)) static int FUNC_5(struct controlvm_message *VAR_6)
{
 struct controlvm_message_header *VAR_7;
 u32 VAR_8 = VAR_6->cmd.destroy_bus.bus_no;
 struct visor_device *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(VAR_8, VAR_0, ((void*)0));
 if (!VAR_9) {
  VAR_10 = -VAR_2;
  goto err_respond;
 }
 if (VAR_9->state.created == 0) {
  VAR_10 = -VAR_3;
  goto err_respond;
 }
 if (VAR_9->pending_msg_hdr) {

  VAR_10 = -VAR_1;
  goto err_respond;
 }
 if (VAR_6->hdr.flags.response_expected == 1) {
  VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_5);
  if (!VAR_7) {
   VAR_10 = -VAR_4;
   goto err_respond;
  }
  FUNC_2(VAR_7, &VAR_6->hdr,
         sizeof(struct controlvm_message_header));
  VAR_9->pending_msg_hdr = VAR_7;
 }

 FUNC_4(VAR_9);
 return 0;

err_respond:
 if (VAR_6->hdr.flags.response_expected == 1)
  FUNC_0(VAR_6->hdr.id, &VAR_6->hdr, VAR_10);
 return VAR_10;
}
