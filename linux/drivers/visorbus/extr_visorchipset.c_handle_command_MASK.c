
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct parser_context {int dummy; } ;
struct TYPE_10__ {int phys_device; } ;
struct TYPE_11__ {TYPE_1__ flags; } ;
struct controlvm_message_packet {TYPE_2__ device_change_state; } ;
struct TYPE_12__ {int response_expected; } ;
struct TYPE_13__ {int id; TYPE_3__ flags; scalar_t__ payload_bytes; scalar_t__ payload_vm_offset; } ;
struct controlvm_message {TYPE_4__ hdr; struct controlvm_message_packet cmd; } ;
struct TYPE_14__ {int controlvm_channel; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_9__* VAR_5 ;
 int FUNC_0 (struct controlvm_message*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (struct controlvm_message*,TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_4__*,int ,int *) ;
 int FUNC_6 (struct controlvm_message*) ;
 int FUNC_7 (struct parser_context*) ;
 struct parser_context* FUNC_8 (scalar_t__,scalar_t__,int*) ;
 int FUNC_9 (struct controlvm_message*,struct parser_context*) ;
 int FUNC_10 (struct controlvm_message*) ;
 int FUNC_11 (struct controlvm_message*) ;
 int FUNC_12 (struct controlvm_message*) ;
 int FUNC_13 (struct controlvm_message*) ;
 int FUNC_14 (struct controlvm_message*) ;
 int FUNC_15 (int ,int ,struct controlvm_message*) ;

__attribute__((used)) static int FUNC_16(struct controlvm_message VAR_6, u64 VAR_7)
{
 struct controlvm_message_packet *VAR_8 = &VAR_6.cmd;
 u64 VAR_9;
 u32 VAR_10;
 struct parser_context *VAR_11 = ((void*)0);
 struct controlvm_message VAR_12;
 int VAR_13 = 0;


 VAR_9 = VAR_7 + VAR_6.hdr.payload_vm_offset;
 VAR_10 = VAR_6.hdr.payload_bytes;





 if (VAR_10) {
  bool VAR_14;

  VAR_11 = FUNC_8(VAR_9, VAR_10, &VAR_14);
  if (!VAR_11 && VAR_14)
   return -VAR_3;
 }
 FUNC_4(&VAR_12, &VAR_6.hdr, VAR_2);
 VAR_13 = FUNC_15(VAR_5->controlvm_channel,
     VAR_0, &VAR_12);
 if (VAR_13)
  return VAR_13;
 switch (VAR_6.hdr.id) {
 case 135:
  VAR_13 = FUNC_0(&VAR_6);
  break;
 case 137:
  VAR_13 = FUNC_10(&VAR_6);
  break;
 case 136:
  VAR_13 = FUNC_11(&VAR_6);
  break;
 case 138:
  VAR_13 = FUNC_9(&VAR_6, VAR_11);
  break;
 case 129:
  VAR_13 = FUNC_13(&VAR_6);
  break;
 case 131:
  if (VAR_8->device_change_state.flags.phys_device) {
   VAR_13 = FUNC_6(&VAR_6);
  } else {




   VAR_13 = FUNC_12(&VAR_6);
   break;
  }
  break;
 case 128:
  VAR_13 = FUNC_14(&VAR_6);
  break;
 case 130:

  if (VAR_6.hdr.flags.response_expected)
   FUNC_5(&VAR_6.hdr, VAR_2,
       ((void*)0));
  break;
 case 134:
  VAR_13 = FUNC_2(&VAR_6.hdr);
  break;
 case 133:
  VAR_13 = FUNC_3(&VAR_6.hdr);
  break;
 case 132:
  VAR_13 = FUNC_1(&VAR_6.hdr);
  break;
 default:
  VAR_13 = -VAR_4;
  if (VAR_6.hdr.flags.response_expected)
   FUNC_5(&VAR_6.hdr,
       -VAR_1, ((void*)0));
  break;
 }
 if (VAR_11) {
  FUNC_7(VAR_11);
  VAR_11 = ((void*)0);
 }
 return VAR_13;
}
